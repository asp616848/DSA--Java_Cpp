#include <iostream>
#include <vector>
#include "sort012.cpp"
#include "TwoSum.cpp"
#include "findTheMajorityElementinON.cpp"
#include "kadanesAlgorithm.cpp"
#include "stocksBuySell.cpp"
#include "rearrangeBySign.cpp"
#include "nextPermutation.cpp"
#include "leader.cpp"
#include "LongestConsecutiveSequence.cpp"
#include "SetMatrixZero.cpp"
#include "rotateArrayBy90.cpp"
#include "spiralMatrixPrint.cpp"
using namespace std;

int main(){
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    if(twoSum(arr, 2)){
        cout<< "true\n\n";
    }
    else{
        cout<< "false\n\n";
    }

    sort012(arr);
    cout << "After sorting:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr1[] = {1,8,2,2,8,4,4,5,8,8,8,8,8,8,9};
    int n = sizeof(arr1) / sizeof(arr1[0]); 
    cout << endl;
    cout << findMajority(arr1, n) << endl;

    //_________________________________________________
    int array[] = {-2, -3, 4, -1, -2, 1, 5, -3,-12, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int *result = findMaxSumSubArray(array, size);
    std::cout << "Maximum sum is " << result[0] << " from index " << result[1] << " to " << result[2] << std::endl;
    delete[] result; // Don't forget to free the dynamically allocated memory
    
    int arrB[] = {7,1,5,3,6,4};
    int num = sizeof(arrB)/ sizeof(arrB[0]);
    printBuySell(arrB, num);

    int arreh[] = {1,-1,2,3,-2,-3};
    int sizzeh = sizeof(arreh)/sizeof(arreh[0]);
    cout << "\n" << sizzeh << " :size of array to rearrange";
    vector<int> arrehh = rearrangeBySign(arreh, sizzeh);
    cout<< "\nREARRANGED BY SIGN: \n";
    for(int k = 0; k < sizzeh; k++){
        cout << arrehh[k] << "  ,";
    }
    cout << endl;
    // int arreh1[] = {1,-1,2,3,-2,-3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    // int sizzeh1 = sizeof(arreh1)/sizeof(arreh1[0]);
    // cout << "\n\n\n\n" << sizzeh1 << "\n\n\n\n\n";
    // vector<int> arrehh1 = rearrangeBySign2(arreh1, sizzeh1);
    // cout<< "\nREARRANGED BY SIGN: \n";
    // for(int k = 0; k < sizzeh1; k++){
    //     cout << arrehh1[k] << "  ,";
    // }
    // cout << endl;


    int h[] = {2, 1, 5, 4, 3, 0, 0};
    nextPermutation(h, 7);
    cout<< endl;


    int arr2[] = {16, 17, 4, 3, 5, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printLeaders(arr2, n2);

    int arr3[] = {100, 4, 200, 1, 3, 2};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout  << "This is the length of the longest consecutive seq => "<< LongestCOnsecutiveSequence(arr3, n3) << endl;

    vector<vector<int>> a = {{1, 2, 3, 4}, {5, 0, 7, 8}, {0, 10, 11, 12}, {13, 14, 15, 16}};
    SetMatrixZeroAndPrint(a);


    int arr4[4][4] = {  {1, 2, 3, 4}, 
                        {5, 6, 7, 8}, 
                        {9, 10, 11, 12}, 
                        {13, 14, 15, 16}};
    rotateArrayBy90(arr4, 4, 4);


    vector<vector<int>> arr5 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiralMatrixPrint(arr5);

    return 0;
}