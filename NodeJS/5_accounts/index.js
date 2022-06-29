// modulos internos
const inquirer = require('inquirer')
const chalk = require('chalk')


//modulos internos
const fs = require('fs')

operation()

function operation(){
    inquirer.prompt([{
        type:'list',
        name:'action',
        message: 'O que você deseja fazer?',
        choices: [
            'Criar Conta',
            'Consultar Saldo',
            'Depositar',
            'Sacar',
            'Sair'
        ]
    }]).then((answer) => {
        const action = answer['action']
        if (action == 'Criar Conta'){
            createAccount()
        }else if(action == 'Consultar saldo'){

        }else if(action == 'Depositar'){
            Depositar()
        }else if(action == 'Sacar'){

        }else if(action == 'Sacar'){

        }else if(action == 'Sair'){
            console.log(chalk.bgBlue.white(' Obrigado! '))
            process.exit()
        }
            

    }).catch((err) => console.log(err))
}

//create 

function createAccount() {
    console.log(chalk.bgWhite.black('  Parabéns  '))
    console.log(chalk.white('  Defina as opções da sua conta a seguir  '))

    buildAccount()
}

//Functions
function buildAccount(){
    inquirer.prompt([{
        name:'accountName',
        message: 'Digite um nome para a sua conta: ',
    },]).then(answer => {
        const accountName = answer['accountName']
        if(!fs.existsSync('accounts')){
            fs.mkdirSync('accounts')
        }

        if(fs.existsSync(`accounts/${accountName}.json`)){
            console.log(chalk.bgRed.white('Esta cona já existe, escolha outro nome'))
            buildAccount()
            return
        }
        
        fs.writeFileSync(`accounts/${accountName}.json`, `{"balance":0}`,function (err){
            console.log(err)
        }
        )
        console.log(chalk.green('Parabéns, a sua conta foi criada com sucesso!'))
        operation()
    }).catch(err => console.log(err))
}

function Depositar() {
    inquirer.prompt([
        {
            name: 'accountName',
            message: 'Qual o nome da conta? '
        }
    ]).then((answer) => {
        const accountName = answer['accountName']

        if(!checkAccount(accountName)){
            return Depositar()
        }

        inquirer.prompt([
            {
                name:'amount',
                message: 'Quanto você deseja depositar',
            },
        ]).then((answer) =>{
            const amount = answer['amount']
            addAmount(accountName, amount)
            operation()
        }).catch((err) => console.log(err))


    }).catch(err => console.log(err))
}

function checkAccount(accountName) {
    if (!fs.existsSync(`accounts/${accountName}.json`)) {
        console.log(chalk.bgRed.white(' Esta conta não existe '))
        return false
    }
    return true
}

function addAmount(accountName, amount){
    const account =  getAccount(accountName)
    console.log(account)
    if (!amount) {
        console.log('Ocorreu um erro, tente novamente mais tarde!')
        return Depositar()
    }

    accountData.balance = parseFloat(amount) + parseFloat(accountData.balance)
    fs.watchFileSync(
        `accounts/${accountName}.json`,
        JSON.stringify(accountData),
        function (err) {
            console.log(err)
        },
    )
    console.log(`FOi despositado ${amount}`)
    operation()
}

function getAccount(accountName) {
    const accountJSON = fs.readFileSync(`accounts/${accountName}.json`,{
        encoding:'utf8',
        flag:'r'
    })
    return JSON.parse(accountJSON)
}