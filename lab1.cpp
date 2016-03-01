#include<iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    while(i != 1) {
        cout << i << ' ';
        if(i % 2) i = 3 * i + 1;
        else i = i / 2;
    }
    cout << i << endl;
    return 0;
}
