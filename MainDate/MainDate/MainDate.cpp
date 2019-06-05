#include "Date.hpp"

int main() {
    using namespace std;
	Date d1; 				// Current date: 5/6/2019
    cout << d1 << endl;
	Date d2(2012);
	Date d3(2012, 8);
	Date d4(2012, 10, 17);
	Date d5(d2);
	Date d6;
	d6 = d3;

	d6 = d3.Tomorrow();
	d5 = d2.Yesterday();
	
    cout << (d6 == d4) << endl;     // false
	cout << (d6 != d4) << endl;     // true
    cout << (d6 >= d4) << endl;     // false
	cout << (d6 <= d4) << endl;     // true
	cout << (d6 > d4) << endl;      // false
	cout << (d6 < d4) << endl;      // true

	d3 = d2 + 1;    // 2/1/2012
	d2 = d3 - 2;
	d4++;           // 18/10/2012
	++d2;           // 1/1/2012
	d5--;           // 30/12/2011
	--d6;           // 1/8/2012

	cout << d3 << endl;     // 2/1/2012
	cin >> d4;
	
    cout << (int)d3 << endl;			// from the first day of current year = 2
	
	cout << (long)d4 << endl; 		    // from 1/1/1

	Date d7;    // Current date: 5/6/2019
	d7 += 7;    // 12/6/2019
	d2 -= 6;    // 26/12/2011
    cout << d7 << " " << d2 << endl;
}
