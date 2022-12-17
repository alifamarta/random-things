buku = []

def add():
    newbook = input("Masukkan buku baru : ")
    buku.append(newbook)

def edit():
    from menu.show import show
    show()
    nobuku = int(input("Masukkan No buku : "))
    if (nobuku > len(buku)):
        print("Gk ada bang")
    
    else:
        edit_buku = input("Edit Buku : ")
        buku[nobuku] = edit_buku

