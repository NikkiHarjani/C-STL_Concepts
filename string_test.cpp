//String various functions test
//String is array of characters
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
	//***************cin always takes one word and stops where it identifues space
//	string s;
//	cin>>s; //Hello nikki
//	cout<<s<<endl;  // prints hello
	
	//***************Use getline(cin,s) to overcome this problem
	string x;
	getline(cin,x);
	cout<<x<<endl;
	
	
	//***************2 ways to assign value to string
	string s1 = "Nikki";
	string s2("Nikhil"); //Constructor is initialized
	cout<<s1<<" & "<<s2<<endl;
	
	
	//**************2 ways to copy one string in another
	string s3,s4;
	s3 = s1;
	s4.assign(s1);
	cout<<"Copying --> "<<s3<<" & "<<s4<<endl;
	
	
	//************at() and length()
	string s5="rainbow";
	cout<<s5.at(1)<<endl;
	//cout<<s5.at(10)<<endl; This throws runtime error as size of the string is exceeded
	
	for(int i=0; i<s5.length(); i++){
		cout<<s5.at(i);
	}
	cout<<"\n";
	
	
	//**************substr(a,b) function
	//It takes two parameters a-->> starting index from where to print substring, b-->>length of substring to be printed beginning from a
	string s6 = "Hello John how are you?";
	//now we need to print how are you?
	//assume s6 to be an array of characters and assign int index to each alphabet and also to space.
	cout<<s6.substr(11,12)<<endl;
	
	
	//***********swap() function
	string s7 = "a"; string s8 = "b";
	cout<<"Before swapping -->> "<<s7<<","<<s8<<endl;
	s7.swap(s8);
	cout<<"After swapping  -->> "<<s7<<","<<s8<<endl;
	
	
	//*********find() and rfind() function
	string s9 = "Ham is spam oh yes I am";
	//Now we need to find where "am" occurs
	//In s9 "am" occurs three times
	cout<<s9.find("am")<<endl;
	//prints 1 the starting index of first letter in "am" from beginning that occured for fist timeh g
	
	cout<<s9.rfind("am")<<endl;
	//prints 21 
	//rfind() searches for "am" from the end and returns index of first letter in am that occured for fist from the end
	
	
	//**********erase()  --> it takes one parameter index from where to erase the whole string
	cout<<s9.erase(11)<<endl;
	//It just prints Ham is spam
	
	
	//**********replace() -->>Takes 3 parameters
	//(1)-->> starting index from where to replace
	//(2)-->length of string to be replaced
	//(3)-->>String to be replaced with
	
	cout<<s9.replace(7,4,"arrogant")<<endl;
	
	
	//*********insert()-->two parameters
	//(1)-->>starting index from where to insert a substring at begin, mid or end
	//(2)-->>substring to be inserted
	
	string y = "Hello Nikki";
	//To write Hello Miss Nikki
	cout<<y.insert(5," Miss")<<endl;
	
	
	//*************strtok()-->>takes two parameters
	//(1)-->>String (2)-->>delimeter
	//This function is used to break a sentence across delimeter ex- space comes
	char p[] = "Hi I am Nikki";
	//Task is to extract words called as tokens from the string p
	
	char *ptr;
	ptr = strtok(p," "); // static variable= stores state of string in previous function call
	while(ptr!=NULL){
		cout<<ptr<<endl;
		ptr=strtok(NULL," "); //NULL implies we have to extract words from the orignal string
	}
	
	
	
return 0;
}
