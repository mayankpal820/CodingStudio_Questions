/*
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int l1 = 0 ;
    int l2 = 0 ;
    int sum = 0 ;
    int result = 0 ;
    int i = 0 ;
    while(i<=(a.size()-1)){
         sum = sum + a[i];
         if(sum<=k){
            l1 = l1 + 1 ;
            l2 = max(l1,l2);
            i++;
        }
        
        else if(sum>k){
            sum = 0 ;
            l1 = 0 ;
            if(a[i]+a[i+1]<k){
                i--;
            }
            else{
                i++;
            }
        }
        
        
    }
    result = l2;
    return result ;
}

*/