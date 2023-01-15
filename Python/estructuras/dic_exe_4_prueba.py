"""Write a program to read through the mbox-short.tx
t and figure out who has sent the greatest number of mail mes
sages. The program looks for 'From ' lines and takes the second word of
 those lines as the person who sent the mail. The program creates a Python dictio
 nary that maps the sender's mail address to a count of the number of times they appear in th
 e file. After the dictionary is produced, the program reads through the dictionary using a maximum lo
 op to find the most prolific committer."""

name = 'mbox-short.txt'
handle = open(name)

emails=dict()
for line in handle:
    if line.startswith('From: '):
        words=line.split()
        for word in words:
            if '@' in word:        
        		emails[word]=emails.get(word,0)+1

maxkey=None
maxvalue=None
for email in emails:
    if maxvalue is None:
        maxkey=email
        maxvalue=emails[email]
    elif maxvalue < emails[email]:
        maxkey=email
        maxvalue=emails[email]
                
print(maxkey,maxvalue)