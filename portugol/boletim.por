/**
Crie um programa que:

leia 3 notas
calcule a média
informe:
aprovado (8 ou mais)
exame (entre 5 e 7.9)
reprovado (menos de 5)
*/
programa{
    funcao inicio()
    {
        real nota1, nota2, nota3, media
       
        escreva("Digite a primeira nota: ")
        leia (nota1)
        se (nota1 < 0 ou nota1 > 10){
            escreva("Nota inválida, seu desprovido de senso. Digite uma nota entre 0 e 10.")
            retorne
        }
        escreva("Digite a segunda nota: ")
        leia (nota2)
        se (nota2 < 0 ou nota2 > 10){
            escreva("Nota inválida, seu desprovido de senso. Digite uma nota entre 0 e 10.")
            retorne
        }

        escreva("Digite a terceira nota: ")
        leia (nota3)
        se (nota3 < 0 ou nota3 > 10){
            escreva("Nota inválida, seu desprovido de senso. Digite uma nota entre 0 e 10.")
            retorne
        }

        media = (nota1 + nota2 + nota3) / 3
        escreva("A média é: ", media)
        
        se (media >= 8){
            escreva("\n")
            escreva("Aprovado")
        }
        senao se (media >= 5 e media < 8)
        {
            escreva("\n")
            escreva("Você está em exame.")
            
        }
        senao
        {
            escreva("\n")
            escreva("Você está reprovado.")
            
        }
    }
}