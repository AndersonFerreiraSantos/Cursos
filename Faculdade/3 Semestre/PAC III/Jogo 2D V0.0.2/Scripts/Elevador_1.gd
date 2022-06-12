extends KinematicBody2D

export var speed = 500
var velocity = Vector2.ZERO
var move_direction_cima = 1
var move_direction_baixo = -1

func _physics_process(delta: float) -> void:
	if Global.Elevador_1 == 1 and Input.is_action_pressed("baixo"):
		velocity.y = speed * move_direction_cima
		velocity = move_and_slide(velocity)
	elif Global.Elevador_1 == 1 and Input.is_action_pressed("cima"):
		Global.gravidade_player = 1
	#	body.move_and_slide(Vector2(30, 0) * move_speed * delta)
		velocity.y = 500 * move_direction_baixo
		velocity = move_and_slide(velocity)




func _on_Alavanca_body_exited(body):
	Global.Elevador_1 = 0
