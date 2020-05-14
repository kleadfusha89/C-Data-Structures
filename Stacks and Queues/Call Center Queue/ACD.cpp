#include "ACD.h"
#include <string>
#include <ctime>
using namespace std;

Call call;

string ACD::random(int min, int max)
{
	int r = min + (rand() % (max - min));
	return to_string(r);
}

void ACD::newCall()
{

	call.phoneNumber = random(100, 1000) + "-"
		+ random(100, 1000) + "-"
		+ random(1000, 10000);
	call.date = random(1, 13) + "-" + random(1, 32) + "-2017";
	call.time = random(0, 25) + ":" + random(0, 60);
	call.id = random(1000, 10000);
	switch (rand() % 4)
	{
	case 0: call.language = "EN"; break;
	case 1: call.language = "SP"; break;
	case 2: call.language = "FR"; break;
	case 3: call.language = "CH"; break;
	}

	cout << "**************** New call coming in:         ";
	call.display();

	// TODO: Enqueue the call.
	callQueue.push(call);
}

void ACD::handleCall()
{
	// TODO: if a call is waiting in the queue
	if (!callQueue.empty())
	{
		cout << "**************** Call has been handled:	";
		// TODO: Dequeue the call and display it.

		callQueue.front();
		callQueue.pop();
		call.display();
	}
	else
		cout << "**************** No calls to handle. **********" << endl;
}

void ACD::display()
{
	// TODO: if calls are waiting in the queue
	if (!callQueue.empty())
	{
		cout << "**************** Next caller in line:	";
		// TODO: Display the next call to be handled.
		callQueue.front();
		call.display();
	}
	else
		cout << "**************** No calls to handle. **********" << endl;
}

//New function definition
bool ACD::isCallWaiting()
{
	return !callQueue.empty();
}