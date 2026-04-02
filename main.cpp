
#include <iostream>
using namespace std;

int main()
{
	int prev, current;
	cin >> prev;
	cout << prev;

	while(true) {
		cin >> current;
		if(current > prev) {
		cout << endl;
		break;
		}
		cout << " " << current;
		prev = current;
	}
	return 0;
}
