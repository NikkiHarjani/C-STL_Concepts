//SET -->> It is the type of associative container in STL
//Each element in set has to be unique
//The value of the element cannot be modified once it is added to the set, though you can remove & add new value of that element
//In a set, the value of an element is itself the key of type T
//Internally the data stored in set is stored in sorted form by internal comparision object
//Sets are typically implemented as binary search trees

#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
	//Create set
	set <int> num;
	
	//Add elements using insert()
	for(int i=0; i<10; i++){
		num.insert(10-i);
		//set will sort automatically
	}
	
	//Print elements using iterator
	set <int> :: iterator it = num.begin();
	for(it; it!=num.end(); it++){
		cout<<*it<<endl;
	}	
	
	//find() and erase()
	cout<<"After using find() and erase()"<<endl;	
	it=num.find(6);
	num.erase(it);
	for(it=num.begin(); it!=num.end(); it++){
		cout<<*it<<endl;
	}
	
	/* NOTE : DOES NOT RUN error-->> Read only objects are there whose value can't be edited
	//We can modify and add but we can't replace it throws error if tried as below
//	it=num.begin();
//	it = num.find(1);
//	*it=10;
//	cout<<*it<<endl;
	*/
	
return 0;
}

//Refer http://www.cplusplus.com/reference/set/set/
//Useful functions
/*
begin()
end()
size()
max_size()
clear()
empty()
erase()
find()
count()
clear()
*/
