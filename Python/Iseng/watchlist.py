from os import system

class movies():
    def __init__(self):
        self.title = ""
        self.year = ""
        self.director = ""

watchlist = []

def add():
    system("cls")
    watch=movies()

    print("  ADD MOVIES TO WATCHLIST")
    print("============================")
    watch.title = input("Movie Title : " )
    watch.director = input("Movie Director : ")
    watch.year = input("Release Date : ")

    watchlist.append(watch)

def show():
    system("cls")
    print("              MOVIE WATCHLIST")

    if len(watchlist) == 0:
        print("=============================================")
        print("\n")
        print("        NO MOVIES TO WATCH RIGHT NOW")
        print(" PLEASE SELECT ADD TO ADD SOME MOVIES TO WATCH")
        print("\n")
        print("=============================================")
    
    else:
        i = 0
        print("=============================================")
        for movie in watchlist:
            i += 1
            print("\n")
            print("[{no}] {title}".format(no=i,title=movie.title))
            print("    Director     : {}".format(movie.director))
            print("    Release Date : {}".format(movie.year))
            print("\n")
        print("=============================================")

def delete():
    system("cls")
    print(" DELETE MOVIE FROM WATCHLIST")
    print("=============================")
    title = movies()
    title = input("Title of the Movie : ")

    for watch in watchlist:
        if title == watch.title:
            watchlist.remove(watch)

            print("DELETE SUCCESSFULL")
        
        else:
            print("NOT FOUND")

def search():
    system("cls")
    print("  SEARCH MOVIE IN WATCHLIST")
    print("=============================")
    watch = movies()
    watch = input("Title of the Movie : ")

    for film in watchlist:
        if watch == film.title:
            print("\n")
            print("\n")
            print("            YOU'RE SEARCHING FOR ")
            print("=============================================")
            print("\n")
            print("{title}".format(title=film.title))
            print("Director     : {}".format(film.director))
            print("Release Date : {}".format(film.year))
            print("\n")
            print("=============================================")
    
        else:
            print("\n")
            print("=============================================")
            print("\n")
            print("                 NOT FOUND :/")
            print("\n")
            print("=============================================")

while True:
    print("\n")
    print("=================================")
    print("            WATCHLIST            ")
    print("=================================")
    print("\n")

    print("[1] ADD MOVIE TO WATCHLIST \n[2] SHOW WATCHLIST \n[3] SEARCH MOVIE IN WATCHLIST \n[4] DELETE MOVIE FROM WATCHLIST \n[5] EXIT")

    x = input("SELECT MENU >")

    if x == '1':
        add()
    elif x == '2':
        show()
    elif x == '3':
        search()
    elif x == '4':
        delete()
    elif x == '5':
        print("\n")
        print("\n")
        print("> YOU EXIT THE CODE")
        exit()
    else:
        print("WRONG NUMBER")