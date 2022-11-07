class Solution {
public:
    double myPow(double x, int n) {
        if(x==1 || n==0 )
            return 1;
        else if(x==0){
            return 0;
        }
        else if(n<0){
            double t = 1/(pow(x,abs(n)));
            if(t>10000)
                return 0;
            else
                return t;
        }
        else {
            if(pow(x,n)>10000){
                return 0;
            }
            else{
            return pow(x,n);
            }
        }
    }
};
