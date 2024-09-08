#pragma once
#include <iostream>

namespace TelCoColorCoder
{
  enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
  enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

  const char* MajorColorNames[] = {
      "White", "Red", "Black", "Yellow", "Violet"
  };
  int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
  const char* MinorColorNames[] = {
      "Blue", "Orange", "Green", "Brown", "Slate"
  };
  int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);


}
