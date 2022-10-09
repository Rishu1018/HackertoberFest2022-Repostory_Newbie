#include <bits/stdc++.h>
using namespace std;

int getlargest(int arr[], int n)
{
   return *max_element(arr,arr+n);
}
int minelement(int arr[],int n)
{
    return *min_element(arr,arr+n);
}
int main()
{
    cout << "enter the size" << endl;
    int f;
    cin >> f;
    int num[f];

    for (int i = 0; i < f; i++)
    {
        cout << "enter the element" << endl;
        cin >> num[i];
    }
    int pos = getlargest(num, f);
    cout << "result " << pos << endl;
    int ele=minelement(num,f);

    cout<<" min element"<<"  "<<ele;

    return 0;
}
