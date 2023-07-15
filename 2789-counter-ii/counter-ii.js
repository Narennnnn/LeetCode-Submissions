var createCounter = function(init) {
    let temp = init;
    return {
        increment:()=>++temp,
        decrement:()=>--temp,
        reset:()=>temp=init,
    }
};

// const counter = createCounter(5);
// console.log(counter.increment()); // 6
// console.log(counter.reset()); // 5
// console.log(counter.decrement()); // 4
