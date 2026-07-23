def analyze_sentence(text):
    words = text.split()
    charecters =len(text)
    vowels =0
    longest = ""

    for char in text:
        if char.lower() in "aeiou":
            vowels+=1
    for word in words:
        if len(word)>len(longest):
            longest =word
        
    report = {
        "words": len(words),
        "charecters": charecters,
        "vowels": vowels,
        "longest_word": longest
    }
    return report
    
def main():
    
    s =input("Write any sentence: ")
    result = analyze_sentence(s)
    print(result)
    
main()    
    