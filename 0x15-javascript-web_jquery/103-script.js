$(document).ready(($) => {
  $("#btn_translate").on("click", () => {
    translate();
  });
  $("#language_code").on("focus", () => {
    $(this).keydown((e) => {
      //check if the keycode is enter which is 13
      if (e.keyCode == 13) {
        translate();
      }
    });
  });
});

const translate = () => {
  const apiUrl = "https://www.fourtonfish.com/hellosalut/hello/?";

  $.ajax({
    url: `${apiUrl}${$.param({ lang: $("#language_code").val() })}`,
    success: (result) => {
      $("#hello").text(result.hello);
    },
    error: (error) => {
      console.log(error);
    },
  });
};
