buku = ['Fishing Tutorial', 'Golf club', 'Cardboad Box', 'American Psycho', 'DMC Novel']

buku[2] = 'Perahu Besi'
buku.append('MGS V Novel')
buku.insert(1,'How To Make A Car')

print ("Buku terbaik bulan ini adalah: {}".format(buku[0]))

print("Buku terbaik lainnya ada {}".format(len(buku)))

for book in buku:
    print (book)

