int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
     
    if (n > 1)
        result -= result / n;
    return result;
}

vector<int> countCoPrime(vector<int> a){
    vector<int> r(a.size(), 0);
    for(int i=0; i<a.size(); i++){
        r[i] = phi(arr[i]);
    }
    return r;
}

void main(){

}