#!/usr/bin/node
const request = require('request');
const fs = require('fs');
const requestURL = process.argv[2];
const filePath = process.argv[3];

request.get(requestURL, (error, response) => {
  if (error) return console.log(error);

  /* write the response body into the file path */
  fs.writeFile(filePath, response.body, 'utf-8', (error) => {
    if (error) return console.log(error);
  });
});
