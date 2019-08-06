from sys import stdin

def resolve(a, b):
    print(a + b)

def main():
    line = stdin.readline()
    ints = list(map(int, line.split()))
    a = ints[0]
    b = ints[1]
    resolve(a, b)

main()