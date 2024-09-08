#pragma once
#include "TelCoColorCoder_Namespace.h"
using namespace TelCoColorCoder;

namespace TelCoColorCoder
{
  class ColorPair {
  private:
    MajorColor majorColor;
    MinorColor minorColor;
  public:
    ColorPair(MajorColor major, MinorColor minor) :
      majorColor(major), minorColor(minor)
    {}
    MajorColor getMajor() {
      return majorColor;
    }
    MinorColor getMinor() {
      return minorColor;
    }
    std::string ToString() {
      std::string colorPairStr = MajorColorNames[majorColor];
      colorPairStr += " ";
      colorPairStr += MinorColorNames[minorColor];
      return colorPairStr;
    }
  };
}

