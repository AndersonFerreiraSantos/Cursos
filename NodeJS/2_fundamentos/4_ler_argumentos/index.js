//process argv mostra o executavel do node, o arquivo que está sendo executado e argumento
console.log(process.argv)

//O argumento está no terceiro indicem como ele inicia no 0, oidemos resgatar o argumento "no pedaço 2('3')"
const args = process.argv.slice(2)

//passando o argumento para o log
console.log(args)

//Define nome com primeiro elemento, o split dividi a string quando achar o = e define o conteúdo da varivel com o segundo valor.
const nome = args[0].split("=")[1]

//assim quando busco a "nome" ele retorna com o que tiver após o =
console.log(nome)
//node .\index nome=Ferreira

//-------------------------
const idade = args[1].split("=")[1]

console.log(idade)

console.log('O nome é',nome, 'e ele tem ',idade,'anos!')

