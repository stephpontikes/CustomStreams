#include <algorithm>
#include <fstream>
#include <sstream>
#include <cmath>
#include <vector>

#include "../../IndentStream/include/IndentStream.hpp"

// TODO: Find a way to check if terminal supports truecolor or just 256 ANSI colors, then edit
// generateSingleType function based on both cases.

using namespace std;
using namespace IndentStream_v1;

// TODO: Test if conversion to ANSIrgb produces more accurate colors than truecolor RGB on non-truecolor consoles
// credit to https://stackoverflow.com/questions/15682537/ansi-color-specific-rgb-sequence-bash
// int rgbToAnsi256(int r, int g, int b) {
//     if (r == g && g == b) {
//         if (r < 8) {
//             return 16;
//         }

//         if (r > 248) {
//             return 231;
//         }

//         return std::round(((r - 8) / 247) * 24) + 232;
//     }


//     int ansi = 16
//         + (36 * std::round(r / 255 * 5))
//         + (6 * std::round(g / 255 * 5))
//         + std::round(b / 255 * 5);

//     return ansi;
// }

// // credit to https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
// std::vector<std::string> split(std::string s, std::string delimiter) {
//     size_t pos_start = 0, pos_end, delim_len = delimiter.length();
//     std::string token;
//     std::vector<std::string> res;

//     while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
//         token = s.substr (pos_start, pos_end - pos_start);
//         pos_start = pos_end + delim_len;
//         res.push_back (token);
//     }

//     res.push_back(s.substr (pos_start));
//     return res;
// }

void generateBoilerplateTop(IndentStream& ids) {
    ids << "#ifndef COLORTYPES_HPP" << endl;
    ids << "#define COLORTYPES_HPP" << endl;
    ids << endl;
    ids << "#include <string>";
    ids << endl;
    ids << "using std::string;" << endl;
    ids << endl;
    ids << "namespace ColorStream_v1 {" << indent<2> << endl << endl;
    ids << "struct Color {" << tabIndent << endl;
    ids << "static inline string closeTag = \"\\033[0m\";" << endl << endl;
    ids << "template<typename T>" << endl;
    ids << "static string color(string text) {" << tabIndent << endl;
    ids << "return T::openTag + text + T::closeTag;" << tabUnindent << endl;
    ids << "}" << tabUnindent << endl;
    ids << "};" << endl << endl;
}

void generateBoilerplateBottom(IndentStream& ids) {
    ids << "}" << endl;
    ids << "#endif";
}

void generateSingleType(IndentStream& ids, string colorName, string ansiRGB) {
    ids << "struct " << colorName << " : public Color {" << tabIndent << endl;
    ids << colorName << "() : Color() {}" << endl;
    ids << "static inline string openTag = \"\\x1B[38;2;" << ansiRGB << "m\";" << tabUnindent << endl;
    ids << "};";
    ids << endl << endl;
}

int main() {
    ifstream ifs("ColorList.txt");
    ofstream ofs("../include/ColorTypes.hpp");

    IndentStream ids(ofs);

    generateBoilerplateTop(ids);

    string line;
    while(getline(ifs, line)) {
        istringstream iss(line);

        string c, rgb;
        if (!(iss >> c >> rgb)) {
            break;
        } else {
            // auto rgbVec = split(rgb, ";");
            // std::array<int, 3> rgbInts;
            // std::transform(rgbVec.begin(), rgbVec.end(), rgbInts.begin(), [](string s) {return std::stoi(s);});
            // string ansiRGB = std::to_string(rgbToAnsi256(rgbInts[0], rgbInts[1], rgbInts[2]));
            generateSingleType(ids, c, rgb);
        }
    }

    ids << tabUnindent;

    generateBoilerplateBottom(ids);
}