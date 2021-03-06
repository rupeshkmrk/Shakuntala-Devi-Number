#include"pch.h"
#include <iostream>

using namespace std;
void ArmstrongNumber();
void ShakuntalaDeviNumRange();
void ShakuntalaDeviNum();
void ArmstrongNumberRange();
bool isArmstrong(int num);
void Exit();
int factorial(int num);


int main()
{
	while (true)
	{
		cout << "Enter your choice" << endl;
		cout << "1: Find a number is Shakuntala Devi's number or not.\n2: Find range of Shakuntala Devi's number's.\n3: Find a number is Armstrong number or not.\n4: Find range of Armstrong number's.\n5: Exit\n" << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1: ShakuntalaDeviNum();
			break;
		case 2: ShakuntalaDeviNumRange();
			break;
		case 3: ArmstrongNumber();
			break;
		case 4:ArmstrongNumberRange();
			break;
		case 5:
		default: Exit();

		}


	}

}

void ArmstrongNumber()
{

	int num;
	cout << "Enter a number" << endl;
	cin >> num;
	if (isArmstrong(num) == true)
	{
		cout << "It is Armstrong Number" << endl;
	}
	else {
		cout << "Not an Armstrong number" << endl;
	}

}


bool isArmstrong(int number)
{

	int sum = 0;
	int num = number;
	while (num)
	{
		int r = num % 10;
		int cube = r * r * r;

		sum = sum + cube;

		num = num / 10;
	}
	if (sum == number || num == - number)
		return true;

	return false;
}
void ShakuntalaDeviNumRange()
{
	cout << "Enter Range of number\nFirst Number" << endl;
	int num1;
	cin >> num1;
	cout << "Second Number" << endl;
	int num2;
	cin >> num2;
	if (num1 < 0)
	{
		{
			int temp = num1;
			temp = temp * (-1);
			for (int i = temp; i >= 0; i--)
			{

				int n = i;
				int sum = 0;
				while (n)
				{
					int r = n % 10;
					int f = factorial(r);
					sum = sum + f;
					n = n / 10;
				}
				if (sum == i)
					cout << - i << endl;
			}
			num1 = 1;
		}
	}
	for (int i = num1; i <= num2; i++)
	{
		
		int n = i;
		int sum = 0;
		while (n)
		{
			int r = n % 10;
			int f = factorial(r);
			sum = sum + f;
			n = n / 10;
		}
		if (sum == i)
			cout << i << endl;
	}
}
void ShakuntalaDeviNum()
{

	int num;
	cout << "Enter a number" << endl;
	cin >> num;

	int n = num;
	
	if (n < 0)
	{
		n = n * (-1);
	}

	int sum = 0;
	while (n)
	{
		int r = n % 10;

		int f = factorial(r);
		sum = sum + f;
		n = n / 10;
	}
	if (sum == num || sum == -num)
		cout << "This is Shakuntala devi's number" << endl;
	else
		cout << "Not a Shakuntala devi's number" << endl;
}
void ArmstrongNumberRange() {
	cout << "Enter a range of number\nFirst Number" << endl;
	int num1;
	cin >> num1;
	cout << "Second number" << endl;
	int num2;
	cin >> num2;
	for (int i = num1; i <= num2; i++)
	{
		if (isArmstrong(i))
			cout << i << endl;
	}
}


int factorial(int num)
{
	int fact = 1;
	for (int i = 1; i <= num; i++)
		fact = fact * i;

	return fact;
}
void Exit() {
	exit(0);
}

