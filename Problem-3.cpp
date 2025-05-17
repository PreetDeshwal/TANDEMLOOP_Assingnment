#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the value of x:- ";
    cin >> x;

    int count = (x % 2 == 0) ? x - 1 : x;

    int num = 1;
    for (int i = 0; i < count; i++)
    {
        cout << num;
        if (i < count - 1) cout << ", ";
        num += 2;
    }

    cout << endl;
    return 0;
}
