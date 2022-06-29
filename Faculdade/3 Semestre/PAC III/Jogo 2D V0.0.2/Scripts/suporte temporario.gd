extends KinematicBody2D

onready var timer := $Timer as Timer
var tempo = 0

func _physics_process(delta: float) -> void:
	_set_animation()
	
func _on_Timer_timeout():
	if tempo == 1:
		$Collision.disabled = false
		tempo = 0
	else:
		$Collision.disabled = true
		tempo = 1
	print(tempo)
	
func _set_animation():
	var anim = "abrindo"
	if tempo == 0:
		anim = "abrindo"
	
	if tempo == 1:
		anim = "Fechando"
		
	if $anim.assigned_animation != anim:
		$anim.play(anim)
