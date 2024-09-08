#pragma once
#include <iostream>
#include <assert.h>
#include "ColorPairNumberMappingFunctions.h"

void testNumberToPair(int pairNumber,
  TelCoColorCoder::MajorColor expectedMajor,
  TelCoColorCoder::MinorColor expectedMinor)
{
  TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
  std::cout << "Got pair " << colorPair.ToString() << std::endl;
  assert(colorPair.getMajor() == expectedMajor);
  assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
  TelCoColorCoder::MajorColor major,
  TelCoColorCoder::MinorColor minor,
  int expectedPairNumber)
{
  int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
  std::cout << "Got pair number " << pairNumber << std::endl;
  assert(pairNumber == expectedPairNumber);
}

void printColorPairToNumberMapping()
{
  std::cout << "COLOR PAIR" << "\t" << "Pair Number"<<std::endl;
  std::cout << "***************************************************************" <<std::endl;
  for (auto i = 0; i < numberOfMajorColors; i++){
    for (auto j = 0; j < numberOfMinorColors; j++){
      TelCoColorCoder::ColorPair ColorPairObj1(static_cast<TelCoColorCoder::MajorColor>(i), static_cast<TelCoColorCoder::MinorColor>(j));
      std::string colorPairStr = ColorPairObj1.ToString();
      int num = TelCoColorCoder::GetPairNumberFromColor(static_cast<TelCoColorCoder::MajorColor>(i), static_cast<TelCoColorCoder::MinorColor>(j));
      std::cout << colorPairStr << "\t --> " << num << std::endl;
    }
  }
}

int main() {
  std::cout << std::endl;
  printColorPairToNumberMapping();
  std::cout << "***************************************************************" << std::endl;
  testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
  testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
  testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
  testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
  return 0;
}
