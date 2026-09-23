///week03-1.cpp 學習計畫 Basic 第八題
///LeetCode 1822. Sign of the Product of an Array
///給你C++的陣列 nums,請你把所有的數乘起來,正的1,負的-1,剩下的是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;///負數有幾個 迴圈前面 一開始是0個
        for(int num : nums){///C++進階for迴圈
            if(num==0)return 0;///只要任一數是0 乘後變0
            if(num<0) neg++;///遇到負數
        }
        if(neg % 2 ==0)return 1;///有偶數個負數 負負得正
        return -1;///負的
        ///下面是壞的
        ///int N = nums,size(); ///陣列的.size()大小
        ///int ans = 1;
        /// for(int i=0;i<N;i++){
        ///   ans = ans*nums[i];
        ///}
        ///if(ans>0)return 1;
        ///if(ans<0)return -1;
        ///return 0;
    }
}
