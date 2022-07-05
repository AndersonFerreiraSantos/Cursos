extends KinematicBody2D

export var speed = 64
export var life = 2
export var drop = "RAM_2"
var velocity = Vector2.ZERO
var move_direction = -1
var gravity = 1200
var hitted = false
var morto = false
var entrou = false




func _physics_process(delta: float) -> void:
	if entrou == true and morto == true and Input.is_action_pressed("agarrar"):
		$Drop/RAM_2.visible = true
		$Morte/Collision.disabled = true
		$coleta.play()
		yield(get_tree().create_timer(0.3), "timeout")
		$coleta.play()
		yield(get_tree().create_timer(0.3), "timeout")
		$coleta.play()
		if drop == "RAM_2":
			Global.RAM_2 += 1
			print("Pegou memória RAM 2")
			$Drop/RAM_2/Label.text = "+ 2GB RAM"
			$Drop/RAM_2/anim.play("Drop")
			queue_free()
		elif drop == "RAM_4":
			Global.RAM_4 += 1
			print("Pegou memória RAM 4")
			$Drop/RAM_2/Label.text = "+ 4GB RAM"
		elif drop == "RAM_8":
			Global.RAM_8 += 1
			print("Pegou memória RAM 8")
			$Drop/RAM_2/Label.text = "+ 8GB RAM"
		elif drop == "HD":
			Global.HD += 1
			print("Pegou HD")
			$Drop/RAM_2/Label.text = "+ 1X HD"
		elif drop == "SSD":
			Global.SSD += 1
			print("Pegou SSD")
		elif drop == "NVMe_PCIe":
			Global.NVMe_PCIe += 1
			print("Pegou NVMe_PCIe")
		elif drop == "Placa_mae":
			Global.Placa_mae += 1
			print("Pegou Placa_mae")
		elif drop == "Processador":
			Global.Processador += 1
			print("Pegou Processador")
		elif drop == "Fonte":
			Global.Fonte += 1
			print("Pegou Fonte")
		elif drop == "Gabinete":
			Global.Gabinete += 1
			print("Pegou Gabinete")
		elif drop == "Placa_de_video":
			Global.Placa_de_video += 1
			print("Pegou Placa_de_video")
	velocity.x = speed * move_direction
	velocity = move_and_slide(velocity)
	velocity.y += gravity * delta
	
	if move_direction == 1:
		$texture.flip_h = true
	else:
		$texture.flip_h = false
	
	velocity = move_and_slide(velocity)
	_set_animation()

func parar():
	 move_direction = -1
	 gravity = 0
	 speed = 0
	
func _on_anim_animation_finished(anim_name):
	if  life < 1:
		yield(get_tree().create_timer(5), "timeout")
		$Drop/RAM_2/Label.visible = false
		#queue_free()
	if  anim_name == "idle":
		#print("Entrouuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu")
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
		parar()
		$CollisionShape2D.disabled = true	
		$hitbox/Collision.disabled = true
		morto = true
		gravity = 0
		
		#queue_free()
		#yield(get_tree().create_timer(6), "timeout")
	
func _on_Morte_body_entered(body):
	entrou = true
func _on_Morte_body_exited(body):
	entrou = false
