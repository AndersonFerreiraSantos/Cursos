extends KinematicBody2D

export var speed = 500
var velocity = Vector2.ZERO
var move_direction_cima = 1
var move_direction_baixo = -1

func _physics_process(delta: float) -> void:
	_anim()
	if Global.Elevador == 0:
		velocity.y = speed * move_direction_cima
		velocity = move_and_slide(velocity)
		
	elif Global.Elevador == 1:
#		Global.gravidade_player = 0
		velocity.y = speed * move_direction_baixo
		velocity = move_and_slide(velocity)


func _on_Alavanca_body_exited(body):
	print('Saiu')
	Global.Elevador = 0
	
	
func _anim():
	var anim = "Cima"
	if Global.Elevador == 1:
		anim = "Cima"
	if Global.Elevador == 0:
		anim = "Baixo"
	if $anim.assigned_animation != anim:
		$anim.play(anim)

#onready var Elevador = $Elevador
#onready var Tween = $Tween
#var teste = Global.Elevador
#export var speed = 1.0
#export var horizontal = false
#export var distance = 400
#var follow = Vector2.ZERO
#const WAIT_DURATION = 0
#
#func _ready():
#	_start_tween(teste)
#
#func _start_tween(teste):
#	if (Global.Elevador == 1):
#
#		var move_direction = Vector2.DOWN * distance
#		var duration = move_direction.length() / float(speed * 10)
##		Tween.interpolate_property(
##			self, "follow", move_direction, duration, 
##			Tween.TRANS_LINEAR, Tween.EASE_IN_OUT, WAIT_DURATION
##			)
#		Tween.interpolate_property(
#			self, "follow", move_direction, Vector2.DOWN * distance, duration, 
#			Tween.TRANS_LINEAR
#			)
#		Tween.start()
#func _physics_process(delta: float) -> void:
#	Elevador.position = Elevador.position.linear_interpolate(follow, 0.05)


func _on_Colisor_de_Cima_body_entered(body):
	Global.no_elevador = 4
	yield(get_tree().create_timer(0.3), "timeout")
	Global.no_elevador = 3

func _on_Colisor_de_Baixo_body_entered(body):
	Global.no_elevador = 3

