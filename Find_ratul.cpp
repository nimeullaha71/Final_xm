#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count=0;
    while(ss>>word)
    {
        if(word == "Ratul")
        {
            count++;
        }
        

    }
    //(eRatul > 0)? cout<<"YES" : cout<<"NO";
    if(count>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
