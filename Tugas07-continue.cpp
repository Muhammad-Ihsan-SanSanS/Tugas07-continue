#include <iostream>
using namespace std;

int main () {
	
	for ( int i = 10; i <= 100; i++ ) {
		if ( i % 2 == 0 ) continue;
		cout << "\n|" << i << " bilangan genjil|" << "\n+------------------+";
	}
	return 0;
}
