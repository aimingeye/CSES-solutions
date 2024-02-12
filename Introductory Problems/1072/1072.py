def calc(n):
    for i in range(1, n+1):
        squares = i*i
        tot_ways = squares*(squares - 1)/2
        attacking_ways = 4 * (i-1) *(i-2)
        print(int(tot_ways - attacking_ways))
def main():
    n = int(input())
    calc(n)
main()