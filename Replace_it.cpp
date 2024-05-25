#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str,word;
        cin>>str;
        cin>>word;
        while(str.find(word) !=-1){
            str.replace(str.find(word), word.length(), "$");
        }
        cout<<str<<endl;
    }
    return 0;
}
