#!/usr/bin/node
function factorial (n) {
  if (isNaN(n) || n < 2) return 1;
  else return n * factorial(n - 1);
}
const number = process.argv[2];
const result = factorial(number);

console.log(result);
