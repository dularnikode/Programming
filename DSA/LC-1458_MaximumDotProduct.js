
 /**Recursive */
// const maximumDotProduct = (nums1, nums2, i = 0, j = 0) => {
//     let m = nums1.length;
//     let n = nums2.length;

//     const solve = (nums1, nums2, i = 0, j = 0) => {
//         if (i === m || j == n) {
//             return Number.MIN_SAFE_INTEGER;
//         }
//         let curr = nums1[i]*nums2[j];
//         let prod = (nums1[i] * nums2[j]) + solve(nums1, nums2, i + 1, j + 1);
//         let skipI = solve(nums1, nums2, i, j + 1);
//         let skipJ = solve(nums1, nums2, i + 1, j);

//         return Math.max(prod, skipI, skipJ , curr);
//     }

//     return solve(nums1, nums2, 0, 0);
// }
// Recursive + DP
const maximumDotProduct = (nums1, nums2, i = 0, j = 0) => {
    let m = nums1.length;
    let n = nums2.length;
    let dp = Array.from({length : m } , () => new Array(n).fill(Number.MIN_SAFE_INTEGER));
    const solve = (nums1, nums2, i = 0, j = 0) => {
        if (i === m || j == n) {
            return Number.MIN_SAFE_INTEGER;
        }

        if(dp[i][j] !== Number.MIN_SAFE_INTEGER){
            return dp[i][j];
        }

        let curr = nums1[i]*nums2[j];
        let prod = (nums1[i] * nums2[j]) + solve(nums1, nums2, i + 1, j + 1);
        let skipI = solve(nums1, nums2, i, j + 1);
        let skipJ = solve(nums1, nums2, i + 1, j);
        dp[i][j] = Math.max(prod, skipI, skipJ , curr);
        return dp[i][j];
    }

    return solve(nums1, nums2, 0, 0);
}

// Input: nums1 = [2,1,-2,5], nums2 = [3,0,-6]
// Output: 18
// Input: nums1 = [3,-2], nums2 = [2,-6,7]
// Output: 21
// Input: nums1 = [-1,-1], nums2 = [1,1]
// Output: -1

let inputArr = [2, 1, -2, 5]
let arr2 = [3, 0, -6];

console.log(maximumDotProduct(inputArr, arr2));