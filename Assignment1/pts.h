/*
 *          File: pts.h
 * Last Modified: February 23, 2014
 *         Topic: Writing Make Files
 *--------------------------
 * ----------------------------------------------------------------
 */

#ifndef _POINT_H
#define _POINT_H

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
