const express = require('express')
const exphbs = require('express-handlebars')
const mysql = require('mysql')

//executar o express
const app = express()

app.engine('handlebars', exphbs.engine())

app.set('view engine', 'handlebars')

//css, img... counteúdo estatico
app.use(express.static('public'))

app.get('/', (req, res) => {
    res.render('home')
})

//conexão SQL

const conn = mysql.createConnection({
    host:'localhost',
    user:'root',
    passwords:'',
    database:'cursoNodeJS'
})

conn.connect(function(err){
    if(err) {
        console.log(err)
    }

    console.log('Conectou ao MySQL')

    app.listen(3000)
})