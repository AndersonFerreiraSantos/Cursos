extends Area2D


signal Bancada_true

func _ready():
	pass


func _on_Trigger_PlayerEntered():
	$Anim_bancada.play("enable")
