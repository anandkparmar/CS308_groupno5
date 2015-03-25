#include "rts.h"
/*
    Constructor: rts
        Initialiaze the object
*/
rts::rts()
{
  // Do nothing since the 2 Points will initialize themselves.
}
/*
    Constructor: rts
        Initialiaze the object with arguments
*/
rts::rts(pts bl, pts tr)
{
  bottom_left = bl;
  top_right = tr;
}
/*
    Function: move
        Move the points by (dx,dy)

    Variables:
        dx - Integer
        dy - Integer
*/
void rts::move(int dx, int dy)
{
  bottom_left.move(dx, dy);
  top_right.move(dx, dy);
}
/*
    Function: get_bottom_left
        return bottom_left
*/
pts rts::get_bottom_left() const
{
  return bottom_left;
}
/*
    Function: get_top_right
        return top_right
*/
pts rts::get_top_right() const
{
  return top_right;
}
/*
    Function: width
        return width of rectangle
*/
int rts::width() const
{
  return top_right.get_x() - bottom_left.get_x();
}
/*
    Function: height
        return height of rectangle
*/
int rts::height() const
{
  return top_right.get_y() - bottom_left.get_y();
}
/*
    Function: area
        return area of rectangle.
*/

int rts::area() const
{
  return width() * height();
}
