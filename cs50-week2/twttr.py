name = input("Input: ")
new = ("".join([i for i in name if i not in "AEIOUaeiou"]))

print("Output "+new)