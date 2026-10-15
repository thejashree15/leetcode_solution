class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int temp=num;
        while(temp!=0){
            int number=temp%10;
            if(num%number==0){
                count++;
            }
            temp/=10;
        }
        return count;
    }
};