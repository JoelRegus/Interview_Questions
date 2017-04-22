def reverseString(string):
    #https://docs.python.org/2/whatsnew/2.3.html#extended-slices
    return string[::-1];

def reverseWords(string):
    words = string.split(' ');

    for i in range(0, len(words) - 1):
        words[i] = reverseString(words[i])

    return " ".join(words)

def main():
    string = "The quick brown fox jumped over the lazy dog."
    print reverseWords(reverseString(string));

if __name__ == "__main__":
    main();
