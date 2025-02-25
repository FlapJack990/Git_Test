#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{

	string nums[3] = {{"1 2 3 4 5"}, {"1 2 3 4 5"}, {"1 2 3 4 5"}};
	int numsCount = 3;
	int i = 0;

	for (;;)
	{
		cout << nums[i] << "\n";
		i++;
		if (i == numsCount)
		{
			break;
		}
	}
//==========================================//
//==========================================//
	string nums_2[3] = {
	 {"1 2 3 4 5"},
	 {"1 2 3 4 5"},
	 {"1 2 3 4 5"}};
	
	for (int i = 0; i < 3; i++)
	{
		cout << nums_2[i] << endl;
	}
//==========================================//
//==========================================//
	string numss = "1 2 3 4 5";

	cout << numss << endl
		 << numss << endl
		 << numss << endl;

	return 0;
}

// important:: : https: // www.youtube.com/watch?v=n85WQcehd7E