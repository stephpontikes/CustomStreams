#include "ColorStreamBuf.hpp"

using std::ostream;

namespace ColorStream_v1 {
    class ColorStream : public ostream {
    public:
        ColorStream(ostream& os) : ostream(new ColorStreamBuf(os)) {}
        ~ColorStream() { delete this->rdbuf(); }
    };

    template<typename T>
    ostream& begin(ostream& os) {
        ColorStreamBuf* cs = dynamic_cast<ColorStreamBuf*>(os.rdbuf());

        string toAdd;
        if (cs->colored) {
            toAdd = T().closeTag;
        }
        cs->ansiTag = toAdd + T().openTag;
        cs->colored = true;

        return os;
    }

    template<typename T>
    ostream& end(ostream& os) {
        ColorStreamBuf* cs = dynamic_cast<ColorStreamBuf*>(os.rdbuf());

        if (cs->colored) {
            cs->ansiTag = T().closeTag;
            cs->colored = false;
        }

        return os;
    }
    
}
