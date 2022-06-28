const path = require('path')

//path absoluto 

//retorna o o local do arquivo, desde de a undade
console.log(path.resolve('teste.txt'))

//criar um caminha dinamico (é como virtualziar uma o caminha para um determinado arquivo)

//arquivos a serem utilizados
const midFolder = 'relatorio'
const fileName = 'anderson.txt'

//"virtualização" dos arquivos
const finalPath =  path.join('/', 'arquivos', midFolder, fileName)

console.log(finalPath)
// res: \arquivos\relatorio\anderson.txt

