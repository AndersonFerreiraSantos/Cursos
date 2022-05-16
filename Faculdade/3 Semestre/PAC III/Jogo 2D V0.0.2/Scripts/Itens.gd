extends Area2D
export var Cafe = 1
func _on_Itens_body_entered(body):
	$anim.play("collected")
	Global.Cafe += Cafe
	print("Cafe: ",Global.Cafe)

func _on_anim_animation_finished(anim_name):
	if anim_name == "collected":
		queue_free()
