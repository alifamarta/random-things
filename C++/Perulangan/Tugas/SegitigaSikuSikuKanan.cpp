#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout << endl;
	cout << "masukkan angka: ";
	cin >> d;
	for (a = 1; a <= d ; a++)
	{
		for(int c = d; c>a; c--)
		{
			cout<<" ";
		}
			for (b = 1; b <= a; b++)
			{
				cout<<b;
			}
			cout<<endl;
	}
	return 0;
}
