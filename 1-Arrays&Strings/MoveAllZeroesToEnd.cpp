// Reference : https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1#

void pushZerosToEnd(int arr[], int n) {
	    // keep the count of non-zero element, as soon as we encounter
	    // a non zero element after zeroes we swap it with the first zero
	    int count = 0;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] != 0) {
	            swap(arr[i], arr[count]);
	            count++;
	        }
	    }
	}