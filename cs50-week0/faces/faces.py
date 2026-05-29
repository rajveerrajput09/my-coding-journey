# make a function convert
def convert(text):
     text = text.replace(":)", "🙂")
     text = text.replace(":(", "🙁")
     return text

def main():
    x=input("write here ;  ")
    y=(convert(x))
    print(y)

main()