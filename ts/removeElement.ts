// Input: nums = [0,1,2,2,3,0,4,2], val = 2
// Output: 5, nums = [0,1,4,0,3,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
// Note that the five elements can be returned in any order.
// It does not matter what you leave beyond the returned k (hence they are underscores).

function removeElement(nums: number[], val: number): number {
  let i = 0;
  let j = nums.length - 1;

  while (i <= j) {
    if (nums[i] === val) {
      nums[i] = nums[j];
      j--;
    } else {
      i++;
    }
  }

  return i;
}

console.log(removeElement([0, 1, 2, 2, 3, 0, 4, 2], 2));
