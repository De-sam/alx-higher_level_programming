#!/usr/bin/node
const arg = process.argv;
let firstArgument = arg[2];
let secondArgument = arg[3];
if (!arg[2]) {
  firstArgument = 'undefined';
  secondArgument = 'undefined';
} else if (!arg[3]) {
  firstArgument = arg[2];
  secondArgument = 'undefined';
} else {
  firstArgument = arg[2];
  secondArgument = arg[3];
}

console.log(firstArgument + ' is ' + secondArgument);
