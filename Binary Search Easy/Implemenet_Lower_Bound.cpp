/*
int s = 0 ;
	int e = n - 1 ;
	int mid ;
  
	while(s<=e){
		 mid = (s+e)/2 ;
        
		if(arr[mid]==x){
			if(arr[mid]>arr[mid-1]){
				return mid;
				
			}
			else{
				e = mid - 1;
			}
		}
		else if(arr[mid]<x){
			s = mid + 1 ;
		}
		else if(arr[mid]>x){
			e = mid - 1 ;
		}
	}
	if((x>arr[mid] || x<arr[mid]) && s>e){
		return s;
	}
	else if(arr[mid]>x && s==0){
        return 0;
    }
    else if(arr[mid]<x && (e==(n-1))){
        return n;
    }
	return 0;
*/