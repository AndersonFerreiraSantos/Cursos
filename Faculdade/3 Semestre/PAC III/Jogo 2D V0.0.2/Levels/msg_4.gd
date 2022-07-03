extends Area2D

func _on_msg_4_body_entered(body):
		Global.mensagem = 4
		queue_free()
