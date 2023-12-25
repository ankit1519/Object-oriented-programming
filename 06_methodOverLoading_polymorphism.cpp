#include<bits/stdc++.h>
using namespace std;
class Obj{
public:
    void num(int x){
        cout<<"The integer x value is: "<<x<<endl;
    }
    void num(double x){
        cout<<"The decimal x value is: "<<x<<endl;
    }
    void num(int x,int y){
        cout<<"The x and y values are: "<<x<<", "<<y<<endl;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Obj a1;
    a1.num(10);
    a1.num(122.111);
    a1.num(21,11);
    
    return 0;
}