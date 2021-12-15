#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
    int a[1000],size=1, x, c=0, res, i, j;
    a[0]=1;
    for(x=2 ; x<=n ; x++)
    {
        for(i=0 ; i<size ; i++)
        {
            res = a[i]*x +c;
            a[i]=res%10;
            c = res/10;
        }
        while(c>0)
        {
            a[size]=c%10;
            size++;
            c=c/10;
        }
    }
    for(j=size-1 ; j>=0 ; j--)
    {
        cout<<a[j];
    }

}


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
