#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <map>

using namespace std;

int fib(int n); // Top-down approach (recursive)
int bottom_up_fib(int n); // Bottom up approach

// Top-down approach (recursive)
int fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}

	return fib(n - 1) + fib(n - 2);
}

// Bottom up approach
int bottom_up_fib(const int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}

	int* list = new int[n+1];
	list[1] = list[2] = 1;

	for (int i = 3; i <= n; ++i)
	{
		list[i] = list[i - 1] + list[i - 2];
	}

	int value = list[n];

	delete[] list;

	return value;
}


int main()
{
	int N = 0;
	cin >> N;

	cout << "Starting top-down Solution .." << endl << "Result: " << fib(N) << endl;
	cout << "Starting bottom-up Solution .." << endl << "Result: " << bottom_up_fib(N) << endl;
	return 0;
}
