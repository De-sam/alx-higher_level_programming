#!/usr/bin/node
const request = require('request');
const movieId = process?.argv[2];
const requestURL = `https://swapi-api.alx-tools.com/api/films/${movieId}`;

request.get(requestURL, (error, response) => {
  if (error) return console.log(error);
  console.log(JSON.parse(response.body));
});
