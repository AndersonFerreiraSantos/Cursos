extends StaticBody2D
var teste = Global.Patch_Cord

func _physics_process(delta: float) -> void:
	teste()
	
func teste():
	if Global.Cabo_de_Rede == 1 && Global.RJ45_Macho == 1:
		queue_free()

