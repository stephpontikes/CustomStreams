#ifndef INDENTSTREAM_H
#define INDENTSTREAM_H

#include "IndentStreamBuf.hpp"

using std::ostream;

namespace IndentStream_v1 {
    
    class IndentStream : public ostream {
    public:
        IndentStream(ostream& os) : ostream(new IndentStreamBuf(os)) {};
        ~IndentStream() { delete this->rdbuf(); }
    };

    template<int i>
    ostream& indent(ostream& os) {
        IndentStreamBuf* ids = dynamic_cast<IndentStreamBuf*>(os.rdbuf());
        if (ids != nullptr) {
            ids->indents += i;
        }
        return os;
    }
   

    template<int i>
    ostream& unindent(ostream& os) {
        IndentStreamBuf* ids = dynamic_cast<IndentStreamBuf*>(os.rdbuf());
        if (ids != nullptr) {
            if (ids->indents > i) {
                ids->indents -= ;
            } else {
                ids->indets = 0;
            }
        }
        
        return os;
    }

    const auto& tabIndent = indent<4>;
    const auto& tabUnindent = unindent<4>;

}

#endif