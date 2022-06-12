extends Node2D

func _physics_process(delta):
	iluminacao()
	
func iluminacao():
	if Global.Luzes_M1 == true:
		$Sprite.visible = false
	else:
		$Sprite.visible = true
