//Missing number

 int sn=(N*(N+1))/2;
    
    int sum=0;
    for(int i=0;i<N-1;i++)
    {
        sum=sum+A[i];
    }
    
    int miss=sn-sum;
    
    return miss;
    
