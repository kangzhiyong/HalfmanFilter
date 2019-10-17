/**
	debugging_helpers.cpp
	
	Purpose: helper functions for debugging when working
	with grids of floats and chars.
*/
# ifndef DEBUGGING_HELPERS_H
# define DEBUGGING_HELPERS_H
#include <vector>
#include <iostream>
using namespace std;

/**
    Displays a grid of beliefs. Does not return.

    @param grid - a two dimensional grid (vector of 
    	   vectors of floats) which will usually 
    	   represent a robot's beliefs.
*/
void show_grid(vector < vector <float> > grid);

/**
    Displays a grid map of the world
*/
void show_grid(vector < vector <char> > map);

#endif
