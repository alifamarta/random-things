menu = [
    ["Nasi Oyeng","Nasi Sergio Ramos","Nasi Template","Mie Rebus","Bubul Cumcum"],
    ["Es Teh Manis", "Es Teh Anget", "Teh Tawar", "Teh Tawar ada selai nya","Es Jeruk"],
    ["Ayam Goyeng", "Tahu", "Tempek", "Bakwan"]
]

for menu_lengkap in menu:
    for makanan in menu_lengkap:
        print (makanan)
print ("Anda memesan {}, {}, {}".format(menu[0][1],menu[1][3],menu[2][0]))