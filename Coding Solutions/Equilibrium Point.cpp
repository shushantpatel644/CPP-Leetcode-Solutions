 int equilibriumPoint(long long a[], int n) {
    
        // Your code here

        long long sum=0;
        long long leftSum=0;
        
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        

        for(int i=0;i<n;i++){
            if(leftSum == sum - a[i]){
                return i+1;
            }

            leftSum+=a[i]; //updating leftsum 
            sum-=a[i]; //update sume sub the curr element a[i]
        }
        
        return -1;
    }