$(document).ready(($) => {
  const apiUrl = "https://swapi-api.alx-tools.com/api/people/5/?format=json";

  $.ajax({
    url: apiUrl,
    success: (result) => {
      console.log(result);
      $("#character").text(result.name);
    },
    error: (error) => {
      console.log(error);
    },
  });
});
