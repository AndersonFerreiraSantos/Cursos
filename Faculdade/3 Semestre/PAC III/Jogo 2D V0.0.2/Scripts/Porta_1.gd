extends KinematicBody2D
var teste = Global.Patch_cord

func _physics_process(delta: float) -> void:
	teste()
	
func teste():
	if Global.RJ45_Macho == 2 and Global.Cabo_de_Rede == 1:
		queue_free()

