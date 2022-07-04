extends Area2D
var Porta = false
var status = false

func _physics_process(delta: float) -> void:
	Global.porta_3 = Porta
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
		yield(get_tree().create_timer(0.3), "timeout")
		Global.mensagem = 11
		#yield(get_tree().create_timer(0.03), "timeout")
	elif status == true and Input.is_action_pressed("agarrar") and Porta == true:
		Porta = false
		yield(get_tree().create_timer(0.3), "timeout")
		$som.play()
		#yield(get_tree().create_timer(0.03), "timeout")

		
		
		
	

	if Porta == true:
		anim = "Ativada"
	elif Porta == false:
		anim = "Desativada"
	if $anim.assigned_animation != anim:
		$anim.play(anim)
