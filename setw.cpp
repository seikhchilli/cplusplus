#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long pop1 = 2425785, pop2 = 47, pop3 = 9761;

	cout <<setw(8)<< "LOCATION" <<setw(12)<< "POP" << endl;
	cout <<setw(8)<< "portcity" <<setw(12)<< pop1 << endl;
	cout <<setw(8)<< "hightown" <<setw(12)<< pop2 << endl;
	cout <<setw(8)<< "Lowville" <<setw(12)<< pop3 << endl;

	return 0;
}
