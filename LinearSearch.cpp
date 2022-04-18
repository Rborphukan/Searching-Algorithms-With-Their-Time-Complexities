// Standard template for Linear Search :

#include<iostream>
using namespace std;

int linearSearch(int ar[], int size, int element){
    int i;
    for(i = 0; i<size; i++){
        if(ar[i] == element){
            return ar[i]; 
                        
        }
    }
    return -1;      
}

int main(){
    
}