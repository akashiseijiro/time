#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time(const int h, const int m, const int s)              // using member function Time using::
	: hour(h), minute(m), second(s)
{
	cout << "enter time";
	cin >> hour >> minute >> second;                          // input times
}

void Time::setTime(const int h, const int m, const int s)     // using member function setTime 
{
	                                                          // storing values in h,m and s
	hour = h;
	minute = m;
	second = s;
}

void Time::print() const                                      // using member function print
{
	cout << setw(2) << setfill('0') << hour << ":"
		<< setw(2) << setfill('0') << minute << ":"
		<< setw(2) << setfill('0') << second << "\n";

}

bool Time::equals(const Time& otherTime)                    // comparing times
{
	if (hour == otherTime.hour
		&& minute == otherTime.minute
		&& second == otherTime.second)
		return true;
	else
		return false;
}