#include<bits/stdc++.h>
using namespace std;
class Test{
    
public:
    int a;
    int *p;
    Test(int x){
        a=x;
        p=new int[a];
    }
    Test(Test &t){
        a=t.a;
        //p=t.p;
        p=new int[a];
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Test t(5);
    cout<<t.p<<endl;
    Test t1(t);
    cout<<t1.p<<endl;
    return 0;
}