class orang():
    def __init__(self,name):
        self.name = name
        self.alamat = ""
        self.__age = 0 

    def __cek_age(self):
        if self.__age > 17:
            return "sudah dewasa"
    @property
    def age(self):
        return self.__age

    @age.setter
    def age(self,value):
        self.__age = value 

class Rakyat(orang):
    def __init__ (self,nik,name):
        orang.__init__(self,name)
        self.nik = nik
    
    def cetak(self, nik=False, alamat=False, age=False):
        print("Nama : {}".format(self.name))
        if nik :
            print("NIK : {}".format(self.nik))
        
        if alamat:
            print("Alamat : {}".format(self.alamat))
        
        if age:
            print("Age : {}".format(self.age))


rkyt = Rakyat('470190','Ujang Slebew')
rkyt.age = 20
rkyt.alamat = "Jepara"
rkyt.cetak(alamat = True, nik = True, age = True)
print("\n")

rkyt2 = Rakyat('297813','Chairul Leklek')
rkyt2.age = 26
rkyt2.alamat = "Mataram"
rkyt2.cetak(alamat = True, nik = True, age = True)
print("\n")

rkyt3 = Rakyat('4567123','Hairul Wokeuplikethis')
rkyt3.age = 15
rkyt3.alamat = "Madiun"
rkyt3.cetak(age = True)
print("\n")

rkyt4 = Rakyat('7771821','Anton Skizo')
rkyt4.age = 14
rkyt4.alamat = "Ngawi"
rkyt4.cetak(alamat = True)
print("\n")