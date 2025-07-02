#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for (int i = 1;i<=5;i++) {
        for (int j = 1;j<=n-i;j++) {
            cout<<" ";
        }
        for (int j = i;j>=1;j--) {
            cout<<j;
        }
        for (int j = 2;j<=i;j++)  {
            cout<<j;
        }
        for (int j = 1;j<=n/2-i;j++) {
            cout<<" ";
        }
        cout<<endl;
    }
    for (int i = 4;i>=1;i--) {
        for (int j = 1;j<=n-i;j++) {
            cout<<" ";
        }
        for (int j = i;j>=1;j--) {
            cout<<j;
        }
        for (int j = 2;j<=i;j++) {
            cout<<j;
        }
        for (int j = 1;j<=n-i;j++) {
            cout<<" ";
        }
        cout<<endl;
    }

        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
  4 3 2 1 2 3 4
    3 2 1 2 3
      2 1 2
        1

