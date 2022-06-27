//"readline" serve para utilizar os ipunt no console do nodejs, não é necessário qualquer pacote. "CreateInterface"...
const readline = require("readline").createInterface({

    //entrada
    input: process.stdin,

    //saída
    output: process.stdout,
})

readline.question('Qual sua linguagem preferida? ', (language) => {
    if (language == 'php' || language == 'PHP') {
        console.log('Ai sim em?')
    } else {
        console.log(`Sua linguagem preferida é : ${language}`)
    }
    readline.close()
})