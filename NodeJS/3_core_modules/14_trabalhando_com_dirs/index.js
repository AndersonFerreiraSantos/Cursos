const fs = require('fs')

//Veririficando se não exsite a pasta nesse diretório
if(!fs.existsSync('./minhapasta')) {
    console.log("Não existe!")

    
    //criar pasta
    fs.mkdirSync('minhapasta')
}

//Verifica novamente se existe
if(fs.existsSync('./minhapasta')) {
    console.log('Exise!')
}
