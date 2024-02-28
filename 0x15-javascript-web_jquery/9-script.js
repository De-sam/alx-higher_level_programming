$(document).ready(($) => {
  const apiUrl = "https://fourtonfish.com/hellosalut/?lang=f";

  $.ajax({
    url: apiUrl,
    success: (result) => {
      $("#hello").text(result.hello);
    },
    error: (error) => {
      console.log(error);
    },
  });
});
