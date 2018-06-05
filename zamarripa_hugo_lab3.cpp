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
#include <iostream>
#include<time.h>
#include<stdlib.h>
#include <iomanip>
using namespace std;

//function prototype 
void displayStars(int);

int main()
{
	int x = 10;
	cout << "______________________________________" << endl;
	cout << "Pattern A" << "      " << "Pattern B" << endl;
	cout << "______________________________________" << endl;
	displayStars(x);
	cout << "______________________________________" << endl;
	system("pause");
}
void displayStars(int columns)
{
	int n = 11;
	for (int i = 1; i <= n; i++)
	{

		for (int j = i; j; j--)
			cout << "+";
		cout << setw(15);


		for (int j = n - i + 1; j; j--)

			cout << "+";

		cout << endl;
	}


}