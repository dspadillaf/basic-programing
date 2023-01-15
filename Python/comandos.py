#-----------EMPIEZA CON--------------
text='From: xxx@xxx.com'
text.startswith('From: ') #está consultado si inicia o no con From: en caso de si arroja un True, en caso de no arroja un False

#-----------SEPARAR TEXTO----------

#separa la linea de texto en palabras con la funcion split
lineatexto=('Ingrese linea de texto')
lineatexto.split() 

#------------MAYUSCULA MINUSCULA-----------

#funcion para convertir a mayuscula
entrada1=input("Ingresar texto: ")
mayuscula= entrada1.upper()

#funcion para convertir a minuscula
entrada2=input("Ingresar texto: ")
minuscula= entrada2.lower()

#Solo primera letra en Mayuscula
entrada3=input("Ingresar texto: ")
primera_mayus= entrada3.capitalize()

#Invertir Mayuscula-Minuscula
entrada4=input("Ingresar texto: ")
entrada_swap= entrada2.swapcase()

#Comprobar si un texto extá en minuscula o mayuscula
mayuscula.isupper()
minuscula.islower()

#------------ESPACIOS EN BLANCO--------------
#Elimina todos los espacios iniciales y finales de la cadena
hola = ' \t\t\n\tHola \n '
print(hola)

hola_limpio = hola.strip()
print(hola_limpio)

#Eliminar conjunto de caracteres al final o al inicio usando strip
texto = ' hola mundo hola \ni'
print(texto.strip(' oahl'))

print(texto.strip(' \nioahl'))

#Eliminar espacios a la derecho o la izquierda
hola = ' hola '
#derecha
print(hola.rstrip())
#izquierda
print(hola.lstrip())

#---------------LISTAS-------------------
#definir una lista
t=[1,2,3,4] #lista de 4 elementos

#determinar el rango de una lista
t=[1,2,3,4]
print(t.range(3)) #imprime los elementos dentro del rango

#sumar lista
a=[1,2,3]
b=[4,5,6]
c=a+b
print(c) #esto va imprimir la lista [1,2,3,4,5,6]

#intervalo en listas usando : [x:y] [:y] [x:] [:]
t=[9,41,12,3,74]
t[1:3]#esto imprime [41,12]

#lista vacia y agregar elementos
t=list() #crea la lista vacia
t.append(29) #agrega el elemento 29 en la posicion 0
t.append('texto') #agrega el texto (elemento tipo texto) en la posicion 1
#todo se ingresa en orden

#ordenar listas con función sort()
t=[5,8,3,2,1]
t.sort() #organizará t [1,2,3,5,8], y si son palabras se ordenan alfabeticamente

#funciones que identifican: minimo, maximo, largo, suma
nums=[3,41,12,9,74,15]
print(len(nums))#len() imprime el largo, en este caso 6
print(max(nums))#se obtien el máximo en este caso 74
print(min(nums))#se obtiene el minimo en este caso 3
print(sum(nums))#se obtiene la suma de los elementos, en este caso 154
print(sum(nums)/len(nums))#se obtiene la operacion entre los elementos para sacar el promedio, en este caso 25.6

#convertir string en list
abc='Whit three words'
stuff=abc.split() #esto genera la lista stuff = ['Whit','three','words']

abc2='Whit;three;words'
stuff=abc.split(';') #le permite decir que use otro delimitador para generar la lista, ya no usa espacios sino ;

#loops
dna=input('Enter DNA sequence: ')
    #agcgctatatatangagantn
if 'n' in dna:
    nbases=dna.count('n')
    print("dna sequence has %d undefined bases " %nbases)
    #result: %d = 3

#---------DICCIONARIOS---------------
#definir un dicionario: tener en cuenta que a diferencia de una lista, estos no tiene un ordenen
#sino que cada elemento esta asociado a una key o index
purse=dict()
purse['money'] = 12
purse['candy'] = 3
purse['tissue'] = 72
print(purse)
    #{'money':12,'tissue':75,'candy':3}
print(purse['candy'])
    #3

#otra forma de definir un diccionario:
diccionario={'chuck':1,'fred':42,'jan':100}

#Contador con diccionarios
ccc=dict()#declaracion de diccionario
ccc['item1']=1#valor inicial item 1
ccc['item2']=1#valor inicial item 2
    #contador item 1
    ccc['item1']=ccc['item1']+1
    ccc['item1'] va ser igual a 2

#Consultar si existe un item dentro del diccionario
'item1' in ccc #respuesta va ser False o True

#For e if para generar diccionarios automaticos
counts=dict()
names=['item1','item2','item3','item4']
for name in names:
    if name not in counts:
        counts[name]=1
    else:
        counts[name]=counts[name]+1

#Obener el numero contenido segun el item
x=counts.get(name,0) #devuelve el value que esta asociado a la key name en este caso el valor default va ser 0

#Aplicar el get para hacer un contador con for
counts=dict()
names=['item1','item2','item3','item4']
for name in names:
    counts[name]=counts.get(name,0)+1

#convertir keys o values en listas
aa={'item1':1, 'item2':2, 'item3':4}
getKeys=list(aa)#en la variable getKeys se almacena de lista de keys
getKeys2=aa.keys()#en la variable getKeys2 se almance la lista de keys
getValues=aa.values()#en la variable getValues se almacena la lista de variables
getItems=aa.items()#en la variable getItems, se almance el key junto con su varible [(item1,1),(item2,2),(item3,4)] en una lista
    #aplicar los conceptos y almacenar ambos resultados en una variable o print
    for xxx,yyy in aa.items():
        print(xxx,yyy)

    #imprime
        #item1,1
        #item2,2
        #item3,4

#-----------TUPLES--------------
#Es un tipo de secuencia que funciona como las listas, tiene elementos que se indexan empezando desde 0
#CARACTERISTICA: SON INMUTABLES NO PUEDEN CAMBIARSE SUS ELEMENTOS

x=('item1','item2','item3') #se definen entre parentisis contrario a la listas que es con []
print(x[2])
    #item2
y=(1,2,9)
print(max(y))
    #9
for inter in y:
    print(inter)
    #1
    #2
    #9

#Se pueden definir varias variables al tiempo usando tuples
(x,y)=(4,'item1')
print(y)
    #item1

#Se pueden compar tuples usando operadores como < > ==, corre elemento correspondiente (x1,y1,z1) < (x2,y2,z2) se compara x1<x2, y1<y2... si alguno de esos es verdad
#se devuelve el bool true
(0,1,2)<(5,1,2)
    #True
>>> x=(5,1,3)
>>> y=(6,0,0)
>>> y>x
True
>>> y=(0,1000,2000)
>>> y>x
False
>>> y=(4,100,200)
>>> y>x
False
>>>

#LIST COMPREHENSION: create a dynamic list. In this case, we make a list of reverse tuples and then sort it
c={'a':10,'b':1,'c':22}
print(sorted([(v,k) for k,v in c.items()]))
    #[(1,'b'),(10,'a'),(22,'c')]