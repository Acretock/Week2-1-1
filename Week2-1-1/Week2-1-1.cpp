#include <iostream>

using namespace std; 
int Factorial(int number) { return number > 1 ? Factorial(number - 1) * number : 1; } 
int main()
{
	int s;
	cin >> s;
	cout << Factorial(s) << endl;
}
