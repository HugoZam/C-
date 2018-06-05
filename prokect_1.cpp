#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

//function prototype 
void displayStars(int, int);

int main()
{
	int x,y;
	
	cout << "Enter a size" << endl;
	cin >> x;
	y = x;
	displayStars(x,y);
	cout << endl;
	
	system("pause");
	return 0;
}
void displayStars(int columns, int rows)
{
	for (int down = 0; down < rows; down++)
	{
		for (int across = 0; across < columns; across++)
		cout << "*";
		cout << endl;
  }
}
