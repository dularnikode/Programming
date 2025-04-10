// Spiral Matrix

/**
 * @param {number[][]} matrix
 * @return {number[]}
 */


const input = [[1,2,3,4],[5,6,7,8],[9,10,11,12]];
var spiralOrder = function(matrix) {
    let m = matrix.length;
    let n = matrix[0].length;
    let left = 0;
    let right = n - 1;
    let top = 0;
    let bottom = m - 1;

    const spiralMatrix = [];

    while(left <= right && top <= bottom){
        for(let i=left ; i <= right ; i++){
            spiralMatrix.push(matrix[top][i]);
        }
        top++;
        for(let i = top; i <= bottom;i++){
            spiralMatrix.push(matrix[i][right])
        }
        right--;
        if(left <= right){
            for(let i = right;i>= left;i--){
                spiralMatrix.push(matrix[bottom][i])
            }
            bottom--;
        }
        
        if(top <= bottom){
            for(let i = bottom; i >= top; i--){
                spiralMatrix.push(matrix[i][left]);
            }
            left++;
        }
        
    }

    return spiralMatrix;
};


console.log("Output : ",spiralOrder(input));
console.log("Expected : ",[1,2,3,4,8,12,11,10,9,5,6,7]);