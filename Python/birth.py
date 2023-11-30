def find_zodiac(year):
    zodiacs = {
        0: "원숭이띠",
        1: "닭띠",
        2: "개띠",
        3: "돼지띠",
        4: "쥐띠",
        5: "소띠",
        6: "호랑이띠",
        7: "토끼띠",
        8: "용띠",
        9: "뱀띠",
        10: "말띠",
        11: "양띠"
    }
    return zodiacs[year % 12]

def main():
    try:
        birth_year = int(input("태어난 연도를 입력하세요 (예: 1990): "))
        zodiac = find_zodiac(birth_year)
        print(f"{zodiac}입니다.")
    except ValueError:
        print("올바른 연도를 입력하세요.")

if __name__ == "__main__":
    main()
