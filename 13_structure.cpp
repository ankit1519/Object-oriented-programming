//Structure is nothing but same as class in c++. But all the data members are public by default.

#include<bits/stdc++.h>
using namespace std;
struct Student{
    
        int age;
        
       int getAge(){
        return age;
       }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Student raj;
    raj.age=12;
    cout<<raj.getAge()<<endl;
    
    return 0;
}