extends Node

#Inimigos
var inimigo_1 = false
var inimigo_2 = false
var inimigo_3 = false
var inimigo_4 = false
var inimigo_5 = false
var inimigo_6 = false
var inimigo_7 = false
var inimigo_8 = false
var inimigo_9 = false

var posicao_camera = 10
#itens 
var Cafe = 0 
var Crimpador = 0
var Cabo_de_Rede = 0
var Patch_cord = 0
var notebook = 0
var RJ45_Macho = 0 #Se for pego abrira a porta_1

#Peças
var HD = 0
var SSD = 0
var NVMe_PCIe = 0
var Placa_mae = 0
var Processador = 0
var Fonte = 0
var Gabinete = 0
var Placa_de_video = 0


	#Memórias RAM
var RAM_2 = 0
var RAM_4 = 0
var RAM_8 = 0
var RAM_16 = 0

#Energia
	#Blocos Ativos
		#Bloco Ativo M2
var bloco_ativo_1 = false

#Computador

var Elevador = 1

var Elevador_2 = 1

var life_player = 5

var porta_1 = "fechada"
	
var Bloco_cabo3 = "Desligado"

var Luzes_M1 = false

var no_elevador = 5

var mensagem = 0

var porta_3 = false
#Missão
var em_missao = false
#RJ45
var missao_1 = 0

#Armadilhas____________________
var no_cabo_eletrico = false
func _process(delta: float) -> void:
	pass

	#____________M1____________

	
	#____________M2____________
func _ing_1():
	if inimigo_1 == true:
		RAM_2 += 1
		inimigo_1 = false
func _ing_2():
	if inimigo_2 == true:
		RAM_4 += 1
		inimigo_2 = false
func _ing_3():
	if inimigo_3 == true:
		HD += 1
		inimigo_3 = false
func _ing_4():
	if inimigo_4 == true:
		Processador += 1
		inimigo_4 = false
func _ing_5():
	if inimigo_5 == true:
		Fonte += 1
		inimigo_5 = false
