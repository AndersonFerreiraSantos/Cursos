extends Area2D


func _on_msg_3_body_entered(body):
	Global.mensagem = 3
	queue_free()
