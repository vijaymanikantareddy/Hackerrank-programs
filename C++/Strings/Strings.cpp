#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b, c, a1, b1, a2s, b2s;
    cin>>a>>b;
    c = a+b;
    int la = a.size();
    int lb = b.size();
    a2s = b[0];
    b2s = a[0];
    for(int i = 1 ; i<la ; i++)
        a2s = a2s+a[i];
    for(int j = 1 ; j<lb ; j++)
        b2s = b2s+b[j];
    cout<<la<<" "<<lb<<"\n";
    cout<<c<<"\n";
    cout<<a2s<<" "<<b2s;
    return 0;
}
