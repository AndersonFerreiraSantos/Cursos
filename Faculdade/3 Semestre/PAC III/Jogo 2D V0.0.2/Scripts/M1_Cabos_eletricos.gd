extends Node2D
onready var timer := $Timer as Timer
var tempo = 0
func _on_Timer_timeout():
	
	if tempo == 1:
		$Collision.disabled = false
		tempo = 0
	else:
		$Collision.disabled = true
		tempo = 1
	print(tempo)
	

