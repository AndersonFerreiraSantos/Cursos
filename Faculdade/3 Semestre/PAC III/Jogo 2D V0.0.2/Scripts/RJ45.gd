extends Area2D

signal PlayerEntered


func _physics_process(delta: float) -> void:
	if Global.Luzes_M1 == true:
		$Sprite.visible = true
		$CollisionShape2D.disabled = false
	var bodies = get_overlapping_bodies()
	
	for body in bodies:
		if body.name == "Player":
			Global.mensagem = 6
			Global.RJ45_Macho += 2
			print("RJ45 macho: ", Global.RJ45_Macho)
			queue_free()
