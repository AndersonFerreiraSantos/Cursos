const os = require('os')

//Processador
console.log(os.cpus())

//memória RAM livre
console.log(os.freemem())

//diretorio home (usuario)
console.log(os.homedir())

//Sistema
console.log(os.type())