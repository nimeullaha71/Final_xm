#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks;

};
    bool compare_Student(Student a,Student b)
    {
        if(a.total_marks != b.total_marks)
        {
            return a.total_marks > b.total_marks;
        }
        else
        {
           return a.id < b.id;
        }
    }
int main()
{
    int N;
    cin>>N;

    Student a[N];

    for(int i=0; i<N; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;
    }

    sort(a, a+N, compare_Student);

    cout<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<a[i].nm<<' '<<a[i].cls<<' '<<a[i].s<<' '<<a[i].id<<' '<<a[i].math_marks<<' '<<a[i].eng_marks<<endl;
    }
    return 0;
}
