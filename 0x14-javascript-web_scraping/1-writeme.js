#!/usr/bin/node
const fs = require('fs');
const process = require('process');
const filePath = process?.argv[2];
const stringToWrite = process?.argv[3];

fs.writeFile(filePath, stringToWrite, 'utf-8', (error) => {
  if (error) return console.log(error);
});
