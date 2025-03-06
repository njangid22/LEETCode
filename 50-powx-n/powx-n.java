class Solution {
    public double myPow(double x, int n) {
        long m = Math.abs((long) n);
        double result = 1.0;
        
        while (m > 0) {
            if ((m & 1) == 1) {
                result *= x;
            }
            x *= x;
            m >>= 1;
        }
        
        return n < 0 ? 1 / result : result;
    }
}