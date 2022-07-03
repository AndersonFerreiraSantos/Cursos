extends Area2D
 
var status = false

func _physics_process(delta):
	if status == true and Input.is_action_pressed("agarrar") and Global.Elevador == 1:
		yield(get_tree().create_timer(0.3), "timeout")
		Global.Elevador = 0
		Global.no_elevador = 0
		print(status," = Elevador para baixo")

	elif status == true and Input.is_action_pressed("agarrar") and Global.Elevador == 0:
		yield(get_tree().create_timer(0.3), "timeout")
		print(status," =Elevador para cima")
		Global.Elevador = 1
		Global.no_elevador = 1
	#####print(Global.Elevador)
func _on_Ambiente_body_entered(body):
	status = true
	
func _on_Ambiente_body_exited(body):
	status = false
	Global.no_elevador = 3
