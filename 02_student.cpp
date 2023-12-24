#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int age;
        bool gender;

    };
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Student raj;
    raj.name="Ankit Raj";
    raj.age=22;
    raj.gender=1;
    Student Varsha;
    Varsha.name="Akanksha";
    Varsha.age=20;
    Varsha.gender=0;
    cout<<Varsha.name<<endl;
    return 0;
}