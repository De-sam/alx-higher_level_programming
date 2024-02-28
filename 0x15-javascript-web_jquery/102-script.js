$(document).ready(($) => {
  const apiUrl = "https://www.fourtonfish.com/hellosalut/hello/?";

  $("#btn_translate").on("click", () => {
    $.ajax({
      url: `${apiUrl}${$.param({ lang: $("#language_code").val() })}`,
      success: (result) => {
        $("#hello").text(result.hello);
      },
      error: (error) => {
        console.log(error);
      },
    });
  });
});
