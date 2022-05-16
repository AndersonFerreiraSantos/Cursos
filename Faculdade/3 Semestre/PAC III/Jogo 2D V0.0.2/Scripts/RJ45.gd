extends Area2D

signal PlayerEntered

func _physics_process(delta: float) -> void:
	var bodies = get_overlapping_bodies()
	
	for body in bodies:
		if body.name == "Player":
			Global.RJ45_Macho+= 1
			print("RJ45 macho: ", Global.RJ45_Macho)
			queue_free()
