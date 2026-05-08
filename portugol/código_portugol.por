programa
{
	funcao inicio()
	{
		inteiro mlista[5]
		real resultado
		inteiro maior, menor, soma, v1
		caracter continuar

		faca {
			// Laço de repetição para preencher os 5 valores
			para (inteiro i = 0; i < 5; i++)
			{
				v1 = lerValorValido(i + 1)
				mlista[i] = v1
			}
			
			soma = calcular(mlista)
			resultado = media(mlista)
			maior = maiorval(mlista)
			menor = menorval(mlista)

			escreva("\n--- LISTA DE VALORES ---\n")
			escreva("Os valores digitados são: ")
			para (inteiro i = 0; i < 5; i++) { escreva(mlista[i], " ") }
			
			escreva("\nMédia: ", resultado, " | Maior: ", maior, " | Menor: ", menor, " | Total: ", soma)

			escreva("\n\nDeseja realizar um novo envio de dados? (s/n): ")
			leia(continuar)
			limpa()
			
		} enquanto (continuar == 's' ou continuar == 'S')

		escreva("Programa finalizado.")
	}

	// Esta função agora usa o RETURN corretamente para um único valor
	funcao inteiro lerValorValido(inteiro ordem)
	{
		inteiro valor
		enquanto (verdadeiro)
		{
			escreva("Digite a quantidade produzida no setor ", ordem, ": ")
			leia(valor)

			se (valor >= 0)
			{
				escreva("Valor válido\n")
				retorne valor // Aqui o return funciona perfeitamente!
			}
			senao
			{
				escreva("Não é possível uma produção negativa! Tente novamente.\n")
			}
		}
	}

	funcao real media(inteiro lista[])
	{
		retorne calcular(lista) / 5.0
	}

	funcao inteiro maiorval(inteiro lista[])
	{
		inteiro maior = lista[0]
		para (inteiro i = 1; i < 5; i++)
		{
			se (lista[i] > maior) { maior = lista[i] }
		}
		retorne maior
	}

	funcao inteiro menorval(inteiro lista[])
	{
		inteiro menor = lista[0]
		para (inteiro i = 1; i < 5; i++)
		{
			se (lista[i] < menor) { menor = lista[i] }
		}
		retorne menor
	}

	funcao inteiro calcular(inteiro lista[])
	{
		inteiro total = 0
		para (inteiro i = 0; i < 5; i++) { total += lista[i] }
		retorne total
	}
}
