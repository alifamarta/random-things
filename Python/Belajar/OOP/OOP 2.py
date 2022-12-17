class Team:

    def __init__(self, nama,headquarter,since,principal):
        self.nama = nama
        self.hq = headquarter
        self.since = str(since) 
        self.principal = principal

    def F1Team(self):
        print("================= FORMULA 1 TEAM =====================")
        print("Team Name        : " + self.nama)
        print("Headquarters     : " + self.hq)
        print("First Team Entry : " + self.since)
        print("Principal        : " + self.principal)

data = Team("Red Bull Racing F1 Team","Milton Keynes,UK",2005,"Christian Horner")

data.F1Team()