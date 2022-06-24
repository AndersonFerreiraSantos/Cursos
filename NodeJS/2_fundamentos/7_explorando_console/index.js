const x = 10
const y = 'ok'
const z = [1,2]

console.log(x, y, z)

//contagem de impressões
console.count('valor de $x é ${x} CONTAGEM' )
console.count('valor de x é', x, 'CONTAGEM')
console.count('valor de x é', x, 'CONTAGEM')
console.count('valor de x é', x, 'CONTAGEM')


console.log("você está %s ?", y)

//func para limpar console, timer de 2sg
setTimeout(() => {
console.clear()
}, 2000
)
