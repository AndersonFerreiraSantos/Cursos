extends Area2D


func _on_msg_2_body_entered(body):
	Global.mensagem = 2
	queue_free()
