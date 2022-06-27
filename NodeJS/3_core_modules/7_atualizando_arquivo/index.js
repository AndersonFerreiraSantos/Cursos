const fs = require('fs')
const http = require("http")
const url = require('url')

const port = 4000

const server = http.createServer((req, res) => {

  var urlInfo = require("url").parse(req.url, true)
  const name = urlInfo.query.name

  res.statusCode = 200;
  res.setHeader("Content-Type", "text/html")

  if (!name) {
    fs.readFile("index.html", function (err, data) {
      res.writeHead(200, { "Content-Type": "text/html" })
      res.write(data)
      return res.end()
    });
  } else {
    //Serve para quebrar linha quando salvar
    const nameNewLine = name + ',\r\n'

    fs.appendFile("nome.txt", nameNewLine, function (err, data) {
      res.writeHead(302, {
        Location: "/",
      })
      return res.end()
    })
  }
})

server.listen(port, () => {
    console.log(`Servidor rodando na porta: ${port}`)
})
