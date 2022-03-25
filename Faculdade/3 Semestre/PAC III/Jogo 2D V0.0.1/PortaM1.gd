extends Area2D

export(String, FILE, "*.tscn") var cenas

func _on_PortaM1_body_entered(body):
	print("entrou")
	get_tree().change_scene(cenas)

func _on_PortaM1_mouse_entered():
	print('mouse')


func _on_PortaM1_input_event(viewport, event, shape_idx):
	print('teste')
