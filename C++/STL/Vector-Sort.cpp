#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    vector<int> v;
    int n, size = v.size(), a;
    cin>>n;
    for(int i=0; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
        size++;
    }
    sort(v.begin(), v.end());
    for(int i=0 ; i<n ; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
