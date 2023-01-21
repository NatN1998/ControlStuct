#include <iostream>
using namespace std;
//#define SQUARE
//#define TRANGL_1
//#define TRANGL_2
//#define TRANGL_3
//#define TRANGL_4
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите кол-во звездочек: ";  cin >> n;
#ifdef SQUARE
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif
#ifdef TRANGL_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif
#ifdef TRANGL_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif
#ifdef TRANGL_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j<n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif
#ifdef TRANGL_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif
}