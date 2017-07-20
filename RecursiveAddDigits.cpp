class Solution {
public:
    int addDigits(int num) {
        if(num < 10)
            return num;
        int end = 0;
        for(int temp = num; temp > 0; temp /= 10)
            end += temp % 10;
        return addDigits(end);
    }
};