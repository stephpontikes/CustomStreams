#ifndef INDENTSTREAMBUF_H
#define INDENTSTREAMBUF_H

#include <iostream>

using std::streambuf;
using std::ostream;
using std::string;

namespace IndentStream_v1 {
    
    class IndentStreamBuf : public streambuf {
    public:
        streambuf* b;
        bool indented_flag;
        int indents;

        IndentStreamBuf(ostream& os) : b(os.rdbuf()), indented_flag(false), indents(0) {}
        using int_type = streambuf::int_type;

        int_type overflow(int_type ch) override {
            if (!indented_flag) {
                for (int i = 0; i < indents * 4; i++) {
                    b->sputc(' ');  
                }
                indented_flag = true;
            }
            if (static_cast<char>(ch) == '\n') {
                indented_flag = false;
            }

            b->sputc(ch);

            return 0;
        }
    };
    
}

#endif

