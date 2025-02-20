#include "test.h"

void print(int matrix[][N], string expected, string name) {
	string actual = get_raws_with_zero_value(matrix);

	string msg = expected == actual ? "PASS(green)" : "FAIL(red)";

	cout << name << " - "<< msg << endl;
	cout << "-----------------------------------------" << endl;
}


void test01() {
	int matrix[][N]{
	{1, 2, 3, 4, 5},
	{2, 3, 4, 5, 6},
	{3, 4, 5, 6, 7},
	{4, 5, 6, 7, 8},
	{5, 6, 7, 8, 9}, };

	string expected = "";
	
	print(matrix, expected, "test01");
}

void test02() {
	int matrix[][N]{
	{1, 2, 3, 4, 5},
	{2, 0, 4, 5, 6},
	{3, 4, 5, 6, 7},
	{3, 5, 6, 7, 8},
	{5, 6, 7, 8, 9}, };

	string expected = "2 ";

	print(matrix, expected, "test02");
}

void test03() {
	int matrix[][N]{
	{1, 2, 7, 4, 5},
	{2, 0, 4, 5, 6},
	{3, 4, 5, 0, 7},
	{1, 5, 6, 7, 8},
	{5, 6, 7, 0, 9}, };

	string expected = "2 3 5 ";

	print(matrix, expected, "test03");
}

void test04() {
	int matrix[][N]{
	{1, 2, 0, 4, 5},
	{2, 0, 4, 5, 6},
	{3, 4, 5, 0, 7},
	{1, 0, 6, 7, 8},
	{5, 6, 7, 0, 9}, };

	string expected = "1 2 3 4 5 ";

	print(matrix, expected, "test04");
}

void test05() {
	int matrix[][N]{
	{1, 2, 3, 4, 5},
	{2, 3, 0, 5, 6},
	{3, 4, 5, 6, 7},
	{1, 0, 6, 7, 8},
	{5, 6, 7, 0, 9}, };

	string expected = "2 4 5 ";

	print(matrix, expected, "test04");
}




	