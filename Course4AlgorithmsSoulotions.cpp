
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

enum enEvenOrOdd {Even = 1 , Odd = 2};

// #1
void PrintName(string Name)
{
	cout << "Your name is :" << Name << "\n";
}

//#2
string ReadName()
{
	string Name;
	cout << "Please enter your name\n";
	getline(cin, Name);
	return Name;
}

// #3
int ReadNumber()
{
	int Number = 0;
	cout << "Please enter a number \n";
	cin >> Number;
	return Number;
}

enEvenOrOdd CheckNumberType(int Number)
{
	int Result = Number % 2;

	if (Result == 0)
	{
		return enEvenOrOdd::Even;
	}
	else
	{
		return enEvenOrOdd::Odd;
	}
}

void PrintNumberType(enEvenOrOdd NumberType)
{
	if (NumberType == enEvenOrOdd::Even)
	{
		cout << "\nNumer is even\n";
	}
	else
	{
		cout << "\nNumber is odd\n";
	}
}

// #4
struct stInfo 
{
	short Age;
	bool HasAdrivingLicence;
	bool HasARecommindation;
};

stInfo ReadInfo()
{
	
	stInfo Info;

	cout << "How old are you? \n";
	cin >> Info.Age;

	cout << "Do you have a driving licence \n";
	cin >> Info.HasAdrivingLicence;

	cout << "Do you have a recommindation? \n";
	cin >> Info.HasARecommindation;

	return Info;
}

bool IsAccepted( stInfo Info)
{
	if (Info.HasARecommindation)
	{
		return true;
	}
	else
	{
		return (Info.Age > 21 && Info.HasAdrivingLicence);
	}
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
	{
		cout << " Hierd\n";
	}
	else
	{
		cout << " Rejected\n";
	}
}

int main()
{
   
	// #1
	PrintName("Mahmoud");

	// #2
	PrintName(ReadName());

	// #3
	PrintNumberType(CheckNumberType(ReadNumber()));

	// #4
	PrintResult(ReadInfo());

	return 0;
}