extends Node2D

func _physics_process(delta: float) -> void:
	var anim = "Desligada"
	if Global.Luzes_M1 == false:
		anim = "Desligada"
	if Global.Luzes_M1 == true:
		anim = "Ligando"
		#yield(get_tree().create_timer(0.5), "timeout")
		#anim = "Ligada"
	if $anim.assigned_animation != anim:
		$anim.play(anim)
# Declare member variables here. Examples:
# var a = 2
# var b = "text"


# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass
