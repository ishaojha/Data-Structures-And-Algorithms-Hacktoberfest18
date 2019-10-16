//  method return true if n is Happy Number 
//  numSquareSum method is given in below detailed code snippet 
int isHappyNumber(int n) 
{ 
    set<int> st; 
    while (1) 
    { 
        n = numSquareSum(n); 
        if (n == 1) 
            return true; 
        if (st.find(n) != st.end()) 
            return false; 
        st.insert(n); 
    } 
} 