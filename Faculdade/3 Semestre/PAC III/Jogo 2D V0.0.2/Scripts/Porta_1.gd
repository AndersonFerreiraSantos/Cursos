extends KinematicBody2D
var teste = Global.Patch_cord

func _physics_process(delta: float) -> void:
	teste()
	
func teste():
	if Global.RJ45_Macho == 1:
		queue_free()

