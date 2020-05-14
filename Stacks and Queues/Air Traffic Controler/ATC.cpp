// Description of the program
// Programmer's name

#include <iostream>
#include <ctime>
#include "Queue.h"
using namespace std;

int main()
{
	/*
	Events:
	0 New flight arrives.
	1 Landing clearance granted.
	2 Flight ready to depart.
	3 No event.
	*/
	const int NUM_FLIGHTS = 24;
	Queue<int> arrivals; // planes requesting to land
	Queue<int> ground;   // planes on the ground
	int count = 0; // number of flights so far today

	while (count < NUM_FLIGHTS)
	{
		int event = rand() % 4;

		switch (event)
		{
		case 0: // New flight arrives. Requests landing clearance.
			if (count < NUM_FLIGHTS)
			{
				arrivals.enqueue(count);
				cout << "Flight " << count << " is requesting to land." << endl;
				count++;
			}
			break;
		case 1: // Landing clearance granted.
			if (!arrivals.isEmpty())
			{
				int flight = arrivals.dequeue();
				ground.enqueue(flight);
				cout << "Flight " << flight << " has landed." << endl;
			}
			break;
		case 2: // Ready for takeoff.
			if (!ground.isEmpty())
			{
				cout << "Flight " << ground.dequeue() << " has taken off." << endl;
			}
			break;
		default:
			cout << "\tNothing happened this hour." << endl;
			break;
		}
	}

	// keep this stuff at the end of main
	cout << endl;
	system("pause");
	return 0;
}