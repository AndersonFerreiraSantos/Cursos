extends Sprite

func _physics_process(delta):
	if Global.Placa_mae == 1:
		$Area2D/CollisionShape2D.disabled = false
	else:
		$Area2D/CollisionShape2D.disabled = true
