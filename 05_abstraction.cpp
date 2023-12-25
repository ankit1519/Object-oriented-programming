#include<bits/stdc++.h>
using namespace std;
class Parent{
    private:
        int p;
        int q;
    public:
        void set(int input){
            p=input;
            q=p/2;
        }
        int retP(){
            return p;
        }
        int retQ(){
            return q;
        }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   Parent obj1;
   obj1.set(10);
   
   cout<<"q is: "<<obj1.retQ()<<endl;
   cout<<"P is: "<<obj1.retP()<<endl;
    
    return 0;
}