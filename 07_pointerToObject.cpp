#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int age;
        bool gender; //0 -> female, 1 -> male

    };
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Student r;
    Student *p;
    p=&r;
    p->age=21;
    cout<<p->age<<endl;
    return 0;
}