#include<bits/stdc++.h>
using namespace std;
class A{
public:
	int weight;
	
};
class B{
public:
	int height;
	
};
class C:public A,protected B{
public:
	void greet(){
		cout<<"Hi "<<endl;
	}
	void setHeight(int height){
		this->height=height;
	}
	int getHeight(){
		return this->height;
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
	obj1.setHeight(148);
	cout<<obj1.getHeight()<<endl;
	return 0;
	
}