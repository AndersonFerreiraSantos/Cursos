extends StaticBody2D
var teste = Global.Patch_Cord

func _physics_process(delta: float) -> void:
	teste()
	
func teste():
	if Global.Patch_Cord == 1:
		queue_free()

