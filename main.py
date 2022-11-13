def encoder(phrase: str) -> str:
    sch: int = 0
    alpha: str = "abcdefghijklmnopqrstuvwxyz"
    for i in range(len(phrase)):
        index: int = alpha.find(phrase[i])
        sch = index + i

        if i % 2 == 0:
            sch += 1
            print(alpha[sch], end='')
        else:
            sch -= i * 2
            print(alpha[sch - 1], end='')

def decoder(phrase: str) -> str:
    sch: int = 0
    alpha: str = "abcdefghijklmnopqrstuvwxyz"[::-1]
    for i in range(len(phrase)):
        index: int = alpha.find(phrase[i])
        sch = index + i

        if i % 2 == 0:
            sch += 1
            print(alpha[sch], end='')
        else:
            sch -= i * 2
            print(alpha[sch - 1], end='')

def choice(c: int):
    if c == 1:
        encoder(input("Phrase à encoder: "))
    elif c == 2:
        decoder(input("Phrase à decoder: "))
    else:
        pass

if __name__ == "__main__":
    choice(int(input("1 -> Encode\n2 -> Decode\n3 -> Quit\n")))
