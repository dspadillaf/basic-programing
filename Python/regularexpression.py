#---REGULAR-EXPRESSION---REGEX
#concise and fexible means of matching string of text
#written in a formal language that can be interpreted by a regular expression processor

'''

[] 	A set of characters 	"[a-m]"
\ 	Signals a special sequence (can also be used to escape special characters) 	"\d"
. 	Any character (except newline character) 	"he..o"
^ 	Starts with 	"^hello"
$ 	Ends with 	"planet$"
* 	Zero or more occurrences 	"he.*o"
*?  Repeats a character zero or more times (non-greedy)
+ 	One or more occurrences 	"he.+o"
+?  One or more ocurrence but not greedy
? 	Zero or one occurrences 	"he.?o"
{} 	Exactly the specified number of occurrences 	"he.{2}o"
| 	Either or 	"falls|stays"
() 	Capture and group
\s  matches whitespace
\S  matches any non-whitespace character
[abc]   matches single character of set
[a-z0-9]    the set of character can include a range
[^XYZ] matches a single character not in the listed respuesta
(   Indicates where string extraction is to start
)   Indicates where string extraction is to end
'''

#Para usar regular expression en python se debe importar la libreria re
import re

#se puede usar el comando re.search() para verificar si un string tiene alguna característica de regular expression
re.search()

#eje
import re
hand=open('mbox-short.txt')
for line in hand:
    line=line.rstrip()
    if re.search('^From: ', line):
        print(line)

#Ejemplo de un expresion regular
#  ^X-\S+ #Match the start with X, followed by dash, followed by any non-whitespace character, plus: one or more times
#  ^X.* #match the start with X(^X) and followed by any character(.) many times(*);

## Matching and extracting
#Ejemplo de busqueda más ampliada
import re
x = 'My 2 favorite numbers are 19 and 42'
y = re.findall('[0-9]+',x) #[0-9] es solo un digito, al ponerle el + buscará uno o más digitos con dicha condición
print(y)
#['2','19','42']

#Ejemplo para tener cuidado
import re
x = "From: Using the: Character"
y = re.findall('^F.+:',x) #buscar en x la expresion que inicie con F, seguido por cualquier caracter una o mas veces y termine con :
#  .+ -->  Uno o más caracteres
print(y)
#['From: Using the:'] #en este caso podría haber dado From: porque cumple con la condicion pero adiciona lo demas porque toma el conjunto más largo posible

#La solución sería usar la expresion no-greedy (no ambicioso para tomar el menor de todos)
y = re.findall('F.+?:',x) #el ? condiciona la busqueda al mas corto
# .+? --> uno o más caractertes pero not greedy
print(y)
#['From:']

###Extración de expresiones###

x = "From stephen.marquard@uct.ac.za Sat Jan 5 9:14:16 2008"
y = re.findall('^From: (\S+@\S+)',x) #al lest one no-whitespace character with @ in the midle (\S caracter no en blanco y + para que sea almenos uno caracter no en blanco)
#Los parentesis se usan para extraer exactamente lo que se quiere
#Sin los parentisis se extraeria desde From: con toda la información
print(y)
#['stephen.marquard@uct.ac.za']

#Extraer por posiciones de simbolos
data = 'From stephen.marquard@uct.ac.za Sat Jan 5 9:14:16 2008'
atpos = data.find('@', data)
print(atpos)
#21
sppos = data.find(' ', atpos)
print(sppos)
#31
host = data[atpos+1 : sppos]
print(host)
#uct.ac.za

#More elegant form to extracting
words = line.split()
email = words[1]
#stephen.marquard@uct.ac.za
pieces = email.split(@)
#['stephen.marquard','uct.ac.za']
print(pieces[1])
#utc.ac.za

##Regex form
import re
lin = 'From stephen.marquard@uct.ac.za Sat Jan 5 09:14:16 2008'
y = re.findall('@([^ ]*)', lin)
# @ --> Find the @ in text
# [^ ] --> match not blank characters
# * --> match many not blank characters
print(y)

##From text Spam confidence
import re
hand = open('mbox-short.txt')
numlist = list()
for line in hand:
    line = line.rstrip()
    stuff = re.findall('^X-DSPAM-Confidence: ([0-9.]+)',line)
    if len(stuff) !=1 : continue
    num = float(stuff[0])
    numlist.append(num)
print('Maximum:', max(numlist))

##Si se quiere buscar un caracter que esta asignado como regular expresion se usa el backslash \
import re
x = 'We just received $10.00 for cookies'
y = re.findall('\$[0-9.]+',x)
# \$ --> buscar lo que inicie con $
# [0-9.]+ buscar un float que tenga uno o mas caracteres
print(y)
#['10.00']
