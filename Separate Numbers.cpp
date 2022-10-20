#include<iostream>
#include<string>
using namespace std;
int main()
{
	char arr[100];
	int size;
	cout << "Enter the string mix with numbers:" << endl;
	cin.getline(arr, 100);
	size = strlen(arr);
	cout << "Separate the Numbers from the String:" << endl;
	for (int i = 0; i<size; i++) 
	{
				if (arr[i] > '0' && arr[i] < '9') 
				{
					cout << arr[i];
				}
    }
	return 0;

}

