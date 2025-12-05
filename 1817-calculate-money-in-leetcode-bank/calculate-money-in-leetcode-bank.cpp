class Solution {
public:
    int totalMoney(int n) {
        int week_start = 1;
        int total=0;
        while(n>0){
            for(int i =0; i<7; i++){
                if(n==0) break;
                total += week_start + i;
                n-=1;
            }
            week_start += 1;
        }
        return total;
    }
};