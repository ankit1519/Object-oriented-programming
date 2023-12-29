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
    Student *r=new Student();
    r->age=21;
    r->name="Ankit raj Srivastava";
    cout<<r->name<<"'s age is: "<<r->age<<endl;
    return 0;
}