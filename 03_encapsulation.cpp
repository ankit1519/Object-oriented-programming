#include<bits/stdc++.h>
using namespace std;
class Student{
    
        string name;
        int age;
        bool gender; //0 -> female, 1 -> male
        bool isAgeSet=false;
    public:
        void setName(string name){
            if(name=="" ) cout<<"Enter valid name"<<endl;
            this->name=name;
        }
        string getName(){
            if(this->name!="") return this->name;
            cout<<"Set name first!!"<<endl;
        }
        
        void setAge(int age){
            if(age<0) cout<<"Enter valid digit"<<endl;
            this->age=age;
            this->isAgeSet=true;
        }
        int getAge(){
           
            if(this->isAgeSet==0) {cout<<"Set age first!!"<<endl;
            return 0;
        }
            return this->age;
            
        }
    };
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Student raj;
    raj.setName("Ankit");
    //raj.setAge(22);
    cout<<raj.getName()<<endl;
    cout<<raj.getAge()<<endl;
    
    return 0;
}