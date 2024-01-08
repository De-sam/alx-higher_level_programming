#!/usr/bin/node
const squareSize = process.argv[2];
if (isNaN(Number(squareSize))) {
  console.log('Missing size');
} else {
  for (let i = 0; i < squareSize; i++) {
    let row = '';
    for (let j = 0; j < squareSize; j++) {
      row += 'X';
    }
    console.log(row);
  }
}
