extends Area2D
var timer_one = true

onready var timer := $Timer as Timer

func _physics_process(delta):
	print('Entrou')
	if Global.bloco_ativo_1 == true and timer_one == true :
		timer.start()
		timer_one = false
		tempo = 1
		print(tempo,"tempo")
	if Global.bloco_ativo_1 == false and timer_one == false:
		timer.stop()
		timer_one = true
		tempo = 3
		$Collision.disabled = true

	_set_animation()

var tempo = 3

func _on_Timer_timeout():
	if tempo == 1:
		$Collision.disabled = false
		tempo = 0

	else:
		$Collision.disabled = true
		tempo = 1

	#print(tempo)

func _set_animation():
	var anim = "Idle"
	
	if Global.bloco_ativo_1 == true:
		anim = "Eletrificado"
	if $anim.assigned_animation != anim:
		$anim.play(anim)

func _ativar():
 pass
	
	
#var tempo = 3
#
#var timer_one = true
#func _ready():
#	pass
#func _physics_process(delta: float) -> void:
#
#	if Global.bloco_ativo_1 == true and timer_one == true :
#		timer.start()
#		timer_one = false
#		tempo = 1
#		$Collision.disabled = false
#	_set_animation()
#
#
#func _on_Timer_timeout():
#	print("executou timer")
#	if tempo == 0:
#		$Collision.disabled = false
#		tempo = 1
#	else:
#		$Collision.disabled = true
#		tempo = 0
#	print(tempo)
	


func _on_Timer_ready():
	pass # Replace with function body.
