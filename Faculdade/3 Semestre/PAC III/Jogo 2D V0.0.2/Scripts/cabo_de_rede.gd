extends Area2D

signal PlayerEntered



func _physics_process(delta: float) -> void:
	var bodies = get_overlapping_bodies()
	
	for body in bodies:
		if body.name == "Player":
			emit_signal("PlayerEntered")
			emit_signal("Cabo_de_rede")
			emit_signal("Cabo_de_rede")
			queue_free()
