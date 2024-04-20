//二分查找   search:查找
#include<stdio.h>

int binarySearch(int * nums, int target, int left, int right){  // left:代表左边界   right:代表右边界
    if(left > right) return -1;     //如果左边大于右边，那么肯定就找完了，所以直接返回
    int mid = (left + right) / 2;   //这里计算出中间位置
    if(nums[mid] == target) return mid;  //直接比较，如果相等就返回下标
    if(nums[mid] > target)  //如果就是大于或小于的情况下，这里mid+1 和 mid-1 实际上就是下一次寻找中不算上当前的mid，因为这里已经比较过了，所以说左边-1 右边就+1
        return binarySearch(nums, target, left, mid - 1);   //如果大于，说明肯定不在右边，直接去左边找
    else
        return binarySearch(nums, target, mid + 1 , right); //如果小于，那么说明肯定不在左边，直接去右边找

}
int search(int * nums, int numsSize, int target){
    return binarySearch(nums, target, 0, numsSize -1);
}

