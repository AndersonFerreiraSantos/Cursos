extends KinematicBody2D
var life = 5
var hurted = false
var knockback_dir = 1
var knockback_int = 3700

#Posição da camera padrão = 0
var posicao_camera = 6

var UP = Vector2.UP
#Gravidade do player:
var velocity = Vector2.ZERO

#Velocidade do player
var move_speed = 1600

var gravity = 1200

#gravidade...


#Valor do pulo é negativo pois o sistema da godot trabalha com sistema do eixo Y invertido.
var jump_force = -1000

#Verifica se está no chao
var is_grounded

var max_life = 5

var empurra = false

var direction := Vector2.ZERO

onready var iswall := $wallDetector as RayCast2D
onready var EmpurraD := $EmpurraD as RayCast2D

signal mudar_life(player_life)
func _ready() -> void:
	connect("mudar_life", get_parent().get_node("HUD/HBoxContainer/Holder2"), "on_change_life")
	emit_signal("change_life", max_life)




#itens:
var bancada = "false"
var cabo_de_rede = 0
var RJ45 = 0
var crimpador = 0
var missao_1_itens = 0

#Danos
var em_choque = false


#Não sei
onready var raycasts = $raycasts
#func remover_gravidade():
#	if Global.gravidade_player == 1:
#		gravity = -600
#	else:
#		gravity = 1200
#função para movimentação do player
func _physics_process(delta: float) -> void:

	#Danos_______________
	#Player_________________
	life()
	posicao_camera()

	if $EmpurraD.is_colliding() and Input.is_action_pressed("agarrar"):
		var object = $EmpurraD.get_collider()
		object.move_and_slide(Vector2(30, 30) * move_speed * delta)
		empurra = true
	elif $EmpurraE.is_colliding() and Input.is_action_pressed("agarrar"):
		var object = $EmpurraE.get_collider()
		object.move_and_slide(Vector2(-30, 30) * move_speed * delta)
		empurra = true
	else:
		empurra = false
#	_process_bloc()
	
	#GAtributos Players - NÃO ALTERAR
	if Global.no_elevador == 0:
		velocity.y += 60000 * delta
	else:
		velocity.y += gravity * delta
	_get_input(delta)
	velocity = move_and_slide(velocity, UP)
	is_grounded = _check_is_grounded()
	_set_animation()
	
#--------------------------------------------------------------------------------------------------------
	#Missão 1 - Finalizar
		#Fazer patch_cord
	patch_cord()
#--------------------------------------------------------------------------------------------------------
	_porta_1()


func _get_input(delta: float) -> void:
	if Global.no_elevador == 4:
			var speed = -40000
			var move_direction_baixo = 1
			velocity.y = 0 * delta
			velocity.y = speed 
			velocity.y = -speed * delta

	if Global.no_elevador == 3:
		velocity.x = 0
		#Movimentação do personagem OBS: "move_right" e "move_left" configurei no painel de conf (configuração Projeto: pesquisar por mapa de entrada)
		var move_direction = int(Input.is_action_pressed("move_right")) - int(Input.is_action_pressed("move_left"))
		velocity.x = lerp(velocity.x, move_speed * move_direction, 0.2)

		if move_direction >= 1 and iswall.is_colliding() and !is_on_floor():
			velocity.y = gravity * delta
			if Input.is_action_just_pressed("jump"):
				velocity.y = jump_force + 1000
				velocity.x = -move_speed * 2
				iswall.scale.x = move_direction * -1
		elif move_direction <= 1 and iswall.is_colliding() and !is_on_floor():
			if Input.is_action_just_pressed("jump"):
				velocity.y = -jump_force 
				velocity.x = move_speed * 2
				iswall.scale.x = move_direction * -1
			velocity.y = gravity * delta
		#Verificar se foi para esquerda ouS direita
		if move_direction != 0:
			$texture.scale.x = move_direction
			knockback_dir = move_direction
			iswall.scale.x = move_direction
			
			if velocity.x > 1:
				$EmpurraD.set_enabled(true)
			else:
				$EmpurraD.set_enabled(false)
				
			if velocity.x < -1:
				$EmpurraE.set_enabled(true)
			else:
				$EmpurraE.set_enabled(false)
	if Global.no_elevador == 1:
		var speed = 20000
		var move_direction_baixo = 1
		velocity.y = 0 * delta
		velocity.y = speed 
		velocity.y = -speed * delta

	if Global.no_elevador == 0:
		velocity.x = 0
		#Movimentação do personagem OBS: "move_right" e "move_left" configurei no painel de conf (configuração Projeto: pesquisar por mapa de entrada)
#		var move_direction = int(Input.is_action_pressed("move_right")) - int(Input.is_action_pressed("move_left"))
#		velocity.x = lerp(velocity.x, move_speed * move_direction, 0.2)
#
#		#Verificar se foi para esquerda ouS direita
#		if move_direction != 0:
#			$texture.scale.x = move_direction
#			knockback_dir = move_direction
#			iswall.scale.x = move_direction
#
#			if velocity.x > 1:
#				$EmpurraD.set_enabled(true)
#			else:
#				$EmpurraD.set_enabled(false)
#
#			if velocity.x < -1:
#				$EmpurraE.set_enabled(true)
#			else:
#				$EmpurraE.set_enabled(false)
		
#_------------------------------------------------------------------------------------------------------------------

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
	
	
	if iswall.is_colliding() and !is_on_floor():
		anim = "wallslide"
		
	if !is_grounded:
		anim = "jump"
	elif velocity.x != 0 or empurra:
		anim = "run"
	if velocity.y > 0 and !is_grounded:
		anim = "fall"
		
	if hurted:
		anim = "hit"
	if Global.no_elevador == 0 or Global.no_elevador == 1:
		anim = "idle"
		
	if em_choque == true:
		$Choque.visible = true
	else:
		$Choque.visible = false

	if $anim.assigned_animation != anim:
		$anim.play(anim)


#camera parar de seguir jogardor CASA-----------------------
#func _on_Trigger_PlayerEntered() -> void:
#	$Camera.current = false
func patch_cord():
	if Global.Crimpador == 1 && Global.RJ45_Macho == 1 && Global.Cabo_de_Rede == 1:
		Global.Patch_Cord = 1
		Global.RJ45_Macho -= 1
		Global.Cabo_de_Rede -= 1
		
		print("Parabéns, você fez um patch cord. +", Global.Patch_Cord," patch cord")
		print("Crimpador:", Global.Crimpador, ", RJ45 macho:", Global.RJ45_Macho,", Cabo de Rede:", Global.Cabo_de_Rede)
#Funções para abrir portas-----------------------------------------------------------------PORTAS

func _porta_1():
	if Global.RJ45_Macho == 1 && Global.Cabo_de_Rede == 1:
		Global.porta_1 = "aberta"
		
func _porta_2():
	if Global.Patch_Cord == 1:
		Global.porta_2 = "aberta"		

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

	

#Elevador:
func _on_Area2D_body_entered(body):
	Global.Elevador = 1
	print("Entrou")


func _on_Area2D_body_exited(body):
	Global.Elevador = 1
	print("saiu")
	pass # Replace with function body.

func knockback():
	velocity.x =  -knockback_dir * knockback_int
	velocity = move_and_slide(velocity)
	
func knockback2():
	velocity.x = knockback_dir * knockback_int
	velocity = move_and_slide(velocity)
	
func _on_hurtbox_body_entered(body):
	print("inimigo colidiu")
	life -= 1
	hurted = true
	knockback()
	get_node("hurtbox/collision").set_deferred("disebled", true)
	yield(get_tree().create_timer(0.3), "timeout")
	get_node("hurtbox/collision").set_deferred("disebled", false)
	hurted = false
	morte()

func _on_Alavanca_body_entered(body):
	Global.Elevador_1 = 1
	print("Entrou no elevador 01")
	
func posicao_camera():
	if posicao_camera == 0:
		$Camera.limit_right = 3300
		$Camera.limit_bottom = 585
		$Camera.limit_left = -10
	if Global.Crimpador == 1:
		posicao_camera = 1
		$Camera.limit_right = 3300000
		$Camera.limit_bottom = 5850000
		#-------------------------------------------------------------
func morte():
	if life < 1:
		queue_free()
		get_tree().reload_current_scene()

func  life():
	Global.life_player = life
	
func _on_Cabos_eletricos_body_entered(body):
		em_choque = true
		life -= 1
		morte()
		
func _on_Cabos_eletricos_body_exited(body):
	em_choque = false
