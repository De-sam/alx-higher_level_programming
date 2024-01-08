#!/usr/bin/node
const firstArgument = process.argv[2];

if (isNaN(Number(firstArgument))) {
  console.log('Missing number of occurrences');
} else {
  for (let i = 0; i < firstArgument; i++) {
    console.log('C is fun');
  }
}
