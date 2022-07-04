extends Label

func _physics_process(delta):
	if Global.drop == true
func _on_anim_animation_finished(anim_name):
	queue_free()
