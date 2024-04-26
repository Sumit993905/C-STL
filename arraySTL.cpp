#include<iostream>
#include<array> //Add Array Library
using namespace std;

int main(){

    // create an Array 
    array<int , 5> a={1, 2, 3, 4, 5};

    int size = a.size();    //Find Size of Array using STL features

    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }

    cout<<"Element at 2nd Index : "<< a.at(2); //OUTPUT : 3

    cout<<"Empty or Not :"<<a.empty();         // OUTPUT : 0[FALSE]

    




    return 0;
}