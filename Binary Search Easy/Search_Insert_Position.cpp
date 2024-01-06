/*int result ;
	int s = 0 ;
	int e = (arr.size()-1);
	int mid;
	sort(arr.begin(),arr.end());
	if(arr.size()==0){
		return 0;
	}
	
	while(s<=e){
		mid = (s+e)/2;
		if(arr[mid]==m){
			return mid;
		}
		else if(arr[mid]<m){
			s = mid + 1;
		}
		else if(arr[mid]>m){
			e = mid - 1;
		}
	}
	if(arr[mid]!=m && s>e){
		return s;
	}*/
