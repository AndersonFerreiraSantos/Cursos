const express = require('express')

//inicializando
const app = express()
const port =  3000

const path = require('path')
const basePath = path.join(__dirname, 'templates')

const checkAuth = function(req, res, next) {
    //Verifica se o user está logado, no enttanto ja estamos definindo como true
    req.authStatus = true

    if(req.authStatus) {
        console.log('Está logado')
        next()
    }else{
        console.log('Não está logado')
        next()
    }
}
//ativar o middleware
app.use(checkAuth)
//utilizando a res para dar uma resposta a rota
app.get('/', (req, res) =>{
    res.sendFile(`${basePath}/index.html`)
    //res.send('Legal!!')
})

app.listen(port, () => {
    console.log(`App rodando na porta ${port}`)
})