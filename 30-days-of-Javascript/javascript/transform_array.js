// 2635. Apply Transform Over Each Element in Array
//  Given an integer array arr and a mapping function fn, return a new array with a transformation applied to each element.

// The returned array should be created such that returnedArray[i] = fn(arr[i], i).

// Please solve it without the built-in Array.map method.

//solution
var map = function(arr, fn) {
    
  const transformedArr = [];
  for (let i = 0; i < arr.length; i++) {
    transformedArr[i] = fn(arr[i], i)

  }
  return transformedArr
};

console.log(map([1, 2, 3], function plusone(n) { return n + 1; })); // Output: [2, 3, 4]