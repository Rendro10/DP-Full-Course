// // C++ program to rotate an array by
// // d elements
// #include <bits/stdc++.h>
// using namespace std;

// /*Function to left Rotate arr[] of
// size n by 1*/
// void leftRotatebyOne(int arr[], int n)
// {
// 	int temp = arr[0], i;
// 	for (i = 0; i < n - 1; i++)
// 		arr[i] = arr[i + 1];

// 	arr[n-1] = temp;
// }

// /*Function to left rotate arr[] of size n by d*/
// void leftRotate(int arr[], int d, int n)
// {
// 	for (int i = d; i > 0; i--)
// 		leftRotatebyOne(arr, n);
// }

// /* utility function to print an array */
// void printArray(int arr[], int n)
// {
// 	for (int i = 0; i < n; i++)
// 		cout << arr[i] << " ";
// }

// /* Driver program to test above functions */
// int main()
// {
// 	int arr[] = { 10,20,30,40,50};
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	// Function calling
// 	leftRotate(arr, 2, n);
// 	printArray(arr, n);

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int ans;
        while(low<=high){
            int n=nums.size();
            int mid = (high+low)/2;
            int next = (mid+1)%n;
            int prev = (mid+n-1)%n;
          
            if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                return mid;
            }
            if(nums[low]<=nums[mid]){
                low = mid+1;
            }
            else if(nums[mid]<=nums[high]){
                high = mid-1;
            }
        }
        return -1;
    }
int main(){
	vector<int>num ={4,5,6,7,0,1,2};
	cout<<search(num);
	return 0;
}