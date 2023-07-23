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

    ostream& indent(ostream& os) {
        IndentStreamBuf* ids = dynamic_cast<IndentStreamBuf*>(os.rdbuf());
        if (ids != nullptr) {
            ids->indents += 1;
        }
        return os;
    }

    ostream& unindent(ostream& os) {
        IndentStreamBuf* ids = dynamic_cast<IndentStreamBuf*>(os.rdbuf());
        if (ids != nullptr) {
            if (ids->indents > 0) {
                ids->indents -= 1;
            }
        }
        
        return os;
    }

}

#endif