#include<bits/stdc++.h>
using namespace std;
class Human{
public:
	int age;
	int height;
	int weight;
	int getAge(){
		return this->age;
	}
};
class Male:public Human{
public:
	string color;
	void sleep(){
		cout<<"Sleeping\n";
	}
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	Male obj1;
	obj1.age=21;
	obj1.height=147;
	obj1.weight=75;
	cout<<obj1.getAge()<<endl;
	obj1.color="Brown";
	cout<<obj1.color<<endl;
	obj1.sleep();
}