// Counter II
 
// Write a function createCounter. It should accept an initial integer init. It should return an object with three functions.

// The three functions are:

// increment() increases the current value by 1 and then returns it.
// decrement() reduces the current value by 1 and then returns it.
// reset() sets the current value to init and then returns it.

//solution
interface Counter {
  increment(): number;
  decrement(): number;
  reset(): number;
}

const createCounter = (init: number = 0): Counter => {
  let count: number = init;

  const increment = (): number => {
    count++;
    return count;
  };

  const decrement = (): number => {
    count--;
    return count;
  };

  const reset = (): number => {
    count = init;
    return count;
  };

  return { increment, decrement, reset };
};

const counter: Counter = createCounter(5);

console.log(counter.increment()); // 6
console.log(counter.reset()); // 5
console.log(counter.decrement()); // 4