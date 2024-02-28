$(document).ready(($) => {
  const parentUl = $(".my_list");

  $("#add_item").on("click", () => {
    parentUl.append("<li>Item</li>");
  });

  $("#remove_item").on("click", () => {
    parentUl.children().last().remove();
  });

  $("#clear_list").on("click", () => {
    parentUl.children().remove();
  });
});
