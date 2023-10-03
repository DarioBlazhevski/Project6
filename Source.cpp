#include <iostream>

using namespace std;

int main()
{
	
	int b;

	cout << "\n Vnesi ja vrednosta na brojot b : ";

	cin >> b;

	if (b > 0)
		cout << "\n Brojot " << b << " e pozitiven";

	else
		cout << "\n Brojot " << b << " e negativen";


	cin.get(); cin.get();

	return 0;
}