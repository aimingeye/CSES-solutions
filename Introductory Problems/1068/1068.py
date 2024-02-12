def main():
    n = int(input())
    print(n, end = " ")
    while n != 1:
        operation = lambda x: 3 * x + 1 if x & 1 else x // 2
        n = operation(n)
        print(n, end=" ")
    print("\n")
main()
