//MULTISET -->> It is the type of associative container in STL
//Each element in multiset does not has to be unique like in set
//In a set, the value of an element is itself the key of type T
//Internally the data stored in multiset is stored in sorted form by internal comparision object
//Sets are typically implemented as binary search trees

#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
	multiset <int> ms;
	for(int i=0; i<10; i++){
		ms.insert(10-i);
	}
	multiset <int> :: iterator it = ms.begin();
	for(it; it!=ms.end(); it++){
		cout<<*it<<endl;
	}
	
	//It allows duplicate values
	cout<<"After adding duplicate element -->>"<<endl;
	ms.insert(1);
	for(it=ms.begin(); it!=ms.end(); it++){
		cout<<*it<<endl;
	}
return 0;
}

//Refer http://www.cplusplus.com/reference/set/multiset/
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
