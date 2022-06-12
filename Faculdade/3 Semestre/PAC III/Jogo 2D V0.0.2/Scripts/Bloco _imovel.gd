extends KinematicBody2D

var speed = 64
var velocity = Vector2.ZERO
var gravity = 1200

func _physics_process(delta: float) -> void:
	velocity = move_and_slide(velocity)
	velocity.y += gravity * delta
