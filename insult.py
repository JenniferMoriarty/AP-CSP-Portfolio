import random
AM_names = ["gus", "ewan", "enoch", "manuel", "desean", "jaime", "javier"]
PM_names = ["nox", "liam", "clockston", "michael", "melissa", "vesper"]
insults = ["is a goof nugget", "eats socks for breakfast", "is cooked", "likes their cheese drippy"]

def insultGen(section):
    print("insult generator!")
    print("here are three insults:")
    if section == "AM":
        for i in range(3):
            print(AM_names[random.randrange(0, 7)], insults[random.randrange(0, 4)])
    else:
        for i in range(3):
            print(PM_names[random.randrange(0, 6)], insults[random.randrange(0, 4)])
        
choice = input("pick AM or PM:")
insultGen(choice)
