murid = []

def show():
    if len(murid) <= 0:
        print ("BELUM ADA COY")
    else:
        for indeks in range(len(murid)):
            print ("[%d] %s " % (indeks, murid[indeks]))

def insert():
    new_student = input("Nama Murid: ")
    murid.append(new_student)

def edit():
    show()
    indeks = int(input("Inputkan ID: "))
    if(indeks > len(murid)):
        print ("ID nya salah bang :v")
    else:
        edit_student = input("Edit nama: ")
        murid[indeks] = edit_student

def delete():
    show()
    indeks = int(input("Inputkan ID: "))
    if(indeks > len(murid)):
        print ("ID nya salah bang :v")
    else:
        murid.remove(murid[indeks])
    
def show_menu():
    print("\n")
    print("--------MENU--------")
    print("[L] Lihat")
    print("[T] Tambahkan")
    print("[U] Ubah")
    print("[H] Hapus")
    print("[K] Keluar")

    menu = input("PILIH MENU > ")
    print ("\n")

    if menu == "L":
        show()
    elif menu == "T":
        insert()
    elif menu == "U":
        edit()
    elif menu == "H":
        delete()
    elif menu == "K":
        exit()
    else:
        print("Kelebihan buset")


while True:
    show_menu()
