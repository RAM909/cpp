vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector <int> unionarr;
    int c= a.size();
    int d= b.size();
    int i =0;
    int j=0;

    while(i< c && j<d){
        if(a[i]<= b[j]){
            if(unionarr.size()==0 || unionarr.back()!= a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        } else{
                if (unionarr.size() == 0 || unionarr.back() != b[j]) {
                  unionarr.push_back(b[j]);
                }
                j++;
            }
    }

        while(j<d){
             if(unionarr.size()==0 || unionarr.back()!= b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
        while(i<c){
            if(unionarr.size()==0 || unionarr.back()!= a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        
    
    return unionarr;

}