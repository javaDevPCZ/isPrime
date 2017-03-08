#include <iostream>
#include <cstdio>

using namespace std;

bool isPrime(int value)
{
    bool isPrimeInd = true;
    int i = 2;
    do
    {
        if ((value % i == 0 || value < 2) && value!=2)
        {
            isPrimeInd = false;
            break;
		}
        i++;
    }while (i<value);
	return isPrimeInd;
}


int main()
{
    int number;
    cout << "isPrime checker" << endl << "Please provide a number to check:" << endl;
    cin>>number;

    if(isPrime(number))
    {
        cout << number << " is prime!" << endl;
    }
    else
        cout << number << " is not prime!" << endl;
    getchar(); getchar();
    return 0;
}
