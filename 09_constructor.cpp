#include<bits/stdc++.h>
using namespace std;
class Student{
    
        string name;
        int age;
        bool isAgeSet=false;
    public:

        //parameterized constructor
        Student(string n,int a){
            setName(n);
            setAge(a);
        }

        //Non-parameterized constructor
        Student(){
            setName("Universal");
            setAge(18);
        }

        //copy constructor
        Student(Student &s){
            setName(s.getName());
            setAge(s.getAge());
        }
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
           
            if(this->isAgeSet==0) {
                cout<<"Set age first!!"<<endl;
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
    Student raj("Ankit",21);
    cout<<raj.getAge()<<" "<<raj.getName()<<endl;
    
    Student x;
    cout<<x.getAge()<<endl;

    Student y(raj);
    cout<<y.getAge()<<endl;
    return 0;
}