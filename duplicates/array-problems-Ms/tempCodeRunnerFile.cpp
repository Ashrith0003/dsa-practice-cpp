    int target = 7;
    int low = 0;
    int high = n-1;
    int mid = low+(high-low)/2;
    bool found = false;
    while(low<=high){
        if(mid == target){
            found = true;
            return mid;
        }else if(mid > target){
            low =mid+1;
        }else{
            high = mid -1;
        }
    }
    if(!found){
        cout<<"element not found "<<endl;
    }else{
        cout<<mid;
    }
    return 0;
}