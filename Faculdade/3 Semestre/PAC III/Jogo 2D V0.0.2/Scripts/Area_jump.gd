extends Area2D

func _physics_process(delta: float) -> void:
	
	if $Area_jump/Collision.is_colliding():
		print('Colidiu')
