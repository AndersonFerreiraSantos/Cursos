//"readline" serve para utilizar os ipunt no console do nodejs, não é necessário qualquer pacote. "CreateInterface"...
const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout,
})

readline.question('Escreva variavel: ', (teste) => {
    console.log(`teste é: ${teste}`)
    readline.close()
})