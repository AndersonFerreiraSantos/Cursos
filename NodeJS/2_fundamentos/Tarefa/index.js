const inquirer = require('inquirer')

inquirer.prompt([
    {
    name: 'nome',
    message: 'Qual seu nome??',
    },
    //catch serve para imprimir algum erro
    //se estiver tudo certo ele vai para o then
]).then((answers) => {
    console.log(chalk.bgYellow.black(answers))
}).catch((err) => console.log(err))
