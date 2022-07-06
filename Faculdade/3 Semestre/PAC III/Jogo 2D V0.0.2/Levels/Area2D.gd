extends Area2D
var status = false
func _physics_process(delta):
	if status == true and Input.is_action_pressed("agarrar") and Global.Placa_mae == 1:
		Global.mensagem = 20
		
func _on_Area2D_body_entered(body):
	status = true


func _on_Area2D_body_exited(body):
	status = false
