#f-strings in python used for string formatting

#normal by format
letter="hey,my name is {0} and i am from {1}"
country="india"
name="Rajveer"
print(letter.format(name,country))
behaviour="very good"

#easy meathod is this

print(f"hey,my name is {name} and i am from {country} and i am a {behaviour} boy")

#if we dont want to insert the value then
print(f"this is way to use the f string {{name}} and i am from {country}")
