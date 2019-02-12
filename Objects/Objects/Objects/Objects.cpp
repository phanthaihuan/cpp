#include <iostream>
#include "Rectangle.h"
#include <process.h>

using namespace std;

int main()
{
	Rectangle ra(3333, 10000);
	Rectangle rb(3, 4);
	cout << ra.getWidth() << " " << ra.getHeight() << "\n";
	
	system("pause");
	return 0;
}