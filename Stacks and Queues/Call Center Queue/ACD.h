#pragma once
#include "Call.h"
#include <queue>
using namespace std;

class ACD
{
public:
	void newCall();
	void handleCall();
	void display();
	bool isCallWaiting();
private:
	queue<Call> callQueue;
	string random(int min, int max);
};