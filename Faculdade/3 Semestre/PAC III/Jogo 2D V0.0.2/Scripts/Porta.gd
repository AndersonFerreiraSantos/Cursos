extends Area2D

func _physics_process(delta: float) -> void:
	teste()
	
func teste():
	if Global.RJ45_Macho == 1 && Global.Cabo_de_Rede == 1 && Global.Crimpador == 1:
		queue_free()

