from menu.add import add,edit
from menu.show import show
from menu.delete import delete

def menu():
    print("\n")
    print("[1] Lihat")
    print("[2] Tambah Data")
    print("[3] Ubah Data")
    print("[4] Hapus Data")
    print("[5] Keluar")

    x = input("Masukkan Menu > ")
    
    if x == "1":
        show()
    elif x == "2":
        add()
    elif x == "3":
        edit()
    elif x == "4":
        delete()

    elif x == "5":
        print("=========================================")
        print("\n")
        print("> THANK YOU ")
        print("\n")
        print("=========================================")

        exit()