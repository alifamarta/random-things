class Team():
    def __init__(self):
        self.name = input("Enter Team Name : ")
        self.hq = input("Enter Base location : ")
        self.principal = input("Enter Team Principal : ")
        self.chassis = input("Enter Chassis : ")
        self.since = int(input("First Team Entry : "))

    def check_since(self):
        if self.since > 2000:
            print ("This team is new at Formula 1")
        elif self.since < 2000:
            print ("This team is old at Formula 1")
        
        print("============================================================")


    def result(self):
        print("\n")
        print("                     FORMULA 1 TEAM                         ")
        print("============================================================")
        print("Team Name        : {} ".format(self.name))
        print("Base             : {} ".format(self.hq))
        print("Chassis          : {} ".format(self.chassis))
        print("Principal        : {} ".format(self.principal))
        print("First Team Entry : {} ".format(self.since))

F1Team = Team()

F1Team.result()
F1Team.check_since()