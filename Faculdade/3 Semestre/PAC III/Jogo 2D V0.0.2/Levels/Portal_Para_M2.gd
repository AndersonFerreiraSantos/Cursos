extends Area2D

signal PlayerEntered

export(String, FILE, "*.tscn") var cenas

func _on_PortaM1_body_entered(body):
	print("entrou")
	get_tree().change_scene(cenas)

func _on_PortaM1_mouse_entered():
	print('mouse')


func _physics_process(delta: float) -> void:
	var bodies = get_overlapping_bodies()
	
	for body in bodies:
		if body.name == "Player":
			emit_signal("PlayerEntered")
			emit_signal("Cabo_de_rede")
			queue_free()
