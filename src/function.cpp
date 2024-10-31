#include <iostream>
#include <cmath>
#include <function.h>


double rasst(twoPoint x, twoPoint y)
{
	return sqrt(pow(y.getX() - x.getX(), 2) + pow(y.getY() - x.getY(), 2));
}

double rasst(treePoint x, treePoint y)
{
	return sqrt(pow(y.getX() - x.getX(), 2) + pow(y.getY() - x.getY(), 2) + pow(y.getZ() - x.getZ(), 2));
}
