#include "Box.h"
#include <iostream>

// Implement setters and getters
void Box::setLength(double l)
{
  length = l;
}

void Box::setWidth(double w)
{
  width = w;
}

void Box::setHeight(double h)
{
  height = h;
}

void Box::getLength()
{
  return length;
}

void Box::getWidth()
{
  return width;
}

void Box::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
