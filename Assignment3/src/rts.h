#ifndef _RECTANGLE_H
#define _RECTANGLE_H

#include "pts.h"

/*
    Class: rts
		A class to define functions for main.cpp file.

	Variables:
		bottom_left - pts
		top_right - pts

	Class has following Functions:
        - rts -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/rts-cpp.html#rts>)
        - rts(pts bl, pts tr) -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/rts-cpp.html#rts>)
        - move(int dx, int dy) -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/rts-cpp.html#move>)
        - get_bottom_left -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/rts-cpp.html#get_bottom_left>)
        - get_top_right -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/rts-cpp.html#get_top_right>)
        - width -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/rts-cpp.html#width>)
        - height -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/rts-cpp.html#height>)
        - area -- (<file:///home/anand/Lap/Assgn3_Docs/doc/files/rts-cpp.html#area>)

    Code:
    (start code)
        public:
          rts();
          rts(pts bl, pts tr);
          void move(int dx, int dy);
          pts get_bottom_left() const;
          pts get_top_right() const;
          int width() const;
          int height() const;
          int area() const;
        private:
          pts bottom_left, top_right;
    (end)

    See Also:
        - <rts.cpp at file:///home/anand/Lap/Assgn3_Docs/doc/files/rts-cpp.html>
        - <main.cpp at file:///home/anand/Lap/Assgn3_Docs/doc/files/main-cpp.html>
*/

class rts
{
public:
  rts();
  rts(pts bl, pts tr);
  void move(int dx, int dy);
  pts get_bottom_left() const;
  pts get_top_right() const;
  int width() const;
  int height() const;
  int area() const;
private:
  pts bottom_left, top_right;
};

#endif
