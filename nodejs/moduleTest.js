// const add = require('./modules.js');
// console.log(add(5, 5)); // 10

const { add, subtract } = require('./modules.js'); /// ./ is pointing out the current directory
console.log("Addition: " + add(5, 5)); // 10
console.log("Subtract: " + subtract(5, 5)); // 10