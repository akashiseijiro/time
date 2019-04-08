#include <iostream>
using namespace std;
#include "Time.h"

int main()
{
	Time t1;   // object of Time
	t1.print();            // print time one
	Time t2;               // object of Time
	           
	
	
	t2.print();            // print time  two

	if (t1.equals(t2))
		cout << "Two objects are equal\n";
	else
		cout << "Two objects are not equal\n";

	return 0;
}