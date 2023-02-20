def main ():
    res = ""
    s = input("Greeting :")

    #print("the s is"+s.lower())
    t = s.lower().replace(" ", "")
    if t[0:5]=="hello":
        res ="$0"
    elif ((t[0] == "h") and (t[0:5]!= "hello")):
        res = "$20"
    else:
        res = "$100"
    print(res)
    return res


if __name__ == "__main__":
    main()
