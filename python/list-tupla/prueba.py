#!/usr/bin/env python3

def main():
    # Tupla is immutable
    print("TUPLA")
    x = (1,2,3,4)
    for i in x:
        print(i)

    # List is mutable
    print("LISTA")
    y = [1,2,3,4]
    for i in y:
        print(i)

if __name__ == "__main__":
    main()


