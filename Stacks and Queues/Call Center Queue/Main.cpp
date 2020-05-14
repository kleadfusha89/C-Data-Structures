// This program will use queues to store incoming calls, and 
// answer them when the existing call ends.

// Course:			CIS2542-001
// Student:			Klead Fusha
// Instructor:		Michael Henson
// Assignment 6b:	Call Center - Queue



#include "ACD.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	ACD dispatcher;
	srand(time(0));

	// PHASE 1: During working hours.
	for (int i = 0; i < 25; ++i)
	{
		// Choose a random event (new call, handled call, or nothing)
		int randEvent = rand() % 3;

		// Process the event.
		switch (randEvent)
		{
		case 0: // New call comes in.
			dispatcher.newCall();
			break;
		case 1: // A call has been handled.
			dispatcher.handleCall();
			break;
		default: cout << "**************** No new activity. ************* " << endl;
		}
		dispatcher.display();
	}

	// PHASE 2: After working hours.
	// Handle calls until queue is empty.
	while (dispatcher.isCallWaiting())
	{
		// handle the next call
		dispatcher.handleCall();
	}

	cout << endl;
	system("pause");

}