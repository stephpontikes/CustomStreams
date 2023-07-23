#ifndef COLORTYPES_HPP
#define COLORTYPES_HPP

#include <string>
using std::string;

namespace ColorStream_v1 {
  
  struct Color {
      template<typename T>
      static string color(string text) {
          return T::openTag + text + T::closeTag;
      }

    protected:
      static inline string closeTag = "\033[0m";
  };
  
  struct Black : public Color {
      Black() : Color() {}
      static inline string openTag = "\x1B[38;2;0;0;0m";
  };
  
  struct Maroon : public Color {
      Maroon() : Color() {}
      static inline string openTag = "\x1B[38;2;128;0;0m";
  };
  
  struct Green : public Color {
      Green() : Color() {}
      static inline string openTag = "\x1B[38;2;0;128;0m";
  };
  
  struct Olive : public Color {
      Olive() : Color() {}
      static inline string openTag = "\x1B[38;2;128;128;0m";
  };
  
  struct Navy : public Color {
      Navy() : Color() {}
      static inline string openTag = "\x1B[38;2;0;0;128m";
  };
  
  struct Purple : public Color {
      Purple() : Color() {}
      static inline string openTag = "\x1B[38;2;128;0;128m";
  };
  
  struct Teal : public Color {
      Teal() : Color() {}
      static inline string openTag = "\x1B[38;2;0;128;128m";
  };
  
  struct Silver : public Color {
      Silver() : Color() {}
      static inline string openTag = "\x1B[38;2;192;192;192m";
  };
  
  struct Grey : public Color {
      Grey() : Color() {}
      static inline string openTag = "\x1B[38;2;128;128;128m";
  };
  
  struct Red : public Color {
      Red() : Color() {}
      static inline string openTag = "\x1B[38;2;255;0;0m";
  };
  
  struct Lime : public Color {
      Lime() : Color() {}
      static inline string openTag = "\x1B[38;2;0;255;0m";
  };
  
  struct Yellow : public Color {
      Yellow() : Color() {}
      static inline string openTag = "\x1B[38;2;255;255;0m";
  };
  
  struct Blue : public Color {
      Blue() : Color() {}
      static inline string openTag = "\x1B[38;2;0;0;255m";
  };
  
  struct Fuchsia : public Color {
      Fuchsia() : Color() {}
      static inline string openTag = "\x1B[38;2;255;0;255m";
  };
  
  struct Aqua : public Color {
      Aqua() : Color() {}
      static inline string openTag = "\x1B[38;2;0;255;255m";
  };
  
  struct White : public Color {
      White() : Color() {}
      static inline string openTag = "\x1B[38;2;255;255;255m";
  };
  
  struct Grey0 : public Color {
      Grey0() : Color() {}
      static inline string openTag = "\x1B[38;2;0;0;0m";
  };
  
  struct NavyBlue : public Color {
      NavyBlue() : Color() {}
      static inline string openTag = "\x1B[38;2;0;0;95m";
  };
  
  struct DarkBlue : public Color {
      DarkBlue() : Color() {}
      static inline string openTag = "\x1B[38;2;0;0;135m";
  };
  
  struct Blue3 : public Color {
      Blue3() : Color() {}
      static inline string openTag = "\x1B[38;2;0;0;175m";
  };
  
  struct Blue1 : public Color {
      Blue1() : Color() {}
      static inline string openTag = "\x1B[38;2;0;0;255m";
  };
  
  struct DarkGreen : public Color {
      DarkGreen() : Color() {}
      static inline string openTag = "\x1B[38;2;0;95;0m";
  };
  
  struct DeepSkyBlue4 : public Color {
      DeepSkyBlue4() : Color() {}
      static inline string openTag = "\x1B[38;2;0;95;95m";
  };
  
  struct DodgerBlue3 : public Color {
      DodgerBlue3() : Color() {}
      static inline string openTag = "\x1B[38;2;0;95;215m";
  };
  
  struct DodgerBlue2 : public Color {
      DodgerBlue2() : Color() {}
      static inline string openTag = "\x1B[38;2;0;95;255m";
  };
  
  struct Green4 : public Color {
      Green4() : Color() {}
      static inline string openTag = "\x1B[38;2;0;135;0m";
  };
  
  struct SpringGreen4 : public Color {
      SpringGreen4() : Color() {}
      static inline string openTag = "\x1B[38;2;0;135;95m";
  };
  
  struct Turquoise4 : public Color {
      Turquoise4() : Color() {}
      static inline string openTag = "\x1B[38;2;0;135;135m";
  };
  
  struct DeepSkyBlue3 : public Color {
      DeepSkyBlue3() : Color() {}
      static inline string openTag = "\x1B[38;2;0;135;175m";
  };
  
  struct DodgerBlue1 : public Color {
      DodgerBlue1() : Color() {}
      static inline string openTag = "\x1B[38;2;0;135;255m";
  };
  
  struct Green3 : public Color {
      Green3() : Color() {}
      static inline string openTag = "\x1B[38;2;0;175;0m";
  };
  
  struct SpringGreen3 : public Color {
      SpringGreen3() : Color() {}
      static inline string openTag = "\x1B[38;2;0;175;95m";
  };
  
  struct DarkCyan : public Color {
      DarkCyan() : Color() {}
      static inline string openTag = "\x1B[38;2;0;175;135m";
  };
  
  struct LightSeaGreen : public Color {
      LightSeaGreen() : Color() {}
      static inline string openTag = "\x1B[38;2;0;175;175m";
  };
  
  struct DeepSkyBlue2 : public Color {
      DeepSkyBlue2() : Color() {}
      static inline string openTag = "\x1B[38;2;0;175;215m";
  };
  
  struct DeepSkyBlue1 : public Color {
      DeepSkyBlue1() : Color() {}
      static inline string openTag = "\x1B[38;2;0;175;255m";
  };
  
  struct SpringGreen2 : public Color {
      SpringGreen2() : Color() {}
      static inline string openTag = "\x1B[38;2;0;215;135m";
  };
  
  struct Cyan3 : public Color {
      Cyan3() : Color() {}
      static inline string openTag = "\x1B[38;2;0;215;175m";
  };
  
  struct DarkTurquoise : public Color {
      DarkTurquoise() : Color() {}
      static inline string openTag = "\x1B[38;2;0;215;215m";
  };
  
  struct Turquoise2 : public Color {
      Turquoise2() : Color() {}
      static inline string openTag = "\x1B[38;2;0;215;255m";
  };
  
  struct Green1 : public Color {
      Green1() : Color() {}
      static inline string openTag = "\x1B[38;2;0;255;0m";
  };
  
  struct SpringGreen1 : public Color {
      SpringGreen1() : Color() {}
      static inline string openTag = "\x1B[38;2;0;255;135m";
  };
  
  struct MediumSpringGreen : public Color {
      MediumSpringGreen() : Color() {}
      static inline string openTag = "\x1B[38;2;0;255;175m";
  };
  
  struct Cyan2 : public Color {
      Cyan2() : Color() {}
      static inline string openTag = "\x1B[38;2;0;255;215m";
  };
  
  struct Cyan1 : public Color {
      Cyan1() : Color() {}
      static inline string openTag = "\x1B[38;2;0;255;255m";
  };
  
  struct DarkRed : public Color {
      DarkRed() : Color() {}
      static inline string openTag = "\x1B[38;2;95;0;0m";
  };
  
  struct UChiMaroon : public Color {
      UChiMaroon() : Color() {}
      static inline string openTag = "\x1B[38;2;89;5;5m";
  };
  
  struct DeepPink4 : public Color {
      DeepPink4() : Color() {}
      static inline string openTag = "\x1B[38;2;95;0;95m";
  };
  
  struct Purple4 : public Color {
      Purple4() : Color() {}
      static inline string openTag = "\x1B[38;2;95;0;135m";
  };
  
  struct Purple3 : public Color {
      Purple3() : Color() {}
      static inline string openTag = "\x1B[38;2;95;0;215m";
  };
  
  struct BlueViolet : public Color {
      BlueViolet() : Color() {}
      static inline string openTag = "\x1B[38;2;95;0;255m";
  };
  
  struct Orange4 : public Color {
      Orange4() : Color() {}
      static inline string openTag = "\x1B[38;2;95;95;0m";
  };
  
  struct Grey37 : public Color {
      Grey37() : Color() {}
      static inline string openTag = "\x1B[38;2;95;95;95m";
  };
  
  struct MediumPurple4 : public Color {
      MediumPurple4() : Color() {}
      static inline string openTag = "\x1B[38;2;95;95;135m";
  };
  
  struct SlateBlue3 : public Color {
      SlateBlue3() : Color() {}
      static inline string openTag = "\x1B[38;2;95;95;175m";
  };
  
  struct RoyalBlue1 : public Color {
      RoyalBlue1() : Color() {}
      static inline string openTag = "\x1B[38;2;95;95;255m";
  };
  
  struct Chartreuse4 : public Color {
      Chartreuse4() : Color() {}
      static inline string openTag = "\x1B[38;2;95;135;0m";
  };
  
  struct DarkSeaGreen4 : public Color {
      DarkSeaGreen4() : Color() {}
      static inline string openTag = "\x1B[38;2;95;135;95m";
  };
  
  struct PaleTurquoise4 : public Color {
      PaleTurquoise4() : Color() {}
      static inline string openTag = "\x1B[38;2;95;135;135m";
  };
  
  struct SteelBlue : public Color {
      SteelBlue() : Color() {}
      static inline string openTag = "\x1B[38;2;95;135;175m";
  };
  
  struct SteelBlue3 : public Color {
      SteelBlue3() : Color() {}
      static inline string openTag = "\x1B[38;2;95;135;215m";
  };
  
  struct CornflowerBlue : public Color {
      CornflowerBlue() : Color() {}
      static inline string openTag = "\x1B[38;2;95;135;255m";
  };
  
  struct Chartreuse3 : public Color {
      Chartreuse3() : Color() {}
      static inline string openTag = "\x1B[38;2;95;175;0m";
  };
  
  struct CadetBlue : public Color {
      CadetBlue() : Color() {}
      static inline string openTag = "\x1B[38;2;95;175;135m";
  };
  
  struct SkyBlue3 : public Color {
      SkyBlue3() : Color() {}
      static inline string openTag = "\x1B[38;2;95;175;215m";
  };
  
  struct SteelBlue1 : public Color {
      SteelBlue1() : Color() {}
      static inline string openTag = "\x1B[38;2;95;175;255m";
  };
  
  struct PaleGreen3 : public Color {
      PaleGreen3() : Color() {}
      static inline string openTag = "\x1B[38;2;95;215;95m";
  };
  
  struct SeaGreen3 : public Color {
      SeaGreen3() : Color() {}
      static inline string openTag = "\x1B[38;2;95;215;135m";
  };
  
  struct Aquamarine3 : public Color {
      Aquamarine3() : Color() {}
      static inline string openTag = "\x1B[38;2;95;215;175m";
  };
  
  struct MediumTurquoise : public Color {
      MediumTurquoise() : Color() {}
      static inline string openTag = "\x1B[38;2;95;215;215m";
  };
  
  struct Chartreuse2 : public Color {
      Chartreuse2() : Color() {}
      static inline string openTag = "\x1B[38;2;95;255;0m";
  };
  
  struct SeaGreen2 : public Color {
      SeaGreen2() : Color() {}
      static inline string openTag = "\x1B[38;2;95;255;95m";
  };
  
  struct SeaGreen1 : public Color {
      SeaGreen1() : Color() {}
      static inline string openTag = "\x1B[38;2;95;255;135m";
  };
  
  struct Aquamarine1 : public Color {
      Aquamarine1() : Color() {}
      static inline string openTag = "\x1B[38;2;95;255;215m";
  };
  
  struct DarkSlateGray2 : public Color {
      DarkSlateGray2() : Color() {}
      static inline string openTag = "\x1B[38;2;95;255;255m";
  };
  
  struct DarkMagenta : public Color {
      DarkMagenta() : Color() {}
      static inline string openTag = "\x1B[38;2;135;0;135m";
  };
  
  struct DarkViolet : public Color {
      DarkViolet() : Color() {}
      static inline string openTag = "\x1B[38;2;135;0;215m";
  };
  
  struct LightPink4 : public Color {
      LightPink4() : Color() {}
      static inline string openTag = "\x1B[38;2;135;95;95m";
  };
  
  struct Plum4 : public Color {
      Plum4() : Color() {}
      static inline string openTag = "\x1B[38;2;135;95;135m";
  };
  
  struct MediumPurple3 : public Color {
      MediumPurple3() : Color() {}
      static inline string openTag = "\x1B[38;2;135;95;175m";
  };
  
  struct SlateBlue1 : public Color {
      SlateBlue1() : Color() {}
      static inline string openTag = "\x1B[38;2;135;95;255m";
  };
  
  struct Yellow4 : public Color {
      Yellow4() : Color() {}
      static inline string openTag = "\x1B[38;2;135;135;0m";
  };
  
  struct Wheat4 : public Color {
      Wheat4() : Color() {}
      static inline string openTag = "\x1B[38;2;135;135;95m";
  };
  
  struct Grey53 : public Color {
      Grey53() : Color() {}
      static inline string openTag = "\x1B[38;2;135;135;135m";
  };
  
  struct LightSlateGrey : public Color {
      LightSlateGrey() : Color() {}
      static inline string openTag = "\x1B[38;2;135;135;175m";
  };
  
  struct MediumPurple : public Color {
      MediumPurple() : Color() {}
      static inline string openTag = "\x1B[38;2;135;135;215m";
  };
  
  struct LightSlateBlue : public Color {
      LightSlateBlue() : Color() {}
      static inline string openTag = "\x1B[38;2;135;135;255m";
  };
  
  struct DarkOliveGreen3 : public Color {
      DarkOliveGreen3() : Color() {}
      static inline string openTag = "\x1B[38;2;135;175;95m";
  };
  
  struct DarkSeaGreen : public Color {
      DarkSeaGreen() : Color() {}
      static inline string openTag = "\x1B[38;2;135;175;135m";
  };
  
  struct LightSkyBlue3 : public Color {
      LightSkyBlue3() : Color() {}
      static inline string openTag = "\x1B[38;2;135;175;175m";
  };
  
  struct SkyBlue2 : public Color {
      SkyBlue2() : Color() {}
      static inline string openTag = "\x1B[38;2;135;175;255m";
  };
  
  struct DarkSeaGreen3 : public Color {
      DarkSeaGreen3() : Color() {}
      static inline string openTag = "\x1B[38;2;135;215;175m";
  };
  
  struct DarkSlateGray3 : public Color {
      DarkSlateGray3() : Color() {}
      static inline string openTag = "\x1B[38;2;135;215;215m";
  };
  
  struct SkyBlue1 : public Color {
      SkyBlue1() : Color() {}
      static inline string openTag = "\x1B[38;2;135;215;255m";
  };
  
  struct Chartreuse1 : public Color {
      Chartreuse1() : Color() {}
      static inline string openTag = "\x1B[38;2;135;255;0m";
  };
  
  struct LightGreen : public Color {
      LightGreen() : Color() {}
      static inline string openTag = "\x1B[38;2;135;255;95m";
  };
  
  struct PaleGreen1 : public Color {
      PaleGreen1() : Color() {}
      static inline string openTag = "\x1B[38;2;135;255;175m";
  };
  
  struct DarkSlateGray1 : public Color {
      DarkSlateGray1() : Color() {}
      static inline string openTag = "\x1B[38;2;135;255;255m";
  };
  
  struct Red3 : public Color {
      Red3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;0;0m";
  };
  
  struct MediumVioletRed : public Color {
      MediumVioletRed() : Color() {}
      static inline string openTag = "\x1B[38;2;175;0;135m";
  };
  
  struct Magenta3 : public Color {
      Magenta3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;0;175m";
  };
  
  struct DarkOrange3 : public Color {
      DarkOrange3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;95;0m";
  };
  
  struct HotPink3 : public Color {
      HotPink3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;95;135m";
  };
  
  struct MediumOrchid3 : public Color {
      MediumOrchid3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;95;175m";
  };
  
  struct MediumOrchid : public Color {
      MediumOrchid() : Color() {}
      static inline string openTag = "\x1B[38;2;175;95;215m";
  };
  
  struct MediumPurple2 : public Color {
      MediumPurple2() : Color() {}
      static inline string openTag = "\x1B[38;2;175;95;255m";
  };
  
  struct DarkGoldenrod : public Color {
      DarkGoldenrod() : Color() {}
      static inline string openTag = "\x1B[38;2;175;135;0m";
  };
  
  struct LightSalmon3 : public Color {
      LightSalmon3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;135;95m";
  };
  
  struct RosyBrown : public Color {
      RosyBrown() : Color() {}
      static inline string openTag = "\x1B[38;2;175;135;135m";
  };
  
  struct Grey63 : public Color {
      Grey63() : Color() {}
      static inline string openTag = "\x1B[38;2;175;135;175m";
  };
  
  struct MediumPurple1 : public Color {
      MediumPurple1() : Color() {}
      static inline string openTag = "\x1B[38;2;175;135;255m";
  };
  
  struct Gold3 : public Color {
      Gold3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;175;0m";
  };
  
  struct DarkKhaki : public Color {
      DarkKhaki() : Color() {}
      static inline string openTag = "\x1B[38;2;175;175;95m";
  };
  
  struct NavajoWhite3 : public Color {
      NavajoWhite3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;175;135m";
  };
  
  struct Grey69 : public Color {
      Grey69() : Color() {}
      static inline string openTag = "\x1B[38;2;175;175;175m";
  };
  
  struct LightSteelBlue3 : public Color {
      LightSteelBlue3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;175;215m";
  };
  
  struct LightSteelBlue : public Color {
      LightSteelBlue() : Color() {}
      static inline string openTag = "\x1B[38;2;175;175;255m";
  };
  
  struct Yellow3 : public Color {
      Yellow3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;215;0m";
  };
  
  struct DarkSeaGreen2 : public Color {
      DarkSeaGreen2() : Color() {}
      static inline string openTag = "\x1B[38;2;175;215;175m";
  };
  
  struct LightCyan3 : public Color {
      LightCyan3() : Color() {}
      static inline string openTag = "\x1B[38;2;175;215;215m";
  };
  
  struct LightSkyBlue1 : public Color {
      LightSkyBlue1() : Color() {}
      static inline string openTag = "\x1B[38;2;175;215;255m";
  };
  
  struct GreenYellow : public Color {
      GreenYellow() : Color() {}
      static inline string openTag = "\x1B[38;2;175;255;0m";
  };
  
  struct DarkOliveGreen2 : public Color {
      DarkOliveGreen2() : Color() {}
      static inline string openTag = "\x1B[38;2;175;255;95m";
  };
  
  struct DarkSeaGreen1 : public Color {
      DarkSeaGreen1() : Color() {}
      static inline string openTag = "\x1B[38;2;175;255;215m";
  };
  
  struct PaleTurquoise1 : public Color {
      PaleTurquoise1() : Color() {}
      static inline string openTag = "\x1B[38;2;175;255;255m";
  };
  
  struct DeepPink3 : public Color {
      DeepPink3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;0;95m";
  };
  
  struct Magenta2 : public Color {
      Magenta2() : Color() {}
      static inline string openTag = "\x1B[38;2;215;0;255m";
  };
  
  struct HotPink2 : public Color {
      HotPink2() : Color() {}
      static inline string openTag = "\x1B[38;2;215;95;175m";
  };
  
  struct Orchid : public Color {
      Orchid() : Color() {}
      static inline string openTag = "\x1B[38;2;215;95;215m";
  };
  
  struct MediumOrchid1 : public Color {
      MediumOrchid1() : Color() {}
      static inline string openTag = "\x1B[38;2;215;95;255m";
  };
  
  struct Orange3 : public Color {
      Orange3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;135;0m";
  };
  
  struct LightPink3 : public Color {
      LightPink3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;135;135m";
  };
  
  struct Pink3 : public Color {
      Pink3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;135;175m";
  };
  
  struct Plum3 : public Color {
      Plum3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;135;215m";
  };
  
  struct Violet : public Color {
      Violet() : Color() {}
      static inline string openTag = "\x1B[38;2;215;135;255m";
  };
  
  struct LightGoldenrod3 : public Color {
      LightGoldenrod3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;175;95m";
  };
  
  struct Tan : public Color {
      Tan() : Color() {}
      static inline string openTag = "\x1B[38;2;215;175;135m";
  };
  
  struct MistyRose3 : public Color {
      MistyRose3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;175;175m";
  };
  
  struct Thistle3 : public Color {
      Thistle3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;175;215m";
  };
  
  struct Plum2 : public Color {
      Plum2() : Color() {}
      static inline string openTag = "\x1B[38;2;215;175;255m";
  };
  
  struct Khaki3 : public Color {
      Khaki3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;215;95m";
  };
  
  struct LightGoldenrod2 : public Color {
      LightGoldenrod2() : Color() {}
      static inline string openTag = "\x1B[38;2;215;215;135m";
  };
  
  struct LightYellow3 : public Color {
      LightYellow3() : Color() {}
      static inline string openTag = "\x1B[38;2;215;215;175m";
  };
  
  struct Grey84 : public Color {
      Grey84() : Color() {}
      static inline string openTag = "\x1B[38;2;215;215;215m";
  };
  
  struct LightSteelBlue1 : public Color {
      LightSteelBlue1() : Color() {}
      static inline string openTag = "\x1B[38;2;215;215;255m";
  };
  
  struct Yellow2 : public Color {
      Yellow2() : Color() {}
      static inline string openTag = "\x1B[38;2;215;255;0m";
  };
  
  struct DarkOliveGreen1 : public Color {
      DarkOliveGreen1() : Color() {}
      static inline string openTag = "\x1B[38;2;215;255;95m";
  };
  
  struct Honeydew2 : public Color {
      Honeydew2() : Color() {}
      static inline string openTag = "\x1B[38;2;215;255;215m";
  };
  
  struct LightCyan1 : public Color {
      LightCyan1() : Color() {}
      static inline string openTag = "\x1B[38;2;215;255;255m";
  };
  
  struct Red1 : public Color {
      Red1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;0;0m";
  };
  
  struct DeepPink2 : public Color {
      DeepPink2() : Color() {}
      static inline string openTag = "\x1B[38;2;255;0;95m";
  };
  
  struct DeepPink1 : public Color {
      DeepPink1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;0;135m";
  };
  
  struct Magenta1 : public Color {
      Magenta1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;0;255m";
  };
  
  struct OrangeRed1 : public Color {
      OrangeRed1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;95;0m";
  };
  
  struct HotPink : public Color {
      HotPink() : Color() {}
      static inline string openTag = "\x1B[38;2;255;95;175m";
  };
  
  struct DarkOrange : public Color {
      DarkOrange() : Color() {}
      static inline string openTag = "\x1B[38;2;255;135;0m";
  };
  
  struct Salmon1 : public Color {
      Salmon1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;135;95m";
  };
  
  struct LightCoral : public Color {
      LightCoral() : Color() {}
      static inline string openTag = "\x1B[38;2;255;135;135m";
  };
  
  struct PaleVioletRed1 : public Color {
      PaleVioletRed1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;135;175m";
  };
  
  struct Orchid2 : public Color {
      Orchid2() : Color() {}
      static inline string openTag = "\x1B[38;2;255;135;215m";
  };
  
  struct Orchid1 : public Color {
      Orchid1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;135;255m";
  };
  
  struct Orange1 : public Color {
      Orange1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;175;0m";
  };
  
  struct SandyBrown : public Color {
      SandyBrown() : Color() {}
      static inline string openTag = "\x1B[38;2;255;175;95m";
  };
  
  struct LightSalmon1 : public Color {
      LightSalmon1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;175;135m";
  };
  
  struct LightPink1 : public Color {
      LightPink1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;175;175m";
  };
  
  struct Pink1 : public Color {
      Pink1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;175;215m";
  };
  
  struct Plum1 : public Color {
      Plum1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;175;255m";
  };
  
  struct Gold1 : public Color {
      Gold1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;215;0m";
  };
  
  struct NavajoWhite1 : public Color {
      NavajoWhite1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;215;175m";
  };
  
  struct MistyRose1 : public Color {
      MistyRose1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;215;215m";
  };
  
  struct Thistle1 : public Color {
      Thistle1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;215;255m";
  };
  
  struct Yellow1 : public Color {
      Yellow1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;255;0m";
  };
  
  struct LightGoldenrod1 : public Color {
      LightGoldenrod1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;255;95m";
  };
  
  struct Khaki1 : public Color {
      Khaki1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;255;135m";
  };
  
  struct Wheat1 : public Color {
      Wheat1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;255;175m";
  };
  
  struct Cornsilk1 : public Color {
      Cornsilk1() : Color() {}
      static inline string openTag = "\x1B[38;2;255;255;215m";
  };
  
  struct Grey100 : public Color {
      Grey100() : Color() {}
      static inline string openTag = "\x1B[38;2;255;255;255m";
  };
  
  struct Grey3 : public Color {
      Grey3() : Color() {}
      static inline string openTag = "\x1B[38;2;8;8;8m";
  };
  
  struct Grey7 : public Color {
      Grey7() : Color() {}
      static inline string openTag = "\x1B[38;2;18;18;18m";
  };
  
  struct Grey11 : public Color {
      Grey11() : Color() {}
      static inline string openTag = "\x1B[38;2;28;28;28m";
  };
  
  struct Grey15 : public Color {
      Grey15() : Color() {}
      static inline string openTag = "\x1B[38;2;38;38;38m";
  };
  
  struct Grey19 : public Color {
      Grey19() : Color() {}
      static inline string openTag = "\x1B[38;2;48;48;48m";
  };
  
  struct Grey23 : public Color {
      Grey23() : Color() {}
      static inline string openTag = "\x1B[38;2;58;58;58m";
  };
  
  struct Grey27 : public Color {
      Grey27() : Color() {}
      static inline string openTag = "\x1B[38;2;68;68;68m";
  };
  
  struct Grey30 : public Color {
      Grey30() : Color() {}
      static inline string openTag = "\x1B[38;2;78;78;78m";
  };
  
  struct Grey35 : public Color {
      Grey35() : Color() {}
      static inline string openTag = "\x1B[38;2;88;88;88m";
  };
  
  struct Grey39 : public Color {
      Grey39() : Color() {}
      static inline string openTag = "\x1B[38;2;98;98;98m";
  };
  
  struct Grey42 : public Color {
      Grey42() : Color() {}
      static inline string openTag = "\x1B[38;2;108;108;108m";
  };
  
  struct Grey46 : public Color {
      Grey46() : Color() {}
      static inline string openTag = "\x1B[38;2;118;118;118m";
  };
  
  struct Grey50 : public Color {
      Grey50() : Color() {}
      static inline string openTag = "\x1B[38;2;128;128;128m";
  };
  
  struct Grey54 : public Color {
      Grey54() : Color() {}
      static inline string openTag = "\x1B[38;2;138;138;138m";
  };
  
  struct Grey58 : public Color {
      Grey58() : Color() {}
      static inline string openTag = "\x1B[38;2;148;148;148m";
  };
  
  struct Grey62 : public Color {
      Grey62() : Color() {}
      static inline string openTag = "\x1B[38;2;158;158;158m";
  };
  
  struct Grey66 : public Color {
      Grey66() : Color() {}
      static inline string openTag = "\x1B[38;2;168;168;168m";
  };
  
  struct Grey70 : public Color {
      Grey70() : Color() {}
      static inline string openTag = "\x1B[38;2;178;178;178m";
  };
  
  struct Grey74 : public Color {
      Grey74() : Color() {}
      static inline string openTag = "\x1B[38;2;188;188;188m";
  };
  
  struct Grey78 : public Color {
      Grey78() : Color() {}
      static inline string openTag = "\x1B[38;2;198;198;198m";
  };
  
  struct Grey82 : public Color {
      Grey82() : Color() {}
      static inline string openTag = "\x1B[38;2;208;208;208m";
  };
  
  struct Grey85 : public Color {
      Grey85() : Color() {}
      static inline string openTag = "\x1B[38;2;218;218;218m";
  };
  
  struct Grey89 : public Color {
      Grey89() : Color() {}
      static inline string openTag = "\x1B[38;2;228;228;228m";
  };
  
  struct Grey93 : public Color {
      Grey93() : Color() {}
      static inline string openTag = "\x1B[38;2;238;238;238m";
  };
  
}
#endif