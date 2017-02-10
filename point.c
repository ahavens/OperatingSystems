#include <math.h>
//#include <cmath.h>
#include <assert.h>
#include <stdio.h>
#include "point.h"

/*
 * Update *p by increasing p->x by x and 
 * p->y by y
 */
void point_translate(Point *p, double x, double y)
{
  //printf("Your job is to implement translate\n");

  /* MOVE POINT TO A NEW LOCATION */

  /* what translate is doing is adding x or y values */
  p->x = (p->x) + x;
  p->y = (p->y) + y;

}

/*
 * Return the distance from p1 to p2
 */
double point_distance(const Point *p1, const Point *p2)
{
 // printf("Your job is to implement distance\n");

  /* DETERMINE DISTANCE BETWEEN OLD AND NEW POINT */
  /* dist is determined by sqrt(((x2-x1)^2)) + ((y2-y1)^2)) */

  double finalX = (p2->x) - (p1->x);
  double finalY = (p2->y) - (p1->y);

  finalX = finalX*finalX;
  finalY = finalY*finalY;

  double d = sqrt(finalX+finalY);

  return d;



  /*return -1.0;*/
}
