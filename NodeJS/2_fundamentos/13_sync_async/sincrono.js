const fs = require('fs')

console.log('Início')

fs.writeFileSync('sincrono.txt', 'oi')
console.log('fim')
