extends Node2D

func _on_Cabos_eletricos_body_entered(body):
	Global.no_cabo_eletrico = true

func _on_Cabos_eletricos_body_exited(body):
	Global.no_cabo_eletrico = false
