#include<bits/stdc++.h>
using namespace std;
class Student{
    
        int age;
        
    public:
       Student(int age){
        this->age=age;
       }
       int getAge(){
        return age;
       }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Student raj(21);
    //raj.setAge(21);
    //raj.setAge(22);
    //cout<<raj.getName()<<endl;
    cout<<raj.getAge()<<endl;
    
    return 0;
}