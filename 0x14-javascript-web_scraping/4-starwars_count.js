#!/usr/bin/node
const request = require('request');
const requestURL = process.argv[2];

request.get(requestURL, (error, response) => {
  if (error) return console.log(error);
  const filteredResponse = JSON.parse(response.body);
  const results = filteredResponse.results;
  let counter = 0;

  results.forEach((result, index) => {
    if (
      result.characters.includes(
        'https://swapi-api.alx-tools.com/api/people/18/'
      )
    ) {
      counter++;
    }
  });

  console.log(counter);
});
