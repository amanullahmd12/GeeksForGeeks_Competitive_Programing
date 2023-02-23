//Second Largest




class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest = INT_MIN;
	    int secondLargest = INT_MIN;
	    
	    if(n<2){
	        return -1;
	    }
	    
	    for(int i=0;i<n;i++){
	        if(largest < arr[i]){
	            secondLargest = largest ;
	            largest = arr[i];
	        }
	        else if(secondLargest < arr[i] && arr[i] != largest){
	            secondLargest = arr[i];
	        }
	        
	    }
	    
	    if(secondLargest == INT_MIN){
	        return -1;
	    }
	    return secondLargest;
	}
};
