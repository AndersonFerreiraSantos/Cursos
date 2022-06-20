//chama o arquivo "meu_modulo.js"
const meuModulo = require('./meu_modulo.js')

//Nesse caso coloquei a função no arquivo, passo essa função para variavel "soma"
const soma = meuModulo.soma

//chamo a soma (que tem a função) e passo as variaveis.
soma(2, 3)
soma(5, 10)
