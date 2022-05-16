extends Node2D
onready var Elevador = $Elevador
onready var Tween = $Tween
var teste = Global.Elevador
export var speed = 3.0
export var horizontal = false
export var distance = 1000
var follow = Vector2.ZERO
const WAIT_DURATION = 1.0

func _ready():
	_start_tween(teste)

func _start_tween(teste):
	if (Global.Elevador == 1):
		
		var move_direction = Vector2.DOWN * distance
		var duration = move_direction.length() / float(speed * 60)
#		Tween.interpolate_property(
#			self, "follow", move_direction, duration, 
#			Tween.TRANS_LINEAR, Tween.EASE_IN_OUT, WAIT_DURATION
#			)
		Tween.interpolate_property(
			self, "follow", move_direction, Vector2.DOWN * distance, duration, 
			Tween.TRANS_LINEAR
			)
		Tween.start()
func _physics_process(delta: float) -> void:
	Elevador.position = Elevador.position.linear_interpolate(follow, 0.05)
