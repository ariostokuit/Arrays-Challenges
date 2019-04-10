// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This is for working with arrays 

#include "pch.h"
#include "Arrays.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

const int SIZE1 = 20;
const int SIZE2 = 10;
const int JARSIZE = 5;
int main()
{
//	Programming challenge #1
	int TestArr[SIZE1];
	inputScore(TestArr,SIZE1);
	cout << "The amount of perfect scores is " << countPerfect(TestArr, SIZE1) << " perfect scores\n";

//	Programming challenge #2
	int IntArr[SIZE2];
	for (int i = 0; i < SIZE2; i++) {
		cout << "Enter a number for array pos # " << i;
		cin >> IntArr[i];
	}
	int num;
	cout << "Enter an integer to test out: ";
	cin >> num;
	LargerThanN(IntArr, SIZE2, num);

//	Programming Challenge #3
	size_t decimal;
	cout << "Enter a decimal to convert to Roman Numeral(1-20):";
	cin >> decimal;

	cout << decimal << "-----> " << Convert_to_RomanNum(decimal) << endl;

//	programming challenge #4
	int JarSold[JARSIZE];
	string SalsaType[JARSIZE] = { "mild", "medium", "sweet", "hot", "zesty" };

	for (int i = 0; i < JARSIZE; i++) {
		cout << "Enter the amount of jars sold for " << SalsaType[i] << endl;
		cin >> JarSold[i];
	}
	DisplaySalsaReport(JarSold,SalsaType,JARSIZE);

	//Programming challenge #4 or #11 using objects in arrays
	Product salsaObjArr[5] = {Product("mild"),Product("medium"), Product("sweet"),
							 Product("hot"),Product("zesty")};

	for (int i = 0; i < 5; i++) {
		cout << "Enter the amount of jars sold for " << salsaObjArr[i].getProductName();
		cin >> salsaObjArr[i].quantity;
	}
	DisplaySalsaReport(salsaObjArr,5);

	return 0;
}