extends Area2D
var Luzes_M1 = false
var status = false

func _physics_process(delta: float) -> void:
	Global.Luzes_M1 = Luzes_M1
	_Alavanca()

func _on_Alavanca_De_Parede_body_entered(body):
	status = true

func _on_Alavanca_De_Parede_body_exited(body):
	status = false

func _Alavanca():
	var anim = "Ativado"
	if status == true and Luzes_M1 == false and Input.is_action_pressed("agarrar"):
		Global.mensagem = 5
		yield(get_tree().create_timer(0.3), "timeout")
		
		$som.play()
		#yield(get_tree().create_timer(0.03), "timeout")

		Luzes_M1 = true
		
		
	elif status == true and Input.is_action_pressed("agarrar") and Luzes_M1 == true:
	
		yield(get_tree().create_timer(0.3), "timeout")
		
		Luzes_M1 = false
		$som.play()
		#yield(get_tree().create_timer(0.03), "timeout")

		
		
		
	

	if Luzes_M1 == true:
		anim = "Ativada"
	elif Luzes_M1 == false:
		anim = "Desativada"
	if $anim.assigned_animation != anim:
		$anim.play(anim)
