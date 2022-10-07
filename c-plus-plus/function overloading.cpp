#include <iostream>

using namespace std;

// function declarations
int sumOfNumbers(int, int); // type-1
int sumOfNumbers(int, int, int); // type-2
int sumOfNumbers(int, float); // type-3
float sumOfNumbers(float, float); // type-4

int main() 
{
        cout << "Type -1 : SUM IS = " << sumOfNumbers(10, 20) << endl;
        cout << "Type -2 : SUM IS = " << sumOfNumbers(10, 20, 30) << endl;
        cout << "Type -3 : SUM IS = " << sumOfNumbers(10, 20.0 f) << endl;
        cout << "Type -4 : SUM IS = " << sumOfNumbers(10.2 f, 20.3 f) << endl;

        return 0;
}

// function definitions...

int sumOfNumbers(int x, int y) 
{
        return (x + y);
}

int sumOfNumbers(int x, int y, int z) 
{
        return (x + y + z);
}

int sumOfNumbers(int x, float y)
{
        return (x + (int) y);
}

float sumOfNumbers(float x, float y)
{
        return (x + y);
}
