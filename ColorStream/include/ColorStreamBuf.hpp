#ifndef COLORSTREAM_H
#define COLORSTREAM_H

#include <iostream>
#include <string>

using std::streambuf;
using std::ostream;
using std::string;

namespace ColorStream_v1 {

    class ColorStreamBuf : public streambuf {
    public:
        streambuf* buf;
        bool colored = false;
        string ansiTag = "";

        ColorStreamBuf(ostream& os) : buf(os.rdbuf()) {}

        using int_type = streambuf::int_type;

        int_type overflow(int_type c) override {
            if (!ansiTag.empty()) {
                for (auto ch : ansiTag) {
                    buf->sputc(ch);
                }
                ansiTag = "";
            }

            buf->sputc(c);

            return 0;
        }
    };
    
}

#endif