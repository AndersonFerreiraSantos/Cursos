const express = require('express')
const exphbs = require('express-handlebars')
const mysql = require('mysql')

//executar o express
const app = express()

//Pegaro body em json
app.use(
    express.urlencoded({
        extend:true,
    }),
)
app.use(express.json())

app.engine('handlebars', exphbs.engine())

app.set('view engine', 'handlebars')

//css, img... counteúdo estatico
app.use(express.static('public'))

app.get('/', (req, res) => {
    res.render('home')
})

app.post('/books/insertbook', (req, res) => {

    const title = req.body.title
    const pagesqty = req.body.pagesqty

    const sql = `INSERT INTO books (title, pagesqty) VALUES ('${title}', '${pagesqty}')`

    conn.query(sql, function(err){
        if(err) {
            console.log(err)
        }

        res.redirect('/')
    })

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