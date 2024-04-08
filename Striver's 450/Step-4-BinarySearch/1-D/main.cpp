#include <iostream>
#include "BinarySearch.cpp"
#include "findLastOccurence.cpp"
#include "numberOfOccurences.cpp"
#include "searchElementRotated.cpp"
#include "FindMinimum.cpp"
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,7,8};
    cout<<"Found at the element no. "<< findElement(arr,sizeof(arr)/ sizeof(arr[0]), 5) << endl;
    cout << " Found lower bound at the element no." << findLowerBound(arr, sizeof(arr)/ sizeof(arr[0]), 6) << endl;

    int arr2[] = {1,2,3,4,7,8,8,8,9,10};
    vector < int > v = {1,2,3,4,7,8,8,8,9,10};
    cout << "Found last occurence at the element no. " << findLastOcc(arr2, sizeof(arr2)/ sizeof(arr2[0]), 8) << endl;

    cout << "Number of occurences of 8 is " << findOccurences(arr2, sizeof(arr2)/ sizeof(arr2[0]), 8) << endl;

    int arr3[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,5,6,7,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    cout << "Element found at index " << searchInRotated(arr3, sizeof(arr3)/ sizeof(arr3[0]), 1) << endl;

    int arr4[] = {4,5,6,7,8,9,10,1,2,3};
    cout << "Minimum element is at index " << findMinimum(arr4, sizeof(arr4)/ sizeof(arr4[0])) << endl;

}