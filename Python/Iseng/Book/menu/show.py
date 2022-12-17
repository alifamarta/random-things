from menu.add import buku

def show():
    if len(buku) <= 0:
        print("GK ADA BUKU BANG")
    else:
        for Judul in range(len(buku)):
            print("[%d] %s \n"% (Judul,buku[Judul]))