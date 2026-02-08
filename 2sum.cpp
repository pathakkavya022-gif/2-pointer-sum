#include<iostream>
using namespace std;
int sum(int arr[],int n){
    
    int i=0;
    int j=n-1;
    int target=15;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(target==sum){
        return j;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=sum(arr,n);
    cout<<sum(arr,n)<<" ";
    return 0;
}