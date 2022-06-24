const chalk = require('chalk')

const nota = 3
if( nota >= 7){
    console.log(chalk.green('parabéns! você está aprovado'))
}else{
    console.log(chalk.bgRed.black('É... você reprovou'))
}
