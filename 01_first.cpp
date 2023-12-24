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
    raj.name="Ankit";
    cout<<raj.name;
    return 0;
}