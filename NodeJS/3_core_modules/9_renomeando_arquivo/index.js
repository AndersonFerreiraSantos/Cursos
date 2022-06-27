const fs = require('fs')



fs.rename('novoarquivo.txt', 'renomeado.txt', function (err) {
  if (err) {
    console.log(err)
    return
  }
  console.log('Arquivo renomeado!')
})
