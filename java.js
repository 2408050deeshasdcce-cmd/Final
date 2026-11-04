
var scriptURL = "PASTE_YOUR_WEB_APP_URL_HERE";

document.getElementById("studentForm").addEventListener("submit", function(event) {

    event.preventDefault();

    var form = document.getElementById("studentForm");

    fetch(scriptURL, {
        method: "POST",
        body: new URLSearchParams(new FormData(form)),
        mode: "no-cors"
    });

    alert("Form Submitted Successfully!");

    form.reset();

});