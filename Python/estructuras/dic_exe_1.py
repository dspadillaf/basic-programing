#Crear un archivo que lea una cadena de texto y cuente las palabras que hay
counts=dict() #definir diccionario
print('Enter a line of text: ')
line=input('')#almacenar la linea de texto dentro de la variable line

words=line.split() #separa la linea de texto en palabras con la funcion split

for word in words:
    counts[word]=counts.get(word,0)+1
print('Counts',counts)