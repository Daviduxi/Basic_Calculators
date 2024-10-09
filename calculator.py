# Función principal
def calculadora():
    
    # Pedir al usuario que ingrese el cálculo
    operador = input("Introduce la operacion deseada (+, -, *, /): ")

    # Pedir los dos números
    num1 = float(input("Ingrese el primer número: "))
    num2 = float(input("Ingrese el segundo número: "))

    # Operar según el operador ingresado
    if operador == '+':
        resultado = num1 + num2
        print(f"{num1} + {num2} = {resultado}")
    
    elif operador == '-':
        resultado = num1 - num2
        print(f"{num1} - {num2} = {resultado}")
    
    elif operador == '*':
        resultado = num1 * num2
        print(f"{num1} * {num2} = {resultado}")
   
    elif operador == '/':
        if num2 != 0:
            resultado = num1 / num2
            print(f"{num1} / {num2} = {resultado}")
        else:
            print("Error: División por cero no permitida.")
    
    else:
        print("Operador no válido.")

# Llamar a la función principal

calculadora()
