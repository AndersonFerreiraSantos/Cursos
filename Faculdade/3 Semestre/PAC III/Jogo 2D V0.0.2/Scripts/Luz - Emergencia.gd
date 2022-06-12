extends Node2D


func _physics_process(delta: float) -> void:
	_Luz_Emergencia()
#
func _Luz_Emergencia():
	var anim = "Ativada"
	if Global.Luzes_M1 == true:
		anim = "Desativada"
	elif Global.Luzes_M1 == false:
		anim = "Ativada"
	if $anim.assigned_animation != anim:
		$anim.play(anim)
