#include<bits/stdc++.h>
using namespace std;
class Human{
public:
	int age;
	int height;
	int weight;
	
};
class Male:protected Human{
public:
	string color;
	void sleep(){
		cout<<"Sleeping\n";
	}

	//updated 16_interitence2
	int getAge(){
		return this->age;
	}
	void setAge(int age){
		this->age=age;
	}
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	Male obj1;
	obj1.setAge(21);
	cout<<obj1.getAge();
	
}