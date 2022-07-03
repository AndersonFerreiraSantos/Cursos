extends Area2D


func _on_msg_1_body_entered(body):
	Global.mensagem = 1
	queue_free()
