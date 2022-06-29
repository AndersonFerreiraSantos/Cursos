extends KinematicBody2D
#aaaaa
var speed = 64
var velocity = Vector2.ZERO
var gravity = 1200
export var  Energizado = true

onready var Direita := $Direita as RayCast2D

var Conectado = false

func _physics_process(delta: float) -> void:
#	velocity = move_and_slide(velocity)
#	velocity.y += gravity * delta
	
	Detectar_Cabo_Energizado()
	_set_animation()
#	Massivo_Ativado()

	
		
func _set_animation():
	var anim = "Desconectado"
	if Conectado == false:
		anim = "Desconectado - Desativado"
		
	if $Direita.is_colliding() and Conectado == true:
		anim = "Direita"
	elif $Esquerda.is_colliding() and Conectado == true:
		anim = "Esquerda"
	elif $Cima.is_colliding() and Conectado == true:
		anim = "Cima"
	elif $Baixo.is_colliding() and Conectado == true:
		anim = "Baixo"
	if $Esquerda.is_colliding() and $Direita.is_colliding() and Conectado == true:
		anim = "Esquerda-Direita"
	if $anim.assigned_animation != anim:
		$anim.play(anim)
		
#func Massivo_Ativado():
#	if Conectado == true:
#		$Massivo_Ativado/Massivo_Ativado.disabled = false
#	else: 
#		$Massivo_Ativado/Massivo_Ativado.disabled = true
#
#func Detectar_Massivo_ativo():
#	if $Detectar_Massivo_ativo_direita.is_colliding() or $Detectar_Massivo_ativo_esquerda.is_colliding():
#		$Cabo_Energizado/Cabo_Energizado.disabled = false
#		Massivo = true
#	else:
#		Massivo = false
#
#
#Cabooo--------------------------------------------------------------------------------------------------------
func Detectar_Cabo_Energizado():
	if $Detectar_Cabo_Energizado_Direita.is_colliding() or $Detectar_Cabo_Energizado_Esquerda.is_colliding():
		Conectado = true
		print("'Detectouuu'aaaaaaa")
	else:
		Conectado = false
	
#func Desativar():
#	if Massivo == false and Cabo == false:
#		$Cabo_Energizado/Cabo_Energizado.disabled = true


