#include<bits/stdc++.h>
using namespace std;
class Animal{
public:
	int weight;
	int legs;
	
};
class Dog:public Animal{
public:
	void bark(){
		cout<<"bhooww "<<endl;
	}
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	Dog rocky;
	rocky.weight=21;
	rocky.bark();
	cout<<rocky.weight;
}