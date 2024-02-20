#!/usr/bin/node
const request = require('request');
const requestURL = process?.argv[2];

request.get(requestURL, (error, response) => {
  if (error) return console.log(error);
  console.log(`code: ${response.statusCode}`);
});
