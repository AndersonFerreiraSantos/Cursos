extends KinematicBody2D

export var speed = 64
var velocity = Vector2.ZERO
var gravity = 1200

export var Energizado = false
var Energizar = false
var Massivo = false
var Cabo = false



func _physics_process(delta: float) -> void:
	velocity = move_and_slide(velocity)
	velocity.y += gravity * delta
	
	_set_animation()
	Detectar_Massivo_ativo()
	Desativar()
	Detectar_Cabo_Energizado()

func _set_animation():
	var anim = "Desconectado"
	
	if $Direita.is_colliding() and Massivo == true:
		anim = "Direita"
	elif $Esquerda.is_colliding() and Massivo == true:
		anim = "Esquerda"
	elif $Esquerda.is_colliding() and Cabo == true:
		anim = "Esquerda"
	elif $Direita.is_colliding() and Cabo == true:
		anim = "Direita"
	if $Direita.is_colliding() and $Esquerda.is_colliding() and Cabo == true or $Direita.is_colliding() and $Esquerda.is_colliding() and Massivo == true :
		anim = "Esquerda-Direita"
	if $anim.assigned_animation != anim:
		$anim.play(anim)


func Detectar_Massivo_ativo():
	if $Detectar_Massivo_ativo_direita.is_colliding() or $Detectar_Massivo_ativo_esquerda.is_colliding():
		$Cabo_Energizado/Cabo_Energizado.disabled = false
		Massivo = true
	else:
		Massivo = false
		
func Detectar_Cabo_Energizado():
	if $Detectar_Cabo_Energizado_Direita.is_colliding() or $Detectar_Cabo_Energizado_Esquerda.is_colliding():
		Cabo = true
		$Cabo_Energizado/Cabo_Energizado.disabled = false
	else:
		Cabo = false
	
func Desativar():
	if Massivo == false and Cabo == false:
		$Cabo_Energizado/Cabo_Energizado.disabled = true
