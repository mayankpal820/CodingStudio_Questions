/*
int s = 0 ;
    int e = n ;
    if(n==1 || n==0){
        return n;
    }
    while(s<=e){
        long mid = (s+e)/2;
           if(mid*mid==n || (mid*mid<n && n<(mid+1)*(mid+1)) ){
            return mid;
        }
       
        else if(mid*mid>n){
            e = mid ;

        }
        else if(mid*mid<n){
            s = mid ;
        }
    }
*/