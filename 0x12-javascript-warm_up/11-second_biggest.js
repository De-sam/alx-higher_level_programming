#!/usr/bin/node
const args = process.argv;

if (args.length <= 3) {
  console.log(0);
} else {
  args.sort((a, b) => {
    return b - a;
  });
  const secondBiggest = args[3];
  console.log(secondBiggest);
}
