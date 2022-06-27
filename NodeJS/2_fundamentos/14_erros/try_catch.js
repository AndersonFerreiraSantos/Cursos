const x = 10

try {
    //Nao se pode alterar o valor de uma constante
    x = 2
} catch(err) {
    console.log(`Erro: ${err}`)
}