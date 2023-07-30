#include<bits/stdc++.h>
using namespace std;
int main ()
{

    array<int,5> arr={1,2,3,4,5}; // initailizer list
    array<int,5> arr2{1,2,3,4,5}; // uniform initialization
    // initailizer list
    array<int,5>arr3;
    arr3={1,2,3,4,5};
    // array<int,5>arr4; arr4{1,2,3,4,5}; -- this doesnt work


    // ITERATORS

    auto i = arr.begin(); // or int* i = arr.being() since this returns an iterator which is a pointer.
    cout<<i<<"   ";       //Returns an iterator pointing to the first element in the array container.
    cout<<*i<<endl;

    *i = 10;
    cout<< *i<<endl;  //begin() iterator can be used to change the values

    i = arr.end(); //Returns an iterator pointing to the past-the-end element in the array container.
    cout<<i<<"   ";
    cout<<*i<<endl;

    //for zero sized array begin() and end() operators are same.

    //use of being and end to print all the elements;

    for(auto i = arr.begin() ; i<arr.end() ; i++){
    cout<<*i<<" ";
    }

    cout<<endl;

    for(auto i = arr.end()-1 ; i>=arr.begin() ; i--){
    cout<<*i<<" ";
    }

    cout<<endl;

    auto qvc = arr.rbegin(); // Returns a reverse iterator pointing to the last element in the array container.
    cout<<*qvc<<endl;

    for ( auto i=arr.rbegin() ; i < arr.rend(); ++i ){
        // notice that rbegin() iterator is working similar to begin() iterator because it travers in reverse on increment
        cout<<*i<<" ";
    }
    cout<<endl;

    //rend() will return an iterator pointing to an element to just left of first element of arr.
    //cbegin(),cend(),crbeing(),crend() return constant iterator, which only allows reading the elements but doesnt allow changing the element since it is a constant iterator

    // Capacity
    //arr.size() return number of elements in the arr.
    //arr.empty() checks if array is empty
    cout<<arr.size()<<" "<<arr.empty()<<endl;

    // Element access
    cout<<arr[0]<<" "<<arr.at(0)<<" "<<arr.front()<<" "<<arr.back()<<endl;

    // Modifier
    // fill(3); fill complete array with 3
    // arr1.swap(arr2) swaps the elements of array 1 with array 2 in linear time given that both are of same type and zise

    array<int,5> myarray;
    myarray.fill(5);
    for ( int& x : myarray) { cout << ' ' << x; }
    cout<<endl;
    arr.swap(myarray);
    for ( int& x : myarray) { cout << ' ' << x; }
return 0;
}