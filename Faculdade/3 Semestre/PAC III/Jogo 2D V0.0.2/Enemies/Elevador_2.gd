extends Area2D
 
var status = false

signal som_elevador
signal som_stop

func _physics_process(delta):
	print(Global.Elevador_2)

	if status == true and Input.is_action_pressed("agarrar") and Global.Elevador_2 == 1:
		
		emit_signal("som_elevador")
		
		yield(get_tree().create_timer(0.3), "timeout")
		Global.Elevador_2 = 0
		Global.no_elevador = 0

	
	elif status == true and Input.is_action_pressed("agarrar") and Global.Elevador_2 == 0:
		
		emit_signal("som_elevador")
		
		yield(get_tree().create_timer(0.3), "timeout")
		print(status," =Elevador para cima")
		Global.Elevador_2 = 1
		Global.no_elevador = 1
	#####print(Global.Elevador)

		
		
func _on_Ambiente_body_entered(body):
	status = true
	
	
func _on_Ambiente_body_exited(body):
	status = false
	Global.no_elevador = 3
