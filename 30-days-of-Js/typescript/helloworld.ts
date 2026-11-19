// Create Hello World Function
// Problem: Write a function createHelloWorld. It should return a new function that always returns "Hello World".

// solution

const createHelloworld = (): (() => string) => {
    const greeting: string = "Hellow world";

    return function (): string {
        return greeting;
    };
};

// call the function
const greet = createHelloworld();
console.log(greet());