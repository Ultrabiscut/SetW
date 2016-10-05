#include <iostream>
#include <iomanip>
using namespace std;

//demonstrate the use of setw, left, right, and setfill

void main()
{
	//output some column numbers
	cout << "         1111111111222222222233333333334" << endl;
	cout << "1234567890123456789012345678901234567890" << endl;

	//declare some variables
	int x = 315, y = 42, z = 98;

	//output x, y, and z within a certain number of columns
	cout << setw(10) << x;
	cout << setw(5) << y;
	cout << setw(10) << z << endl;

	//by default, values are displayed right-justified
	//use manipulator 'left' for left-justification
	cout << left;
	cout << setw(10) << x;
	cout << setw(5) << y;
	cout << setw(10) << z << endl;


	//setfill will fill in any whitespaces in our columns
	//with a character of our choosing
	cout << setw(10) << setfill('#') << x;
	cout << setw(5) << setfill('.') << y;
	cout << setw(10) << setfill('*') << z << endl;

	//set the fill back to spaces
	cout << setw(40) << setfill(' ') << z << endl;
	cout << endl << endl;
}