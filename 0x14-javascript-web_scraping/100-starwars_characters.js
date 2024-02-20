#!/usr/bin/node
const request = require('request');
const process = require('process');
const movieId = process.argv[2];
const requestURL = `https://swapi-api.alx-tools.com/api/films/${movieId}`;

request.get(requestURL, (error, response) => {
  if (error) return console.log(error);
  const results = JSON.parse(response.body);
  const movieCharacters = results.characters;

  movieCharacters.forEach((movieCharacter, index) => {
    request.get(movieCharacter, (error, response) => {
      if (error) return console.log(error);
      const character = JSON.parse(response.body);
      console.log(character.name);
    });
  });
});
