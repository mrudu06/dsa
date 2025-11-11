#include <iostream>
using namespace std;

int main()
{
    int n;
    int maxVal;
    cout << "Enter the no.of elemetns :";
    cin >> n ;

    int arr[n];
    for(int i=0 ; i<n; i++)
    {
        cin >> arr[i] ;
    }
    maxVal = 0;
    for (int j =0 ; j<n ; j++)
    {
        if (arr[j]> maxVal)
        {
            maxVal = arr[j];
        }
        cout << endl ;
    }

    cout << maxVal;
    return 0;
}
