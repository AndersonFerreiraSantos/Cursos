extends Control

var life_size = 32

func _physics_process(delta: float) -> void:
	$life.rect_size.x = Global.life_player * life_size
	
