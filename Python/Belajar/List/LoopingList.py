kota = []
loop = True

while loop:
    listkota = input("Masukkan Kota: ")
    kota.append(listkota)

    ask = input("Mau menambahkan kotanya lagi (y/t)? ")

    if (ask == 't'):
        loop = False

    
print ("Kamu memiliki {} kota yang dikunjungi:".format(len(kota)))

for city in kota:
    print("- {}".format(city))