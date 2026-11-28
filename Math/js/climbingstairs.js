//Problem
//You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?


const climbStairs = (n) => {

    if(n === 0 || n === 1) return 1;

    let first = 1, second = 2;

    for(let i = 3; i <= n; i++){

        let third = first + second;

        first = second;

        second = third;

    }

    return second

}

console.log(climbStairs(5)) 