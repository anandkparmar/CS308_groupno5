/*
 *          File: rts.cpp
 * Last Modified: February 23, 2014
 *         Topic: Writing Make Files
 * ----------------------------------------------------------------
 */

#include "rts.h"

rts::rts()
{
  // Do nothing since the 2 Points will initialize themselves.
}

rts::rts(pts bl, pts tr)
{
  bottom_left = bl;
  top_right = tr;
}

void rts::move(int dx, int dy)
{
  bottom_left.move(dx, dy);
  top_right.move(dx, dy);
}

pts rts::get_bottom_left() const
{
  return bottom_left;
}

pts rts::get_top_right() const
{
  return top_right;
}

int rts::width() const
{
  return top_right.get_x() - bottom_left.get_x();
}

int rts::height() const
{
  return top_right.get_y() - bottom_left.get_y();
}

int rts::area() const
{
  return width() * height();
}
