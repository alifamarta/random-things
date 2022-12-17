class OperasiAritmatika:
    def __init__(self,x,y):
        self.x = x
        self.y = y

    def bil1(self):
        return self.x
    def bil2(self):
        return self.y
    
    def tambah(self):
        return self.x + self.y

    def kurang(self):
        return self.x - self.y 
    
    def kali(self):
        return self.x * self.y
    
    def bagi(self):
        return self.x / self.y
    
    def sisa(self):
        return self.x % self.y
    
op = OperasiAritmatika(10,5)
bil1 = op.bil1()
bil2 = op.bil2()
opTambah = op.tambah()
opKurang = op.kurang()
opKali = op.kali()
opBagi = op.bagi()
opSisa = op.sisa()

print(" -- Operasi Aritmatika --")
print("=================================")
print("Bilangan Kesatu      = ",bil1)
print("Bilangan Kedua       = ",bil2)
print("Hasil Penjumlahan    = ",opTambah)
print("Hasil Pengurangan    = ",opKurang)
print("Hasil Perkalian      = ",opKali)
print("Hasil Pembagian      = ",opBagi)
print("Hasil Sisa Bagi      = ",opSisa)
print("=================================")
