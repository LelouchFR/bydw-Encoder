def encoder(phrase: str) -> str:
    sch: int = 0
    alpha: str = "abcdefghijklmnopqrstuvwxyz" * 100
    result: str = ""
    j: int = 0
    for i in range(len(phrase)):
        if phrase[i] != chr(32):
            index: int = alpha.find(phrase[i])
        sch = index + j

        if j % 2 == 0:
            if phrase[i] == chr(32):
                sch = 0
                j = 0
                result += " "
            else:
                sch += 1
                result += alpha[sch]
        else:
            if phrase[i] == chr(32):
                sch = 0
                j = 0
                result += " "
            else:
                sch -= j * 2
                result += alpha[sch - 1]
        j += 1
    print(result)

def decoder(phrase: str) -> str:
    sch: int = 0
    alpha: str = "abcdefghijklmnopqrstuvwxyz"[::-1] * 100
    result: str = ""
    j: int = 0
    for i in range(len(phrase)):
        if phrase[i] != chr(32):
            index: int = alpha.find(phrase[i])
        sch = index + j

        if j % 2 == 0:
            if phrase[i] == chr(32):
                sch = 0
                j = 0
                result += " "
            else:
                sch += 1
                result += alpha[sch]
        else:
            if phrase[i] == chr(32):
                sch = 0
                j = 0
                result += " "
            else:
                sch -= j * 2
                result += alpha[sch - 1]
        j += 1
    print(result)

def choice(c: int):
    if c == 1:
        encoder(input("Phrase à encoder: "))
    elif c == 2:
        decoder(input("Phrase à decoder: "))
    else:
        print("Quitting...")

if __name__ == "__main__":
    choice(int(input("1 -> Encode\n2 -> Decode\n3 -> Quit\n")))
