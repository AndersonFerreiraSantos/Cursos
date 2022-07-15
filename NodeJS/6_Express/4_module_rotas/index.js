const express = require('express')

//inicializando
const app = express()
const port =  3000

const path = require('path')

//importante as rotas do arquivo user/index.js
const usersRouters = require('./users')

//Ler o body
app.use(
    express.urlencoded({
        extended: true,
    }),
)
//transforma todo o body em um objeto javascript que consegue ler  atraves de req.body
app.use(express.json())
const basePath = path.join(__dirname, 'templates')

app.use('/users',usersRouters )

//utilizando a res para dar uma resposta a rota
app.get('/', (req, res) =>{
    res.sendFile(`${basePath}/index.html`)
    //res.send('Legal!!')
})

app.listen(port, () => {
    console.log(`App rodando na porta ${port}`)
})





// const express = require('express')

// //inicializando
// const app = express()
// const port =  3000

// const path = require('path')

// //importante as rotas do arquivo user/index.js
// const usersRouters = require('./users')

// //Ler o body
// app.use(
//     express.urlencoded({
//         extended: true,
//     }),
// )
// //transforma todo o body em um objeto javascript que consegue ler  atraves de req.body
// app.use(express.json())
// const basePath = path.join(__dirname, 'templates')

// app.use('/users',usersRouters )

// //utilizando a res para dar uma resposta a rota
// app.get('/', (req, res) =>{
//     res.sendFile(`${basePath}/index.html`)
//     //res.send('Legal!!')
// })

// app.listen(port, () => {
//     console.log(`App rodando na porta ${port}`)
// })

