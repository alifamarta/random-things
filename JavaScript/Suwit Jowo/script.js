var truek = true;
while(truek){
var p = prompt('pilih : gajah, semut, orang');


// menangkap pilihasn computer
// membangkitkam bilangan random
var comp = Math.random();

if(comp < 0.34){
    comp = 'gajah';
} else if(comp >= 0.34 && comp < 0.67){
    comp = 'orang';
} else {
    comp = 'semut';
}

var hasil = '';
// rules
if (p == comp){
    hasil = 'SERI';
} else if(p == 'gajah'){
    // hasil

    hasil = (comp == 'orang') ? 'MENANG' : "KALAH";
} else if(p == 'orang'){
    hasil = (comp == 'gajah') ? 'KALAH' : 'MENANG';
} else if (p == 'semut'){
    hasil = (comp == 'orang') ? 'KALAH' : 'MENANG';
} else{
    hasil = "ANDA MEMASUKKAN PILIHAN YANG SALAH";
}


// tampilkan hasilnya
alert('Kamu memilih : '+p+' dan komputer memilih : '+comp+'\n Maka hasilnya : Kamu '+hasil);

truek = confirm('lagi ?');

}

alert("THANK YOU")