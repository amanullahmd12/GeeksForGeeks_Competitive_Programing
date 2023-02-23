//Largest Element in Array



//Approch 1

int largest(vector<int> &arr, int n)
    {
        int max=arr[0];
        
        for(int i=0;i<n;i++){
            if(max < arr[i]){
                max=arr[i];
            }
        }
        
        
        return max;
    }


//Approch 2
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
      sort(arr.begin(),arr.end());
      return arr[n-1];
        
    }
};
