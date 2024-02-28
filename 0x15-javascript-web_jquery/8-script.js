$(document).ready(($) => {
  const apiUrl = "https://swapi-api.alx-tools.com/api/films/?format=json";

  $.ajax({
    url: apiUrl,
    success: (results) => {
      results.results.forEach((result) => {
        $("#list_movies").append(`
        <li>${result.title}</li>
      `);
      });
    },
    error: (error) => {
      console.log(error);
    },
  });
});
