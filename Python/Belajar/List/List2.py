hobi = []
stop = False
i = 0

while(not stop):
    hobi_baru = input("Inputkan hobi yang ke- {}: ".format(i))
    hobi.append(hobi_baru)

    i += 1

    tanya = input('Ada tambahan hobi ? (Ya/Tidak): ')
    if (tanya == "Tidak"):
        stop = True

print ("=" * 50)
print("Kamu memiliki {} hobi".format(len(hobi)))
for hob in hobi:
    print ("- {}".format(hob))