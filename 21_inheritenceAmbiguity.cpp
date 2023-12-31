#include<bits/stdc++.h>
using namespace std;

class A{
public:
	void fun(){
		cout<<"Function is in A\n";
	}
};
class B{
public:
	void fun(){
		cout<<"Function is in B\n";
	}
};
class C:public A, public B{
public:
	int c;

};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	C obj;
	obj.A::fun();
	return 0;
}