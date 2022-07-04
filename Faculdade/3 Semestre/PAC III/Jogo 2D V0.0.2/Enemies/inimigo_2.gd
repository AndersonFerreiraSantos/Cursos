extends KinematicBody2D

export var speed = 64
export var life = 90
var velocity = Vector2.ZERO
var move_direction = -1
var gravity = 1200
var hitted = false



func _physics_process(delta: float) -> void:
	velocity.x = speed * move_direction
	velocity = move_and_slide(velocity)
	velocity.y += gravity * delta
	
	if move_direction == 1:
		$texture.flip_h = true
	else:
		$texture.flip_h = false
	
	velocity = move_and_slide(velocity)
	_set_animation()


func _on_anim_animation_finished(anim_name):
	if  anim_name == "idle":
		print("Entrouuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu")
		$texture.flip_h != $texture.flip_h
		$ray_wall.scale.x *= -1
		move_direction *= -1
		$anim.play("run")
		

func _set_animation():
	var anim = "run"
	
	if $ray_wall.is_colliding():
		anim = "idle"
	elif velocity.x != 0:
		anim = "run"
	if hitted == true:
		anim = "hit"
	if life < 1:
		anim = "Derrotado"
		
	if $anim.assigned_animation != anim:
		$anim.play(anim)
func _on_hitbox_body_entered(body):
	hitted = true
	life -= 1
	body.velocity.y -= 450
	yield(get_tree().create_timer(0.4), "timeout")
	hitted = false
	if life < 1:
		Global.HD += 1
		print("Recebeu um HD")
		queue_free()
		get_node("hitbox/Collision").set_deferred("disable", true)
	
