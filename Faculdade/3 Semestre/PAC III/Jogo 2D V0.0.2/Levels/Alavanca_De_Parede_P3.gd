extends Area2D
var Porta = false
var status = false

func _physics_process(delta: float) -> void:
	print("Porta",Porta,"Global",Global.porta_3)
	_Alavanca()

func _on_Alavanca_De_Parede_body_entered(body):
	status = true

func _on_Alavanca_De_Parede_body_exited(body):
	status = false

func _Alavanca():
	var anim = "Ativado"
	if status == true and Porta == false and Input.is_action_pressed("agarrar"):
		yield(get_tree().create_timer(0.3), "timeout")
		$som.play()
		Porta = true
		Global.porta_3 = true
		Global.mensagem = 11
	
	if status == true and Input.is_action_pressed("agarrar") and Porta == true:
		yield(get_tree().create_timer(0.3), "timeout")
		Porta = false
		Global.porta_3 = false
		
		$som.play()
	if Porta == true:
		anim = "Ativada"
	elif Porta == false:
		anim = "Desativada"
	if $anim.assigned_animation != anim:
		$anim.play(anim)
		
		
		
		
		
#			if status == true and Luzes_M1 == false and Input.is_action_pressed("agarrar"):
#		Global.mensagem = 5
#		yield(get_tree().create_timer(0.3), "timeout")
#
#		$som.play()
#		#yield(get_tree().create_timer(0.03), "timeout")
#
#		Luzes_M1 = true
#
#
#	elif status == true and Input.is_action_pressed("agarrar") and Luzes_M1 == true:
#
#		yield(get_tree().create_timer(0.3), "timeout")
#
#		Luzes_M1 = false
#		$som.play()
#		#yield(get_tree().create_timer(0.03), "timeout")

