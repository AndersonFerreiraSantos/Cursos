extends Area2D

signal PlayerEntered



func _physics_process(delta: float) -> void:
	var bodies = get_overlapping_bodies()
	
	for body in bodies:
		if body.name == "Player":
			Global.Cabo_de_Rede += 1
			print("cabo de rede: ", Global.Cabo_de_Rede)
			queue_free()
