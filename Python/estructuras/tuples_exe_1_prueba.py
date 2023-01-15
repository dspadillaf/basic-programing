'''Write a program to read through the mbox-short.txt and figure out the distribution by hour of the day for each of the messages. You can pull the hour out from the 'From ' line by finding the time and then splitting the string a second time using a colon.

From stephen.marquard@uct.ac.za Sat Jan  5 09:14:16 2008

Once you have accumulated the counts for each hour, print out the counts, sorted by hour as shown below.'''

name = "mbox-short.txt"
handle = open(name)
counts=dict()

for line in handle:
    if line.startswith('From '):
        words=line.split()
        for word in words:
            if ':' in word:
                x=word[:2]
                counts[x]=counts.get(x,0)+1
final=dict()
final = sorted([(v,k) for v,k in counts.items()])

for item in final:
	(x,y)=item
    print(x,y)
