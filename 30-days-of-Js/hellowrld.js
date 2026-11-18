// Create Hello World Function 
// Proble: Write a function createHelloWorld. It should return a new function that always returns "Hello World".

//solution

const createHelloworld = () => {

    const greeting = "Hellow world"

    return function() {

        return greeting

    }
}

//call the function
const greet = createHelloworld()
console.log(greet())