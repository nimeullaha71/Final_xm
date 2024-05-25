#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int rid;
};
int main(){
    int N;
    cin>>N;
    Student a[N];
    for(int i=0; i<N; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
    }
    // Student mx;
    // mx.id = INT_MIN;
    int temp;
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            swap(a[i].id,a[j].id);
        }
        cout<<a[i].nm<<' '<<a[i].cls<<' '<<a[i].s<<' '<<a[i].id<<endl;
    }

}
