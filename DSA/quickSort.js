function quickSort(nums) {
  quickSortAl(nums, 0, nums.length - 1);
  return nums;
}

function quickSortAl(nums, low, high) {
  if (low < high) {
    const pivot = partation(nums, low, high);
    quickSortAl(nums, low, pivot - 1);
    quickSortAl(nums, pivot + 1, high);
  }
}



// function partation(nums, low, high) {
//   const pivot = nums[low];

//   let i = low;
//   let j = high;

//   while (i < j) {
//     while(nums[i] <= pivot && i <= high - 1){
//         i++;
//     }
//     while(nums[j] > pivot && j >= low+1){
//         j--;
//     }
//     if(i < j){
//         const temp = nums[i];
//         nums[i] = nums[j];
//         nums[j] = temp; 
//     }
//   }
  
//   [nums[j],nums[low]] = [nums[low],nums[j]];
//   return j;
// }


function partation(nums, low, high) {
    const pivot = nums[high]; // Use nums[high] as the pivot
    let i = low - 1; // Pointer for elements smaller than pivot
  
    for (let j = low; j < high; j++) {
      if (nums[j] <= pivot) { // Ascending order condition
        i++;
        // Swap nums[i] and nums[j]
        [nums[i], nums[j]] = [nums[j], nums[i]];
      }
    }
  
    // Place the pivot in the correct position
    [nums[i + 1], nums[high]] = [nums[high], nums[i + 1]];
    return i + 1; // Return the pivot's index
  }


//   function partation(nums, low, high) {
//     const pivot = nums[high]; // Use nums[high] as the pivot
//     let i = low - 1; // Pointer for elements greater than pivot
  
//     for (let j = low; j < high; j++) {
//       if (nums[j] >= pivot) { // Descending order condition
//         i++;
//         // Swap nums[i] and nums[j]
//         [nums[i], nums[j]] = [nums[j], nums[i]];
//       }
//     }
  
//     // Place the pivot in the correct position
//     [nums[i + 1], nums[high]] = [nums[high], nums[i + 1]];
//     return i + 1; // Return the pivot's index
//   }


console.log(quickSort([7,4,1,5,3]));