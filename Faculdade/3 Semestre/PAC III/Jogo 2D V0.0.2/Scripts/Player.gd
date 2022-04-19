extends KinematicBody2D

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


#Itens:

var cabo_de_rede = 0
var RJ45 = 0
var crimpador = 0

var bancada = "false"






#Não sei
onready var raycasts = $raycasts


#função para movimentação do player
func _physics_process(delta: float) -> void:
	
	#Gravidade do jogo sendo aplicada no Player
	velocity.y += gravity * delta
	
	
	
	#_itens_necessario()
	
	_get_input()
		
	#PULO: caso aperte jump (configurado o space) deve pular OBS: dividido por 2 pq -720 foi muito... necessáio ajudar.
	#if Input.is_action_pressed("jump"):
	#	velocity.y = jump_force/2

	velocity = move_and_slide(velocity)
	
	is_grounded = _check_is_grounded()
	
	_set_animation()
	
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
func _on_Trigger_PlayerEntered() -> void:
	$Camera.current = false
	
#func _itens_necessario():
#	if crimpador >= 2:
#		print("pegou todos")



func _on_cabo_de_rede_PlayerEntered():
	cabo_de_rede += 1
	print("Pegou Cabo de rede, TOTAL:", cabo_de_rede)


func _on_crimpador_PlayerEntered():
	crimpador += 1
	print("Pegou crimpador, TOTAL:", crimpador)



func _on_RJ45_PlayerEntered():
	RJ45 += 1
	print("Pegou RJ45, TOTAL:", RJ45)



func _on_crimpador2_PlayerEntered():
	crimpador += 1
	print("Pegou crimpador, TOTAL:", crimpador)
	
func _bancada_enable():
	if bancada == 2:
		bancada = "true"

func _set_animation_bancada():
	var anim_bancada = "disable"
	
	if bancada == "true":
		anim_bancada = "enable"
	else:
		anim_bancada = "disable"
		
	if $anim_bancada.assigned_animation != anim_bancada:
		$anim_bancada.play(anim_bancada)
	
