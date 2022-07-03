extends Area2D

func _on_Trampolim_body_entered(body: Node) -> void:
		body.velocity.y = body.jump_force
		$anim.play("jump")
