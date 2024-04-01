// function add(num1, num2){
//     return num1 + num2;
// }
// module.exports = add; // Export the single add function


// function subtract(num1, num2){
//     return num1 - num2;
// }
// // module.exports = add; // Will overwrite this if an module passes in a different function
// module.exports = subtract; // Export the single subtract function


// function add(num1, num2){
//     return num1 + num2;
// }
// function subtract(num1, num2){
//     return num1 - num2;
// }
// module.exports = { add, subtract }; // Export the add and subtract functions


exports.add = function add(num1, num2){
    return num1 + num2;
};

exports.subtract = function subtract(num1, num2){
    return num1 - num2;
}