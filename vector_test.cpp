#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	//Vector creation syntax
	vector<int>vec;
	
	//push_back() method adds elements at the end
	vec.push_back(100);
	vec.push_back(200);
	vec.push_back(300);

	//size() function print size of vector
	cout<<vec.size()<<endl;
	
	//add 1 more element
	vec.push_back(400);
	//check size of vector if changed
	cout<<vec.size()<<endl;
	
	//Now print all elements 
	for(int i=0; i<vec.size(); i++){
		cout<<vec[i]<<endl;
	}
	//front() and back() are two functions that points to first and last element in the vector respectively.
	cout<<"First element :- "<<vec.front()<<endl;
	cout<<"Last element :- "<<vec.back()<<endl;
	
	//at() function allows access to element at any index
	cout<<"Element at 1 index is :- "<<vec.at(1)<<endl;
	
	//Now perform deletion
	//pop_back() method deletes an element from the end
	vec.pop_back();
	//it deletes one element
	
	//Now print all elements 
	for(int i=0; i<vec.size(); i++)
		cout<<vec[i]<<endl;

	vec.pop_back();
	vec.pop_back();
	
	
	//empty() method returns 1 if vector is empty otherwise 0.
	cout<<vec.empty()<<endl;
	vec.pop_back();
	cout<<vec.empty()<<endl;
	
	
	//??????????????????????????????Alternative way to define a vector although this does not work and generates warning
	//vector creation along with initialization
//	vector<int>vec1{100,200,300};
//	
//	for(int i=0; i<vec1.size(); i++)
//		cout<<vec1[i]<<endl;
	
	//****************************Alternative way to define a vector
	//vector creation with size declaration here vec2 of size 3
	vector<int>vec2(3);
	cout<<vec2.size()<<endl;
	cout<<vec2[0]<<endl; //It prints zero as default value of int type is 0
	
	//****************************Alternative way to define a vector
	//vec4 contains 2 arguments
	//(1)--> size of vector , (2)-->value to be stored in all blocks of vector
	vector<char>vec4(3,'a');
	//Now print all elements 
	for(int i=0; i<vec4.size(); i++){
		cout<<vec4[i]<<endl;
	}
	
	
	//************************************Iterators in vectors****************************************
	//An iterator when created points to the elements stored in the vector
	//Iterators are just like pointers but provide some additional facilities as below

	vector<int>vec5;
	vec5.push_back(10);  vec5.push_back(20);  vec5.push_back(30);
	//creates a vector with 3 elements [10,20,30]

	//Syntax for creation of iterator
	vector<int> :: iterator it;
	//it is the iterator
	
	//begin() points to the starting element
	it = vec5.begin();
	cout<<*it<<endl;
	
	//end() method points to one extra block after last element [10,20,30,NULL] ,i.e, vec5.end() points to NULL
	
	it = vec5.end();
	cout<<*it<<endl;
	
	//We can perform it-- or it++ operations to point previous or next element that can't be done on pointers
	it--;
	cout<<*it<<endl;
	
	//****Alternative syntax
	//vector<int> :: iterator it = vec5.begin()
	
	
	//******************************REVERSE_ITERATOR
	//Reverse iterator creation syntax
	vector<int> :: reverse_iterator rit = vec5.rbegin();
	cout<<"Reverse Iterator concept applied :- "<<*rit<<endl;
	
	
	//***************************INSERT ELEMENT AT ANY INDEX*************************
	//insert(a,b) function is used to do so
	//It has two arguments: "a-->index" where to insert, "b--> Value" to be inserted
	cout<<"Vector elements are :- ";
	for(int i=0; i<vec5.size(); i++)
		cout<<vec5[i]<<" ";
	
	cout<<"\n";	
	//To insert value at index 1 and that is 50
	it = vec5.begin();
	vec5.insert(it+1, 50);
	
	cout<<"Elements after inserted in mid are :- ";
	for(int i=0; i<vec5.size(); i++)
		cout<<vec5[i]<<" ";
	
//**************************TAKE INPUT IN VECTOR AND PRINT VALUES DYNAMICALLY**********************

    int i=0,n,num;
    vector <int>v;
    cout<<"How many elements ?"<<endl;
    cin>>n;
    cout<<"Elements ?"<<endl;
    while(cin>>num && i<n){
        v.push_back(num);
        i++;
    }
    cout<<"The numbers in the vector are:"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
//**************************************************************************************************
//****************************2D VECTOR*************************************************************
	
//**************************************************************************************************
	
return 0;
}
