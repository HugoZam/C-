#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<string>
#include <iomanip>
using namespace std;

//function prototype 
void displayMenu(string);
void displaySquare(int);
void displayTriangle(int);
void displayCircle(int);
void displayRectangle(int);
void displayBowtie(int);
int main()
{
	string s;

	cout << "Press s to start: ";
	getline(cin, s);

	displayMenu(s);

	system("pause");
	return 0;
}
void displayMenu(string s)
{
	cout << "Hello, what would you like to do?" << endl;
	int grade, temp;
	temp = 1;
	cout << "1.) Display Square" << endl;
	cout << "2.) Display Triangle" << endl;
	cout << "3.) Display Circle" << endl;
	cout << "4.) Display Rectangle" << endl;
	cout << "5.) Display Bowtie(oldstyle)" << endl;
	cin >> grade;

	switch (grade) { //calls function based on number
	case 1:

		displaySquare(temp);
		break;
	case 2:
		displayTriangle(temp);
		break;
	case 3:
		displayCircle(temp);
		break;
	case 4:
		displayRectangle(temp);
		break;
	case 5:
		displayBowtie(temp);
		break;
	default:
		cout << "Not an option" << endl;
	}
}
void displaySquare(int)
{
	int rows, columns;
	cout << "How big do you want it (Enter a whole number from 1-50 )" << endl;
	cin >> rows;
	columns = rows;

	for (int down = 0; down < rows; down++)
	{
		for (int across = 0; across < columns; across++)
			cout << "*";
		cout << "\n";
	}
}
void displayTriangle(int) {
	int n;
	cout << "How big do you want it (Enter a whole number from 1-50 )" << endl;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << setw(15);
		for (int j = i; j; j--)
		cout << "+";
		
		cout << endl;
	}
	
}
void displayCircle(int) {
	float size;
	cout << "How big do you want it (Enter a whole number from 1-50 )" << endl;
	cin >> size;
	float circle_radius = size; 

	for (int i = 0; i <= 2 * circle_radius; i++)
	{
		for (int j = 0; j <= 2 * circle_radius; j++)
		{
			float distance_to_centre = sqrt((i - circle_radius)*(i - circle_radius) + (j - circle_radius)*(j - circle_radius)); // finds a center point for the radius
			if (distance_to_centre > circle_radius - 0.5 && distance_to_centre < circle_radius + 0.5)//then starts updating the surronding with stars
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	
}
void displayRectangle(int)
{
	int rows, columns;
	cout << "How big do you want it (Enter a whole number from 1-50 )" << endl;
	cin >> rows;
	columns = rows;//fills in rows and col based on user input
	for (int down = 0; down < rows; down++)
	{
		for (int across = 0; across < columns; across++)
			cout << "*";
		cout << endl;
	}
	;
}
void displayBowtie(int)
{
	int x = 0, y = 9,input,input2;
	int col = 0, row = 0;
	int cnt = 0;
	cout << "How big do you want it (Enter a whole number from 1-50 )" << endl;
	
	cin >> input;
	input2 = input * 2;

	while (col < input)
	{
		while (row < input2)
		{
			if (row <= x || row >= y)
			{//while loop to contain the height and width of the tie
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			++row;
		}
		if (row == input2)
		{
			cout << endl;
			++cnt;
		}
		if (cnt <= 2)
		{
			x += 2;
			y -= 2;
		}
		else
		{
			x -= 2;
			y += 2;
		}
		row = 0;
		++col;
	}
	;
}


