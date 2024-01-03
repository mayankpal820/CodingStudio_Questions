/*
int firstpos(vector<int>& arr , int size , int key){
    int i = 0 ;
    int ans = -1;
    while(i<=size){
        int mid = (i+size)/2;
        if(arr[mid] == key){
            ans = mid;
            size = mid-1;
        }
        else if (arr[mid]>key){
            size = mid-1;
        }
        else if (arr[mid]<key){
            i = mid + 1;
        }
    }
    return ans;
}
int lastpos(vector<int>& arr, int size , int key){
    int i = 0 ;
    int ans = -1;
    while(i<=size){
        int mid = (i+size)/2;
        if(arr[mid] == key){
            ans = mid;
            i = mid+1;
        }
        else if (arr[mid]>key){
            size = mid-1;
        }
        else if (arr[mid]<key){
            i = mid + 1;
        }
    }
    return ans;
}


*/