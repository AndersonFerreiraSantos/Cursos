const express = require('express')

//inicializando
const app = express()
const port =  3000

const path = require('path')

//Ler o body

app.use(
    express.urlencoded({
        extended: true,
    }),
)
//transforma todo o body em um objeto javascript que consegue ler  atraves de req.body
app.use(express.json())
const basePath = path.join(__dirname, 'templates')

app.get('/users/add', (req, res) => {
    res.sendFile(`${basePath}/userform.html`)
})
app.post('/users/save', (req,res) =>{
    console.log(req.body)
})
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

