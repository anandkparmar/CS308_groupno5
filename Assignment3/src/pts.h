#ifndef _POINT_H
#define _POINT_H

/*
	Class: pts
		A class to define functions for main.cpp file.

	Variables:
		x - Integer
		y - Integer

	Class has following Functions:
	- pts() -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/pts-cpp.html#pts>)

	- pts(xvar, yvar) -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/pts-cpp.html#pts>)

	- move(dx, dy) -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/pts-cpp.html#move>)

	- get_x -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/pts-cpp.html#get_x>)

	- get_y -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/pts-cpp.html#get_y>)

	Code:

    (start code)
        public:
            pts();
            pts(int xval, int yval);
            void move(int dx, int dy);
            int get_x() const;
            int get_y() const;

        private:
            int x, y;
    (end)

	See Also:
        - <pts.cpp at file:///home/anand/Lap/Assgn3_Docs/doc/files/pts-cpp.html>
        - <main.cpp at file:///home/anand/Lap/Assgn3_Docs/doc/files/main-cpp.html>


*/

class pts
{
public:
  pts();
  pts(int xval, int yval);
  void move(int dx, int dy);
  int get_x() const;
  int get_y() const;

private:
  int x, y;
};

#endif
