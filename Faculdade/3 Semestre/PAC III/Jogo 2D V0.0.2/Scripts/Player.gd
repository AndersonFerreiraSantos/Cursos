extends KinematicBody2D

var UP = Vector2.UP
#Gravidade do player:
var velocity = Vector2.ZERO

#Velocidade do player
var move_speed = 1600

#gravidade...
var gravity = 1200

#Valor do pulo é negativo pois o sistema da godot trabalha com sistema do eixo Y invertido.
var jump_force = -1000

#Verifica se está no chao
var is_grounded




#itens:
var bancada = "false"
var cabo_de_rede = 0
var RJ45 = 0
var crimpador = 0
var missao_1_itens = 0


#Não sei
onready var raycasts = $raycasts

#função para movimentação do player
func _physics_process(delta: float) -> void:
	
	#GAtributos Players - NÃO ALTERAR
	
	velocity.y += gravity * delta
	_get_input()
	velocity = move_and_slide(velocity, UP)
	is_grounded = _check_is_grounded()
	_set_animation()
	
#--------------------------------------------------------------------------------------------------------
	#Missão 1 - Finalizar
		#Fazer patch_cord
	patch_cord()
#--------------------------------------------------------------------------------------------------------
	_porta_1()
	
func _get_input():
	velocity.x = 0
	
	#Movimentação do personagem OBS: "move_right" e "move_left" configurei no painel de conf (configuração Projeto: pesquisar por mapa de entrada)
	var move_direction = int(Input.is_action_pressed("move_right")) - int(Input.is_action_pressed("move_left"))
	velocity.x = lerp(velocity.x, move_speed * move_direction, 0.2)
	
	#Verificar se foi para esquerda ou direita
	if move_direction !=0:
		$texture.scale.x = move_direction

func _input(event: InputEvent) -> void:
	if event.is_action_pressed("jump") && is_grounded:
		velocity.y = jump_force / 2
		
func _check_is_grounded():
	for raycast in raycasts.get_children():
		if raycast.is_colliding():
			return true
	return false
	
func _set_animation():
	var anim = "idle"
	
	if !is_grounded:
		anim = "jump"
	elif velocity.x != 0:
		anim = "run"
	if $anim.assigned_animation != anim:
		$anim.play(anim)




#camera parar de seguir jogardor CASA-----------------------
#func _on_Trigger_PlayerEntered() -> void:
#	$Camera.current = false
func patch_cord():
	if Global.Crimpador == 1 && Global.RJ45_Macho == 1 && Global.Cabo_de_Rede == 1:
		Global.Patch_Cord = 1
		Global.Crimpador -= 1
		Global.RJ45_Macho -= 1
		Global.Cabo_de_Rede -= 1
		
		print("Parabéns, você fez um patch cord. +", Global.Patch_Cord," patch cord")
		print("Crimpador:", Global.Crimpador, ", RJ45 macho:", Global.RJ45_Macho,", Cabo de Rede:", Global.Cabo_de_Rede)
#Funções para abrir portas-----------------------------------------------------------------PORTAS
func _porta_1():
	if Global.Patch_Cord == 1:
		Global.porta_1 = "aberta"

func _on_cabo_de_rede_PlayerEntered():
	missao_1_itens += 1
	cabo_de_rede += 1
	print("Pegou Cabo de rede, TOTAL:", cabo_de_rede)
	print("itens: ",missao_1_itens)

func _on_crimpador_PlayerEntered():
	missao_1_itens += 1
	crimpador += 1
	print("Pegou crimpador, TOTAL:", crimpador)
	print("itens: ",missao_1_itens)

func _on_RJ45_PlayerEntered():
	missao_1_itens += 1
	RJ45 += 1
	print("Pegou RJ45, TOTAL:", RJ45)
	print("itens: ",missao_1_itens)



func _on_crimpador2_PlayerEntered():
	missao_1_itens += 1
	crimpador += 1
	print("Pegou crimpador, TOTAL:", crimpador)
	print("itens: ",missao_1_itens)

func _on_Portal_Para_M2_PlayerEntered():
	print("entrou")

	
