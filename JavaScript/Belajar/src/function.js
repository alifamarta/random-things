function cube(a, b){
    var VA;
    var VB;
    var total;

    VA = a * a * a;
    VB = b * b * b;

    total = VA + VB;

    return total;
}

alert(cube(2,8));
alert(cube(2,2))