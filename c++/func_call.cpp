#include <iostream>

using namespace std;
// void greet()
// {
//     cout << "Hello World!" << endl;
// }

// int main()
// {
//     greet();
//     return 0;
// }


int sum(int a , int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int num1 , num2 ;
    cout << "Enter the numbers u want the sum for :"<< endl ;
    cin>>num1,num2 ;
    int tot = sum ( num1,num2);
    cout << tot << endl;
    return 0;

}
