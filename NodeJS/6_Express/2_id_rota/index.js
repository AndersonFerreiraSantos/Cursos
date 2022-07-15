const express = require('express')

//inicializando
const app = express()
const port =  3000

const path = require('path')
const basePath = path.join(__dirname, 'templates')


app.get('/users/:id', (req, res) =>{
    const id = req.params.id

    //leitura banco
    console.log(`buscando user ${id} no banco de dados`)

    res.sendFile(`${basePath}/users.html`)
    //res.send('Legal!!')
})
//utilizando a res para dar uma resposta a rota
app.get('/', (req, res) =>{
    res.sendFile(`${basePath}/index.html`)
    //res.send('Legal!!')
})

app.listen(port, () => {
    console.log(`App rodando na porta ${port}`)
})