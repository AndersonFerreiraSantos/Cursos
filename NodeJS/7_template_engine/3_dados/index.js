const express = require('express')
const exphbs = require('express-handlebars')
const res = require('express/lib/response')

const app = express()

app.engine('handlebars', exphbs.engine())
app.set('view engine', 'handlebars')

app.get('/', (req, res) =>{

    const user = {
        name: "Anderson",
        surname: "Ferreira",
    }

    res.render('home', { user: user })
} )


app.listen(3000, () =>{
    console.log('Servidor rodando')
})