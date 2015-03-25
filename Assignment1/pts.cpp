/*
 *          File: pts.cpp
 * Last Modified: February 23, 2014
 *         Topic: Writing Make Files
 * ----------------------------------------------------------------
 */

#include "pts.h"

pts::pts()
{
  x = 0;
  y = 0;
}

pts::pts(int xval, int yval)
{
  x = xval;
  y = yval;
}

void pts::move(int dx, int dy)
{
  x += dx;
  y += dy;
}

int pts::get_x() const
{
  return x;
}

int pts::get_y() const
{
  return y;
}
