const inquirer = require('inquirer')

inquirer.prompt([
    {
    name: 'nota1',
    message: 'Qual a primeira nota?',
    },{
    name:'nota2',
    message: 'Qual a segunda nota?',
    },

    //catch serve para imprimir algum erro
    //se estiver tudo certo ele vai para o then
]).then((answers) => {
    console.log(answers)
    const media = (parseInt(answers.nota1) + parseInt(answers.nota2)) / 2
}).catch((err) => console.log(err))