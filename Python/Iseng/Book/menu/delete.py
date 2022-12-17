from menu.add import buku
from menu.show import show

def delete():
    show()
    idbuku = int(input("Masukkan ID Buku : "))

    if (idbuku > len(buku)):
        print("Salah tuh bang ID nya")
    else:
        buku.remove(buku[idbuku])