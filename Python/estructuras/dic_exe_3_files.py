#Se crea un archivo al que se le ingresa un archivo texto y lo recorre para las funciones de diccionarios
archivo=input('Ingrese el nombre del archivo')
archivoabierto=open(archivo)

#contador para contar parlabras por linea
counts=dict()
for line in archivoabierto:
    words=line.split()
    for word in words:
        counts[word]=counts.get(word,0)+1

#Hallar el key con mayor numero de palabras
bigcount=None
bigword=None
for word,count in counts.items():
    if bigcount is None or count>bigcount: 
        bigword=word
        bigcount=count
print(bigword,bigcount)
