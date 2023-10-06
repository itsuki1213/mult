#include<iostream>
using namespace std;

static int mult(int a, int b)
{
	int c = a * b;
	return c;
}

int main()
{
	cout << mult(4, 8);
}