def rata(*data):
    banyak = len(data)
    jml = sum(data)
    nilai_rata2 = float(jml)/float(banyak)
    return nilai_rata2

print (rata(2,1,2,3,4,6,7,8,9,2))