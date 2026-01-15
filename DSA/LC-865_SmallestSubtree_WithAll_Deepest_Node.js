
// Definition for a binary tree node.
function TreeNode(val, left, right) {
  this.val = (val === undefined ? 0 : val)
  this.left = (left === undefined ? null : left)
  this.right = (right === undefined ? null : right)
}
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var subtreeWithAllDeepest = function (root) {
  const depthMap = new Map();
  let maxDepth = 0;

  const findDepth = (root, map, depth = 0) => {
    if (root === null) {
      return;
    }
    maxDepth = Math.max(maxDepth , d);
    map.set(root.val, depth);
    findDepth(root.left, map, depth + 1);
    findDepth(root.right, map, depth + 1);
  }
  findDepth(root, depthMap, maxDepth);

  const LCA = (root)=>{
      if(root === null || map.get(root.val) === maxDepth){
        return root;
      }
      let left = LCA(root.left);
      let right = LCA(root.right);

      if(left && right){
        return root;
      }

      return left === null ? left : right; 
  }
  return LCA(root);
};


const input = [3, 5, 1, 6, 2, 0, 8, null, null, 7, 4];
function buildTree(arr) {
  if (!arr.length || arr[0] === null) return null;

  const root = new TreeNode(arr[0]);
  const queue = [root];
  let i = 1;

  while (queue.length && i < arr.length) {
    const current = queue.shift();

    // Left child
    if (arr[i] !== null && arr[i] !== undefined) {
      current.left = new TreeNode(arr[i]);
      queue.push(current.left);
    }
    i++;

    // Right child
    if (i < arr.length && arr[i] !== null && arr[i] !== undefined) {
      current.right = new TreeNode(arr[i]);
      queue.push(current.right);
    }
    i++;
  }

  return root;
}


console.log(subtreeWithAllDeepest(buildTree(input)));