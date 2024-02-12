def main():
    n = str(input())
    _ = len(n)
    mx = 1
    ctr = 1
    for i in range(1, _):
        if n[i-1] == n[i]:
            ctr+=1
        else: ctr = 1
        mx = max(mx, ctr)
    print(mx)
main()
