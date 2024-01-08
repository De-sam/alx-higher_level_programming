#!/usr/bin/node
function add (a, b) {
  console.log(a + b);
}
const firstArgument = parseInt(process.argv[2]);
const secondArgument = parseInt(process.argv[3]);

add(firstArgument, secondArgument);
