extends Area2D

signal PlayerEntered



func _physics_process(delta: float) -> void:
	var bodies = get_overlapping_bodies()
	
	for body in bodies:
		if body.name == "Player":
			Global.em_missao = true
			Global.mensagem = 8
			Global.Crimpador += 1
			queue_free()
