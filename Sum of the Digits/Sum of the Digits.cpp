int solve(int num) {
    int sum=0, m;
    while(num>0){
        m=num%10;
        sum+=m;
        num=num/10;
    }
    return sum;
}
