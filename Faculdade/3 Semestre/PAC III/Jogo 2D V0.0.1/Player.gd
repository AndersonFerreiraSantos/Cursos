extends KinematicBody2D

const UP  = Vector2(0, -1)
var motion = Vector2()
const GRAVITY = 20
const SPEED = 200
const JUMP_HEIGHT = -550

func _physics_process(delta):
	motion.y += GRAVITY
	
	if Input.is_action_pressed("ui_right"):
		motion.x = SPEED
		$Sprite.play("Run")
		$Sprite.flip_h = false
	elif Input.is_action_pressed("ui_left"):
		motion.x = -SPEED
		$Sprite.flip_h = true
		$Sprite.play("Run")
	else:
		motion.x = 0
		$Sprite.play("Idle")
	if is_on_floor():
		#print("esta no chao")
		if Input.is_action_pressed("ui_up"):
			motion.y = JUMP_HEIGHT
	else:
		$Sprite.play("Jump")
			

	motion = move_and_slide(motion, UP)


func _on_Passagem_mapa1_body_entered(body):
	pass # Replace with function body.


func _on_Area2D_body_entered(body):
	pass # Replace with function body.
