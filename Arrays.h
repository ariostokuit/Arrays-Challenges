#pragma once
#include <iostream>
#include <string>
using namespace std;

//Programming challenge #1
void inputScore(int TestArr[],const int SIZE) {
	for (int i = 0; i < SIZE;i++) {
		cout << "Input score for test #" << (i+1);
		cin >> TestArr[i];
	}
}

size_t countPerfect(int TestArr[], const int SIZE) {
	size_t index = 0;
	size_t count = 0;
	while (index < SIZE) {
		if (TestArr[index] == 100) { count++; }
		index++;
	}
	return count;
}

//Programming challenge #2
void LargerThanN(int IntArr[], const int SIZE, int n) {
	size_t count = 0,
		index = 0;
	while (index < SIZE) {
		if (IntArr[index] > n) { count++; }
		index++;
	}
	
	cout << "There are " << count << " numbers in the array greater than " << n << endl;
}

//Programming challenge #3
string Convert_to_RomanNum(size_t num) {
	const string RomanNum[20] = { "I","II", "III", "IV", "V",
						   "VI","VII", "VIII", "IX", "X",
						   "XI", "XII", "XIII", "XIV", "XV",
							"XVI", "XVII" , "XVIII" , "XIX", "XX" };
	return RomanNum[num-1];
}

//Programming challenge #4
void DisplaySalsaReport(int JarArr[], string SalsaArr[],const int SIZE) { // Displays Salsa Report
	int i = 0;
	int total = 0;
	int highest = JarArr[0];
	int lowest = JarArr[0];
	string Shighest = SalsaArr[0];
	string Slowest = SalsaArr[0];

	while (i < SIZE) {
		cout << SalsaArr[i] << "---------> " << JarArr[i] << endl;
		total += JarArr[i]; //will calculate total sales
		if (JarArr[i] > highest) {
			highest = JarArr[i];
			Shighest = SalsaArr[i];
		}
		if (JarArr[i] < lowest) {
			lowest = JarArr[i];
			Slowest = SalsaArr[i];
		}
		i++;
	}
	cout << "Total Jars Sold------------> " << total << endl;
	cout << "Highest Selling Salsa -------> " << Shighest << endl;
	cout << "Lowest Selling Salsa --------> " << Slowest  << endl;
}


//Programming challenge 11
class Product {
public:
	int quantity;
	string productName;
	Product(string);
	string getProductName() { return productName; }
	int getQuantity() { return quantity; }
};
Product::Product(string name) {productName = name;}

void DisplaySalsaReport(Product Arr[], const int SIZE) {
	int i = 0;
	int total = 0;
	int highest = Arr[0].getQuantity();
	int lowest = Arr[0].getQuantity();
	string Shighest = Arr[0].getProductName();
	string Slowest = Arr[0].getProductName();

	while (i < SIZE) {
		cout << Arr[i].getProductName() << "---------> " << Arr[i].getQuantity() << endl;
		total += Arr[i].getQuantity(); //will calculate total sales
		if (Arr[i].getQuantity() > highest) {
			highest = Arr[i].getQuantity();
			Shighest = Arr[i].getProductName();
		}
		if (Arr[i].getQuantity() < lowest) {
			lowest = Arr[i].getQuantity();
			Slowest = Arr[i].getProductName();
		}
		i++;
	}
	cout << "Total Jars Sold------------> " << total << endl;
	cout << "Highest Selling Salsa -------> " << Shighest << endl;
	cout << "Lowest Selling Salsa --------> " << Slowest << endl;
}


