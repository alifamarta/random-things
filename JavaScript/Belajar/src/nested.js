var a = '';

for(var b = 15;b > 0;b--){
    for(var c = 0;c < b;c++){
        a += '*';
    }
    a += "<br>";
}
document.write(a)