#include <iostream>

using namespace std;

// Variable - START
//	define variables that are global between the two Variable markers
string list = [];
string arrinput = "";
string con = "yes";
string t = "";
int arraySize = 0;
int j = 0;
int ascValue = 0;
// Variable - END

// Function/Method Declaration - START
//	define function/method declaration signatures between the two markers
int getSum(string t)
{
	int sum = 0;
	for (int i = 0; i < t.size(); i++)
	{
		sum += t[i];
	}
	return sum;
}

void sortArray(string list, int arraySize)
{
	vector <pair<int, string> > n;
	for (int i = 0; i < arraySize; i++)
	{
		int ascValue = getSum(list[i]);
		n.push_back({ ascValue, list[i] });
	}
	sort(n.begin(), n.end());
	for (int i = 0; i < arraysize; i++)
	{
		cout << n.second() << " ";
	}
}
// Function/Method Declaration - END

int main() {
	while (con == "yes" || con == "Yes") {
		cout << "What would you like to enter into the array? \n";
		cin >> arrinput;
		list[j] = arrinput;
		cout << "Would you like to continue? \n";
		cin >> con; 
		j += 1;
	}
	int arraySize = sizeof(list) / sizeof(list[0]);
	sortArray(list, arraysize);
	return 0;
}

// Function/Method Definition - START
//	define function/method declaration signatures between the two markers
// Sorts the array of strings that the user inputs in order based on the ascii table order.
// Function/Method Definition - END
