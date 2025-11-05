#include<iostream>
using namespace std;

int arr[50];
int get_max(int s_i, int l_i){
    int max=0;
    for(int i=s_i; i<=l_i; i++){
        if(arr[i] > arr[max]){
            max=i;
        }
    }
    return max;
}
void swap(int i, int j){
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void selection_sort(int n){
    int pass;
    for(pass=1; pass<n; pass++){
        int largest_index=get_max(0,n-pass);
        swap(largest_index, n-pass);
    }
}
int main(){
    int n, i;
    cout << "Enter number of elements: ";
    cin >> n;
    arr[n];
    for(i=0;i<n;i++){
        cout << "Enter element: ";
        cin >> arr[i];
    }
    cout << "Sorted array is: ";
    selection_sort(n);
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}