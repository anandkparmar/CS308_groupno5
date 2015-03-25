
#include "pts.h"

/*
    Constructor: pts
        Initialiaze the object
*/
pts::pts()
{
  x = 0;
  y = 0;
}
/*
    Constructor: pts
        Initialiaze the object with arguments xvar and yvar

    Variables:
        xvar - Integer
        yvat - Integer
*/
pts::pts(int xval, int yval)
{
  x = xval;
  y = yval;
}
/*
    Function: move
        Move x by dx and y by dy

    Variables:
        dx - Integer
        dy - Integer
*/
void pts::move(int dx, int dy)
{
  x += dx;
  y += dy;
}
/*
    Function: get_x
        return x
*/
int pts::get_x() const
{
  return x;
}
/*
    Function: get_y
        return y
*/
int pts::get_y() const
{
  return y;
}
