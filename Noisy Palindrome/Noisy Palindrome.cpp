bool solve(string s) {
    string t;
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
            t+=s[i];
        }
    }
    string x=t;
    reverse(x.begin(), x.end());
    if(x==t){
        return true;
    }
    else{
        return false;
    }
}
