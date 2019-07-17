//Pair of Vectors
//A pair is a container which stores two values mapped to each other, 
//and a vector containing multiple number of such pairs is called a vector of pairs.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int arr1[]={1,2,3,4};
    int arr2[]={18,13,20,11};
//vector of pairs declaration syntax
    vector <pair <int,int>>vec1;
    
    int n = sizeof(arr1)/sizeof(arr1[0]);
    
//Enter values in pair of vectors using "***push_back()*** with ***make_pair(array1,array2)*** as a parameter"
    for(i=0; i<n; i++){
        vec1.push_back(make_pair(arr1[i],arr2[i]));
    }
    
//Display elements of vector of pairs
//*****first & second keywords***** are used to access 1st and 2nd element of pair
    for(i=0; i<n; i++){
        cout<<vec1[i].first<<" "<<vec1[i].second<<endl;
    }
return 0;
}
//***************************************************************************************************************************************
//Case 1 : Sorting the vector elements on the basis of first element of pairs in ascending order.
//This type of sorting can be achieved using simple “ sort() ” function. By default the sort function sorts the vector elements on basis of first element of pairs
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int arr1[]={2,3,4,1};
    int arr2[]={33,22,11,44};
//vector of pairs declaration syntax
    vector <pair <int,int>>vec1;
    
    int n = sizeof(arr1)/sizeof(arr1[0]);
    
//Enter values in pair of vectors using "***push_back()*** with ***make_pair(array1,array2)*** as a parameter"
    for(i=0; i<n; i++){
        vec1.push_back(make_pair(arr1[i],arr2[i]));
    }
    
//Display elements of vector of pairs
//*****first & second keywords***** are used to access 1st and 2nd element of pair
    cout<<"Before sorting:-"<<endl;
    for(i=0; i<n; i++){
        cout<<vec1[i].first<<" "<<vec1[i].second<<endl;
    }
    cout<<"AFTER using sort():::Elements are sorted acc to first"<<endl;
    //********sort()********
    sort(vec1.begin(),vec1.end());
    
    for(i=0; i<n; i++){
        cout<<vec1[i].first<<" "<<vec1[i].second<<endl;
    }
return 0;
}
//*************************************************************************************************************************************
//Case 2 : Sorting the vector elements on the basis of second element of pairs in ascending order.
//There are instances when we require to sort the elements of vector on the basis of second elements of pair. For that, we modify the sort() function and we pass a third argument, a call to an user defined explicit function in the sort() function.
//Refer //https://www.geeksforgeeks.org/sorting-vector-of-pairs-in-c-set-1-sort-by-first-and-second/
