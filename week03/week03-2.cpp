///week03-2.cpp 學習計畫 Basic第六題
///LeetCode 283. Move Zeroes
///把0移到右邊去 等於不是0的放左邊再補0
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;///目標放在哪裡 nums[k]
        for(int num : nums){///C++進階for迴圈
            if(num !=0){///把不是0都移到左邊去
                nums[k]=num;///把數字放左邊
                k++;///換下一格
            }
        }
        ///把殘留的都變成0
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
}
