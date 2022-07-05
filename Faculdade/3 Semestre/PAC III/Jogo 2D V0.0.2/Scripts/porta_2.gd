extends KinematicBody2D
var teste = Global.Patch_cord

func _physics_process(delta: float) -> void:
	Abrir()
	
func Abrir():
	if Global.missao_1 == 1:
		Global.Patch_cord += 1
		Global.RJ45_Macho -= 2
		Global.Cabo_de_Rede -= 1
		queue_free()
