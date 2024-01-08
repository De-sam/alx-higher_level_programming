#!/usr/bin/node
const firstArgument = parseInt(process.argv[2]);

if (isNaN(firstArgument)) {
  console.log('Not a number');
} else {
  const number = parseInt(firstArgument);
  console.log('My number: ' + number);
}
