//Map 
//Map is used to create 2 connected arrays in form of key->value pair
//Map arranges all keys in alphabetical order
//Map strictly allows only unique keys while multimap allows duplicate keys
//Used to implement Red Black tree
#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	//**************************************map creation
	map <int,string> colg;
	
	
	//**************************************ADD values in colg map
	//***********************Method-1
	colg[948]="Nikki";
	colg[949]="Nikhil";
	colg[950]="Aditya";
	cout<<colg[948]<<endl;
	
	//**********************Method-2 does not work with gcc 4.9.2
	//Create a map coffee and adding values
//	map <int,string> coffee{
//		{"Espresso",30},{"Cappuccino",20},{"Tea",10}
//	};
//	cout<<coffee["Tea"]<<endl;
	//Method-1 is simple use it.
	
	//*****************************************To search for any value in map
	//find(key) function to search a value by key
	//USe of ternary operator 
	colg.find(948)!=colg.end() ? cout<<"Key Found"<<endl : cout<<"Key not found"<<endl;
	
	//******************************************How to add an element using insert() & make_pair() function
	colg.insert(make_pair(947,"Jim"));
	cout<<colg[947]<<endl;
	
	//*****************************************ITERATORS IN MAP
	//********Syntax to create iterator
	map <int,string> :: iterator it = colg.begin();
	
	//********Print all elements in map using iterator
	//key ==>> it->first  and  value ==>> it->second
	for(it; it!=colg.end(); it++){
		//colg.end() is NULL as it points to one block extra than actual last element of map
		cout<<it->first<<" : "<<it->second<<endl;
	}
	
	//**********Use of erase() function
	cout<<"After using erase() function on first element using iterator -->>"<<endl;
	it=colg.begin();
	colg.erase(it);
	for(it=colg.begin(); it!=colg.end(); it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}
	
	//*******TO erase() by key 
	cout<<"After using erase() function using key -->>"<<endl;
	colg.erase(950);
		for(it=colg.begin(); it!=colg.end(); it++){
		//colg.end() is NULL as it points to one block extra than actual last element of map
		cout<<it->first<<" : "<<it->second<<endl;
	}
	
	//*******************************Now when you try to add a duplicate key which is not allowed
	//EXPECTED RESULT::::It simply overrides the values which is entered recently corresponding to the duplicated key.
	//BUT IT DOES NO CHANGE IN THE MAP
	cout<<"Using Duplicated key -->>"<<endl;
	colg.insert(make_pair(949,"John"));
	for(it=colg.begin(); it!=colg.end(); it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}
	
return 0;
}
//Also refer http://www.cplusplus.com/reference/map/map/
