extends KinematicBody2D

export var speed = 64
var velocity = Vector2.ZERO
var gravity = 1200
var jump_force = -1
var move_speed = 1600

var status = false

func _physics_process(delta: float) -> void:
	
	if $Terreno1.is_colliding() or $Terreno1.is_colliding():
		velocity.x = 0
		
		#move_speed = 0
	velocity = move_and_slide(velocity)
	velocity.y += gravity * delta
	print(status)#--------------------------------------------------------------------------Print
	
	var move_direction = -100
	if Input.is_action_pressed("Jogar") and status == true:
		move_speed = 1600
		print('jogou')#--------------------------------------------------------------------------Print
		velocity.y = jump_force
		velocity.y = -move_speed/3
		if Input.is_action_pressed("move_left"):
			velocity.x = -move_speed/5
		if Input.is_action_pressed("move_right"):
			velocity.x = move_speed/5
				
	

func _on_jump_body_entered(body):
	status = true
	


func _on_jump_body_exited(body):
	status = false
