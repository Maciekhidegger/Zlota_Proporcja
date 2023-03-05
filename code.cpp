#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <cstdlib>


using namespace std;


int sz;
long double *fib;




int main()
{
  	system("clear");

  cin >> sz;

  	system("clear");

fib = new long double [sz];

fib[0] = 1;
fib[1] = 1;

for(int i=2; i<sz; i++)
{

    fib[i] = fib[i-2] + fib[i-1];



}

	cout << setprecision(100000000) << endl;

	cout << "złota proporcja: " << fib[sz-1] / fib[sz-2] << endl;
	getchar(); getchar();

delete [] fib;

    return 0;
}
