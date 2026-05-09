import time

'''
faça um programa que simule um elevador, o programa deve mostrar o AndarAtual, o AndarDestino, se a porta está aberta ou fechada. 
O programa deve mostrar uma mensagem indicando se o elevador subiu ou desceu e quantos andares foram percorridos.
'''



andar_atual =      0
andar_destino =    0
porta_aberta = False 

# --------- SIMULAÇÃO DO SERVO MOTOR ----------
if porta_aberta == True:
    print("Servo motor: 90°")
else:
    print("Servo motor: 0°")
# ---------------------------------------------# ----------------------------------------------------------
while True: # Loop infinito para manter o programa em execução até que o usuário decida sair
    print("\n\n---Elevador---\n") # Exibe o título do programa
    time.sleep(1)

    print("andar atual :", andar_atual, "\n") # Exibe o andar atual do elevador
    time.sleep(1)

    print("Digite o andar destino (0, 1, 2) ou -1 para sair :") # Solicita ao usuário para digitar o andar destino ou -1 para sair
    time.sleep(1)

    andar_destino = int(input()) 

    if andar_destino == -1: 
        print("você saiu do elevador, Obrigado por usar o elevador!") 
        time.sleep(1)
        break

    elif andar_destino < 0 or andar_destino > 2: 
        print("andar inválido, por favor digite um andar entre 0 e 2.")
        time.sleep(1)
        continue

    else:
        for i in range(andar_destino != andar_atual): # Loop para simular o movimento do elevador até o andar destino, enquanto o andar destino for diferente do andar atual
            
            if andar_destino > andar_atual:
                print("O elevador subiu um andar.")
                time.sleep(1)
                andar_atual += andar_destino

            else:
                print("O elevador desceu um andar.")
                time.sleep(1)
                andar_atual -= andar_destino 

        print("O elevador chegou ao andar destino:", andar_destino)
        time.sleep(1)

        print("abrindo as portas no andar", andar_atual)
        time.sleep(1)

        # --------- SIMULAÇÃO DO SERVO ABRINDO ----------
        porta_aberta = True
        print("Porta aberta:", porta_aberta)

    # Servo indicando porta aberta
        if porta_aberta == True:
            print("Servo motor: 90°")
            time.sleep(3)
        else:
            print("Servo motor: 0°")
            time.sleep(3)
        # --------- SIMULAÇÃO DO SERVO FECHANDO ----------
        porta_aberta = False
        print("Porta aberta:", porta_aberta)

        # Servo indicando porta fechada
        if porta_aberta == True:
            print("Servo motor: 90°")
            time.sleep(3)
        else:
            print("Servo motor: 0°")
            time.sleep(3)