#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    set<int> s;
    int length = s.size();
    int k,n,i,j,arr[100][2];
    cin>>n;
    for(i=0 ; i<n ; i++){
        cin>>j>>k;
        if(j==1){
            s.insert(k);
        }
        if(j==2){
            s.erase(k);
        }
        if(j==3){
            auto sea = s.find(k);
            if(sea!= s.end()){
                cout<<"Yes"<<endl;
            }
            else if(sea == s.end()){
                cout<<"No"<<endl;
            }
        }
    }
    
    return 0;
}



