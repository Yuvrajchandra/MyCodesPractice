def minion_game(string):
    vowels = 'AEIOU'

    kevsc = 0
    stusc = 0
    for i in range(len(s)):
        if s[i] in vowels:
            kevsc += (len(s)-i)
        else:
            stusc += (len(s)-i)

    if kevsc > stusc:
        return print("Kevin", kevsc)
    elif kevsc < stusc:
        return print("Stuart", stusc)
    else:
        return print("Draw")


if __name__ == '__main__':
    s = input()
    minion_game(s)
