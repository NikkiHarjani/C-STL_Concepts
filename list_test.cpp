//List is similar to vector but like doubly linked list
#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
	//**************Syntax to create
	list<int>num;
	//*************ADD ELEMENTS
	num.push_back(20);
	num.push_back(30);
	num.push_back(40);
	
	num.push_front(10);
	
	list <int> :: iterator it = num.begin();
	for(it; it!= num.end(); it++){
		cout<<*it<<endl;
	}
	//**************DELETE ELEMENTS
	cout<<"pop_front() used -->>";
	num.pop_front();
	cout<<"pop_back() used -->>"<<endl;
	num.pop_back();
	
	for(it=num.begin(); it!= num.end(); it++){
		cout<<*it<<endl;
	}
	cout<<"Updated num list-->>"<<endl;
	num.push_back(10);
	for(it=num.begin(); it!= num.end(); it++){
		cout<<*it<<endl;
	}
	
	cout<<"After sorting:- "<<endl;
	//********************sort() function
	num.sort();
	for(it=num.begin(); it!= num.end(); it++){
		cout<<*it<<endl;
	}
	
	//********************INSERT ELEMENT AT MID ANYWHERE
	cout<<"After insertion at mid anywhere -->>"<<endl;
	
	for(it=num.begin(); it!=num.end(); it++){
		if(*it==20){
			num.insert(it,15);
		}
	}
	for(it=num.begin(); it!= num.end(); it++){
		cout<<*it<<endl;
	}
	
return 0;
}
//refer http://www.cplusplus.com/reference/list/list/
