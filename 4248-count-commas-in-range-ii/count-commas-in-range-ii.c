long long countCommas(long long n) {
    long long tot=0;
    long long threshold =1000;
    if (n<threshold)
        return 0;
    while(n >= threshold){
        tot+=(n-threshold)+1;
        if(threshold> LLONG_MAX /1000)
        break;
        threshold*=1000;
    }
    return tot;
}