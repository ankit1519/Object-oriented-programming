#include<bits/stdc++.h>
using namespace std;
class Obj{
    int l,b;
public:
    int area(){
        return getLength()*getBreadth();
    }
    int perimeter(); 
    void setLength(int length){
        if(length<=0) cout<<"Give proper length "<<endl;
        l=length;
    }
   void setBreadth(int breadth){
    if(breadth<=0) cout<<"Give Proper breadth "<<endl;
        b=breadth;
    }
    int getLength(){
        if(l<0) return 0;
        return l;
    }
    int getBreadth(){
        if(b<0) return 0;
        return b;
    }
};
int Obj::perimeter(){
    return 2*(getLength()+getBreadth());
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Obj a1;
    a1.setLength(10);
    a1.setBreadth(5);
    cout<<a1.area()<<endl;
    cout<<a1.perimeter()<<endl;
    return 0;
}