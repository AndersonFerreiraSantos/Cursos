extends KinematicBody2D
var teste = Global.Patch_Cord

func _physics_process(delta: float) -> void:
	Abrir()
	
func Abrir():
	if Global.missao_1 == 1:
		queue_free()

