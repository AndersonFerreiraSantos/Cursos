extends Area2D
var status =  false
func _physics_process(delta):
	if status == true and Input.is_action_just_pressed("jump"):
		$Trampolim/Collision.disabled = false
	else:
		$Trampolim/Collision.disabled = true

func _on_start_body_entered(body):
	status = true

func _on_start_body_exited(body):
	$Trampolim/Collision.disabled = true
	status = false
	
