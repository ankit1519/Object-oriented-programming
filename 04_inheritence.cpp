#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
        int p;
    
};
class Child: public Parent{
public:
    int c;
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   Child obj1;
   obj1.c=15;
   obj1.p=19;
   cout<<"Child id is: "<<obj1.c<<endl;
   cout<<"Parent id is: "<<obj1.p<<endl;
    
    return 0;
}