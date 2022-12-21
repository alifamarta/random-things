var item = prompt("Pick a character : \n (Char: Sol Badguy, Noctis Caelum, Walter White, Vergil, Dante")

switch(item){
    case ' Sol Badguy':
        alert('You pick Sol Badguy as your character');
        break;
    case 'Noctis Caelum':
        alert('You pick Noctis as your character');
        break;
    case 'Walter White':
        alert('You pick Waltuh as your character');
        break;
    case 'Vergil':
        alert('You pick Vergil as your character');
        break;
    case 'Dante':
        alert('You pick Dante as your character');
        break;
    default:
        alert("The character you pick didn't make the list");
        break;
}