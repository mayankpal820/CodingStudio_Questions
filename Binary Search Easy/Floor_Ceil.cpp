/*

pair<int , int> p ;
	int fr ;
	int cei ;
	int s = 0 ;
	int e = n-1;
	int mid;
	
	while(s<=e){
		mid = (s+e)/2;
		if(a[mid]==x){
			fr = a[mid];
			cei = a[mid];
			p.first = fr;
			p.second = cei;
			break;
		}
		else if(a[mid]>x){
			e = mid - 1;
		}
		else if(a[mid]<x){
			s = mid + 1;
		}
	}
	if(a[mid]!=x && s>e){
		if(s==0){
			p.first=-1;
			p.second = a[mid];
			
		}
		else if(s>(n-1)){
        p.first=a[e];
		p.second = -1;
		}
        else{
            p.first = a[e];
			p.second = a[s];
            }
        }
	return p;

*/