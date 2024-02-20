#!/usr/bin/node
const request = require('request');
const process = require('process');
const requestURL = process.argv[2];

request.get(requestURL, (error, response) => {
  if (error) return console.log(error);
  const results = JSON.parse(response.body);
  const todosCompleted = {};
  results.forEach((result, index) => {
    if (result.completed === true) {
      if (todosCompleted[result.userId] === undefined) {
        todosCompleted[result.userId] = 1;
      } else {
        todosCompleted[result.userId]++;
      }
    }
  });

  console.log(todosCompleted);
});
