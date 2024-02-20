#!/usr/bin/node
const request = require('request');
const movieId = process.argv[2];
const requestURL = `https://swapi-api.hbtn.io/api/films/${movieId}`;

request.get(requestURL, (error, response) => {
  if (error) return console.log(error);
  const characters = JSON.parse(response.body).characters;
  printCharacters(characters, 0);
});

function printCharacters (characters, index) {
  request.get(characters[index], (error, response) => {
    if (error) return console.log(error);
    console.log(JSON.parse(response.body).name);
    if (index + 1 < characters.length) {
      printCharacters(characters, index + 1);
    }
  });
}
