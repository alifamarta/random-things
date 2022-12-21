var num = prompt("Input Number : ");
var y = parseInt(num);

for(var x = 0;x <= y;x++){
    for(var i = 1; i <= y - x; i++){
        document.write("&nbsp&nbsp");
    }

    for(var i = 1; i < 2 * x; i++){
        document.write("*")
    }

    document.write("<br>")
}