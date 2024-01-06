/*sort(v.begin(),v.end());
	int result = 0 ;
	int check = (v.size())/2;
	int i = 0 ;
	int count = 0 ;
	int temp = 0 ;
	if(v.size()==1){
		return v[i];
	}
	while(i<=v.size()-1){
		if(v[i]==v[i+1]){
		  
		  temp = temp + 1 ;
		  
				
		}
		else{
			count = temp+1;
            if(count>check)
            {
               result = v[i-1]; 
             
            } 
            temp = 0;
            
		}
		i++;
	}
	
	return result;*/