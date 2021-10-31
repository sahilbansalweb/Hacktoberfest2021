"""LineSorting"""
#Sort the length of string (ascending)
def main():
    """LineSorting"""
    many = int(input())
    text = []
    for _ in range(many):
        text.append(input())
    text.sort(key=len)
    for i in text:
        print(i)
main()
