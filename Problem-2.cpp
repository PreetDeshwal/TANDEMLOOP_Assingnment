#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the value of x:- ";
    cin >> x;

    int num = 1;
    for (int i = 0; i < x; i++)
    {
        cout << num;
        if (i < x - 1) cout << ", ";
        num += 2;
    }

    cout << endl;
    return 0;
}
