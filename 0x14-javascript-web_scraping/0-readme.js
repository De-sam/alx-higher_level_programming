#!/usr/bin/node
const fs = require('fs');
const process = require('process');
const filePath = process?.argv[2];

fs.readFile(filePath, 'utf-8', (error, data) => {
  if (error) return console.log(error);

  console.log(data);
});
