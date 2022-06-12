extends KinematicBody2D

var speed = 64
var velocity = Vector2.ZERO
var gravity = 1200
export var  Energizado = true

onready var Direita := $Direita as RayCast2D


func _physics_process(delta: float) -> void:
	velocity = move_and_slide(velocity)
	velocity.y += gravity * delta
	

	_set_animation()
	Massivo_Ativado()

	
		
func _set_animation():
	var anim = "Desconectado"
	if Energizado == false:
		anim = "Desconectado - Desativado"
		
	if $Direita.is_colliding() and Energizado == true:
		anim = "Direita"
	elif $Esquerda.is_colliding() and Energizado == true:
		anim = "Esquerda"
	elif $Cima.is_colliding() and Energizado == true:
		anim = "Cima"
	elif $Baixo.is_colliding() and Energizado == true:
		anim = "Baixo"
	if $Esquerda.is_colliding() and $Direita.is_colliding() and Energizado == true:
		anim = "Esquerda-Direita"
	if $anim.assigned_animation != anim:
		$anim.play(anim)
		
func Massivo_Ativado():
	if Energizado == true:
		$Massivo_Ativado/Massivo_Ativado.disabled = false
	else: 
		$Massivo_Ativado/Massivo_Ativado.disabled = true
	
	
	
	
