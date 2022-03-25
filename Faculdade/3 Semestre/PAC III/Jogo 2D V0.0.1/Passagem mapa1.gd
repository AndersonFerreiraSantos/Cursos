extends Area2D

export(String, FILE, "*.tscn") var cenas

func _on_Passagem_mapa1_body_entered(body):

		print("entrou")
		get_tree().change_scene(cenas)


func _on_Passagem_mapa1_body_exited(body):
	print("saiu")
