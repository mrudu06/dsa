#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number:";
//     cin >>n;
//     cout<<"You entered :"<<n<<endl;
//     return 0;

// }

int main()
{
    int no_elements;
    cout<<"Enter the number of elements:";
    cin >> no_elements;

    int arr[no_elements];

    for (int i=0 ; i<no_elements ; i++)
    {
        cin >> arr[i];
    }

    for (int j=0 ; j<no_elements ; j++)
    {
        cout << arr[j] << " ";
    }

    cout << endl ;
    return 0;
}

