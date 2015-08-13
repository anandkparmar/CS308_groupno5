#include <iostream>
#include "pts.h"
#include "rts.h"
using namespace std;

/*
    Function: main
        This function is taking x and y from user and shift it to (3,5) and taking another x and y as second point, then gives area of rectangle.

    This function uses following class:
    * <pts>
    * <rts>

    This Function Uses Following Functions:
	- pts(xvar, yvar) -- (<pts>)

	- move(dx, dy) -- (<move>)

	- get_x -- (<get_x>)

	- get_y -- (<get_y>)

	- rts(pts bl, pts tr) -- (<rts>)

	- area -- (<area>)
*/

int main()
{
  int x, y;

  cout << "Please enter x and y value for point p1: ";
  cin >> x >> y;

  pts p1(x, y);

  p1.move(3, 5);
  cout << "\nMoved p1 by 3, 5--p1 now at "
       << p1.get_x() << ", " << p1.get_y() << endl;

  cout << "\nWe'll use p1 point for the bottom left point of" << endl
       << "rectangle r1, please enter the x and y value for" << endl
       << "top right point: ";
  cin >> x >> y;

  pts p2(x, y);
  rts r1(p1, p2);
  cout << "\nRectangle r1 area is: " << r1.area() << endl;

  return 0;
}
