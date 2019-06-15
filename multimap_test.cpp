//Multimap 
//Map strictly allows only unique keys while multimap allows duplicate keys
//Multimap is like map only and used to create 2 connected arrays in form of key->value pair
//Multimap arranges all keys in alphabetical order
#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	//**************Create multimap
	multimap<int,string>emp;
	//2 employees with different names can have same salary so use multimap
	
	
	//***************INSERTION OF ELEMENTS IN MULTIMAP
	//******Method-1
	//using insert() and make_pair()
	emp.insert(make_pair(30000,"Johny"));
	emp.insert(make_pair(40000,"JIM"));
	emp.insert(make_pair(50000,"Lawren"));
	//REMEMBER--->>> LIKE MAP emp[30000]="Johny" is ******NOT ALLOWED******
	
	//******Method-2 never prefer as M-1 is simple
	//using insert() and pair()
	emp.insert(pair<int,string>(60000,"Tom"));
	
	//*****************Iterator in multimap 
	 multimap<int,string> :: iterator it = emp.begin();

	//???????????????????Alternative to crete iterator ==>> use of auto keyword although it isn't working
	//auto it = emp.begin();
	
	//******************PRINT ELEMENTS
	for(it; it!=emp.end(); it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}
	
	//Multimap allows duplicated keys
	emp.insert(make_pair(50000,"Helen"));
	cout<<"After inserting duplicate key-->>"<<endl;
	for(it=emp.begin(); it!=emp.end(); it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}
	
	//erase() function
	cout<<"After erasing an element just added with duplicate key-->>"<<endl;
	/*????????????????????  DOUBT  ?????????????
	it=emp.begin();
	if((it->second)=="Helen"){
		emp.erase(it);
	}
	*/
	emp.erase(50000);
	for(it=emp.begin(); it!=emp.end(); it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}
	
	//*******************empty() function can be used same as vector
	emp.empty()==0 ? cout<<"Non-empty multimap"<<endl : cout<<"Empty multimap"<<endl;
	
	//*****************size() function
	cout<<"Size of multimap is :- "<<emp.size()<<endl;
	
	//*****************swap() function to swap two multimaps
	multimap<int,string>colg;
	colg.insert(make_pair(3,"A"));
	colg.insert(make_pair(4,"B"));
	//colg.insert(make_pair(5,"C"));
	//************NOTE-->> IT is not necessary to have same rows or columns in both multimaps which are to be swapped
	
	cout<<"colg multimap"<<endl;
	
	multimap<int,string> :: iterator cit = colg.begin();
	for(cit; cit!=colg.end(); cit++){
		cout<<cit->first<<" : "<<cit->second<<endl;
	}
	
	cout<<"After applying swap() function-->>"<<endl;
	emp.swap(colg);
	
	cout<<"colg multimap"<<endl;
	
	for(cit=colg.begin(); cit!=colg.end(); cit++){
		cout<<cit->first<<" : "<<cit->second<<endl;
	}
	
	//*******************lower_bound() prints exact value while upper_bound() prints one value next to given value
	it = colg.lower_bound(30000);
	cout<<"colg.lower_bound(30000)--> "<<it->first<<" : "<<it->second<<endl;
	
	it = colg.upper_bound(40000);
	cout<<"colg.upper_bound(40000)--> "<<it->first<<" : "<<it->second<<endl;
return 0;	
}
//Refer http://www.cplusplus.com/reference/map/multimap/
