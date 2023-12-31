#include<bits/stdc++.h>
using namespace std;
class A{
public:
	int weight;
	
};
class B:public A{
public:
	int height;
	
};
class C:public A{
public:
	void greet(){
		cout<<"Hi "<<endl;
	}
	
};

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	C obj1;
	obj1.weight=45;
	cout<<obj1.weight<<endl;
	//obj1.height;
	//cout<<obj1.height<<endl;
	obj1.greet();
	return 0;
	
}