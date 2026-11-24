// 2629. Function Composition
// Given an array of functions [f1, f2, f3, ..., fn], return a new function fn that is the function composition of the array of functions.

// The function composition of [f(x), g(x), h(x)] is fn(x) = f(g(h(x))).

// The function composition of an empty list of functions is the identity function f(x) = x.

// You may assume each function in the array accepts one integer as input and returns one integer as output.

//solution
 
type Func = (arg: any) => any

function compose(functions: Func[]): Func {

  if (functions.length === 0) {

    return (x: any) => x;
  }

  return functions.reduceRight((prevFn, nextFn) => {

    return (x: any) => {
      return nextFn(prevFn(x))

    }
  })
}

const fn = compose([x => x + 1, x => 2 * x])

console.log(fn(4)); // 9




// O(1) space complexity
var compose2 = function(functions: AnalyserNode) {
  if (functions.length === 0) {
    return function(x: any) { return x; };
  }
  
  return function(x:any) {
    let result = x;
    for (let i = functions.length - 1; i >= 0; i--) {
      result = functions[i](result);
    }
    return result;
  }
};

const fn = compose([x => x + 1, x => 2 * x]);
console.log(fn(4)); // 9