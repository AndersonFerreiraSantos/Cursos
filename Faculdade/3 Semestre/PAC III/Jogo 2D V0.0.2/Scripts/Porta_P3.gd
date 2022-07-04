extends KinematicBody2D

func _physics_process(delta):
	var anim = "Fechada"
	if Global.porta_3 == false:
		anim = "Fechada"
	else:
		anim = "Aberta"
	if $anim.assigned_animation != anim:
			$anim.play(anim)
