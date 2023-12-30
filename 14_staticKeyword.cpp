#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int age;
        //static member
        static string university;

        //static function
        static string fun(){
            return university;
        }
    };
    string Student::university="sist";
    int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    Student raj;
    cout<<raj.university<<endl;
   cout<<Student::university<<endl;
   Student b;
   b.university="SU";
   cout<<raj.university<<" "<<b.university<<endl;
   cout<<Student::university<<endl;
   cout<<Student::fun()<<endl;
    return 0;
}