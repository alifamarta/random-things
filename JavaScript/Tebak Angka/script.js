var chance = 3;
alert('Tebak angka 1-10'+'\n kamu punya ' + chance + ' kesempatan')
chance--
while(chance >= 0){
    // User input & random number
    var user = prompt("Masukkan angka 1-10");
    var generate = Math.floor(Math.random()*11)

    // Result
    if (user == generate){
        alert('TEBAKAN ANDA BENAR '+'ANGKA YANG DICARI ADALAH '+generate);
        break;  
    } else if (chance == 0){
        alert('KESEMPATAN ANDA TELAH HABIS'+'\n ANGKA YANG BENAR ADALAH '+generate);
        break;
    } else if(user > generate){
        alert('TEBAKAN ANDA TERLALU TINGGI' + '\n Kamu masih memiliki '+chance+' kesempatan');
    } else if(user < generate){
        alert('TEBAKAN ANDA TERLALU RENDAH'+'\n Kamu masih memiliki '+chance+' kesempatan');

        chance--
    }
}