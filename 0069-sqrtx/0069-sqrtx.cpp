class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        return 0;
    int h=0;
    while((long)(1<<h)*(long)(1<<h)<=x) // firstly, find the most significant bit
        h++;
    h--;
    int b=h-1;
    int res=(1<<h);
    while(b>=0){  // find the remaining bits
        if((long)(res | (1<<b))*(long)(res |(1<<b))<=x)
            res|=(1<<b);
        b--;
    }
    return res;
    }
};