extends Node2D

func _physics_process(delta):
	iluminacao()
	
func iluminacao():
	if Global.Luzes_M1 == true:
		$SemLuzM1.visible = false
	else:
		$SemLuzM1.visible = true
