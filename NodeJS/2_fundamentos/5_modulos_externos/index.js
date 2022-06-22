const minimist = require("minimist")

const args = minimist(process.argv.slice(2))

console.log(args)

const nome = args['nome']

console.log(nome)
//node .\index.js --nome=Anderson

const profissao = args['profissao']

console.log(nome, profissao)
//node .\index.js --nome=Anderson --profissao=Programador

console.log('O nome dele é', nome, 'e a profissão dele é', profissao)
