function tambah(){
    var hasil = 0
    for(var i = 0;i < arguments.length; i++){
        hasil += arguments[i]
    }
    return hasil;
}

var tambah = tambah(1,2,3,4,5,6,7,8,9,10);
console.log(tambah)