import re
filetxt = open('regex_sum_1343440.txt')
numlist = list()
for line in filetxt:
    line = line.rstrip()
    stuff = re.findall('[0-9]+',line)
    if len(stuff) != 0:
        numbers = [eval(i) for i in stuff]
        numlist = numlist + numbers
print(sum(numlist))
