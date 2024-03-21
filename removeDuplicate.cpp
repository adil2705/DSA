//codebyAdil

    vector<int> arr{1,2,3,4,};
    vector<int> brr{3,6,10,9,11};
    vector<int> ans;
    
    for(int i=0; i<arr.size();i++){
        int element =arr[i];
        for(int j=0; j<brr.size();j++){
            if(element==brr[j]){
            //marking to int_min;
            brr[j]=INT_MIN;
        }
        }
    }
        
    for(int i=0; i<arr.size();i++){
        
            ans.push_back(arr[i]);
        
        
    }
    
    for(int i=0; i<brr.size();i++){
        if(brr[i]!=INT_MIN){
            ans.push_back(brr[i]);
        }
        
    }
    
    for(int i=0; i<ans.size();i++){
       cout<<ans[i]<<" ";
        
    }
    
    
    return 0;
}
