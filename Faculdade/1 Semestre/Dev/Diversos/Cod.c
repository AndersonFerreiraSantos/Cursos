//Iniciamos definindo nossos pinos no algoritmo, nesse caso vamos denfinir o LED na porta 3.
#define PINLED 3

//E denfinir o LDR na porta A0.
#define PINLDR A0

void setup(){

//Definimos o LED como OUTPUT
    pingMode(PINLED, OUTPUT);

//Nesse caso precisamos seprar a noite do dia, como temos uma variação de luz até chegar a noite
//utilizamos o Serial.begin para monitorar essas variação.
    Serial.begin(9600);

}

void loop(){

//No loop vamos ler o LED e inseri-lo em uma variavel, nesse caso utilizamos a variavel "valor".
    int valor = analogRead(PINLDR);
    
//Em seguida aplicamos uma condição, quando 'valor' for menor que 500 ele deve ligar o LED.
//Lembrando que os valores são correspondetes e quantidade de luz captada pelo sensor.    
    if(valor < 500) {
        digitakWrite(PINLED, HITGH);

//Caso contrario ele ficara desligado
    }else
    digitakWrite(PINLED, LOW);
}

