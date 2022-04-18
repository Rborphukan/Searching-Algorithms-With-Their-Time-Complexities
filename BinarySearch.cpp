#include<iostream>
using namespace std;

// Time Complexity: O(log N)

// Note: to use binary search, the given array must be monotonic(i.e. the initial array must in decreasing order or in increasing order.)

// Binary Search standard template:

int binary_search(int arr[], int size, int key){
    int i = 0; // Here i means starting index 
    int j = size-1; // j means end index
    int m = (i+j)/2; // m means the mid index

    while(i <= j){
        if(arr[m] == key){
            return m; // return the index of the key
        }
        if(key > arr[m]){
            i = m + 1; // Going to the right side;
        }
        else{
            j = m-1; // Going to the left side;
        }
        m = (i+j)/2;
    }
    return -1; // returning -1 if key is not found

}



int main(){
    int arr[6] = {1,2,3,4,5,7};
    int size = 6;
    int key = 5;
    cout<<binary_search(arr,size,key);
}