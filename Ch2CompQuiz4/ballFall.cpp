/* A ball falls from a tower...possibly injuring the poor victims below.
 * ballFall.cpp
 *
 *  Created on: May 11, 2017
 *      Author: Abhiek187
 */

#include <iostream>
#include <cmath>
#include "constants.h"
using namespace std; // Apparently, bad practice.

void distanceFallen(int height) // Note: distance from ground
{
	for (int seconds = 0; seconds < sqrt(2*height/myConstants::gravity); ++seconds)
	{
		double distance = height - myConstants::gravity * pow(seconds,2) / 2;
		cout << "At " << seconds << " seconds, the ball is at height: " << distance << " meters\n";
	}

	cout << "SPLAT!\nThe ball is on the ground.\n";
}

int main()
{
	cout << "Enter the initial height of the tower in meters: ";
	int height;
	cin >> height;
	distanceFallen(height);
	return 0;
}
