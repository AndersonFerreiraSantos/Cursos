extends Control
var inventario = false

func _ready():
	$"Itens - linha 1".visible = false
	$"Itens - linha 2".visible = false
	$"Itens - linha 3".visible = false
	$"Itens - linha 4".visible = false
	$Descricoes.visible = false
	$background.visible = false
	
	#Itens
	$"Itens - linha 1/RJ45_Macho".visible  = false
	$"Itens - linha 1/Patch_cord".visible = false
	$"Itens - linha 1/RAM_2".visible = false
	$"Itens - linha 1/RAM_4".visible = false
	$"Itens - linha 1/RAM_8".visible = false
	$"Itens - linha 1/RAM_16".visible = false
	$"Itens - linha 1/Processador".visible = false
	$"Itens - linha 1/HD".visible = false
	$"Itens - linha 1/Patch_cord".visible = false
	$"Itens - linha 1/Placa_mae".visible = false
	$"Itens - linha 1/Fonte".visible = false
	$"Itens - linha 1/Gabinete".visible = false
	
func _physics_process(delta):
	
	if Input.is_action_pressed("bolsa"):
		
		if inventario == false:
			$background.visible = true
			
			$"Itens - linha 1".visible = true
			$"Itens - linha 2".visible = true
			$"Itens - linha 3".visible = true
			$"Itens - linha 4".visible = true
			
			yield(get_tree().create_timer(0.3), "timeout")
			inventario = true
			
		elif inventario == true:
			$background.visible = false
			
			$"Itens - linha 1".visible = false
			$"Itens - linha 2".visible = false
			$"Itens - linha 3".visible = false
			$"Itens - linha 4".visible = false

			yield(get_tree().create_timer(0.3), "timeout")
			inventario = false
			
		



func _on_TextureButton_pressed():
	$Descricoes.visible = false
	$"Descricoes/RJ45_Macho".visible = false
	$"Descricoes/RAM".visible = false
	$"Descricoes/Processador".visible = false
	$"Descricoes/HD".visible = false
	$"Descricoes/Patch_cord".visible = false
	$"Descricoes/Placa_mae".visible = false
	$"Descricoes/Fonte".visible = false
	$"Descricoes/Gabinete".visible = false

#func _on_TextureButton_pressed():
#	$Descricoes.visible = false
#	$"Descricoes/RAM".visible = false
#
#func _on_TextureButton_pressed():
#	$Descricoes.visible = false
#	$"Descricoes/Processador".visible = false
#
#func _on_TextureButton_pressed():
#	$Descricoes.visible = false
#	$"Descricoes/HD".visible = false
#
#func _on_TextureButton_pressed():
#	$Descricoes.visible = false
#	$"Descricoes/Patch_cord".visible = false
#
#func _on_TextureButton_pressed():
#	$Descricoes.visible = false
#	$"Descricoes/Placa_mae".visible = false
#
#func _on_TextureButton_pressed():
#	$Descricoes.visible = false
#	$"Descricoes/Fonte".visible = false
#
#func _on_TextureButton_pressed():
#	$Descricoes.visible = false
#	$"Descricoes/Gabinete".visible = false

func _on_RJ45_Macho_pressed():
	$Descricoes.visible = true
	$"Descricoes/RJ45_Macho".visible = true

func _on_RAM_2_pressed():
	$Descricoes.visible = true
	$"Descricoes/RAM".visible = true

func _on_RAM_4_pressed():
	$Descricoes.visible = true
	$"Descricoes/RAM".visible = true

func _on_RAM_8_pressed():
	$Descricoes.visible = true
	$"Descricoes/RAM".visible = true
	
func _on_RAM_16_pressed():
	$Descricoes.visible = true
	$"Descricoes/RAM".visible = true

func _on_Processador_pressed():
	$Descricoes.visible = true
	$"Descricoes/Processador".visible = true

func _on_HD_pressed():
	$Descricoes.visible = true
	$"Descricoes/HD".visible = true

func _on_Patch_cord_pressed():
	$Descricoes.visible = true
	$"Descricoes/Patch_cord".visible = true

func _on_Plca_mae_pressed():
	$Descricoes.visible = true
	$"Descricoes/Placa_mae".visible = true

func _on_Fonte_pressed():
	$Descricoes.visible = true
	$"Descricoes/Fonte".visible = true

func _on_Gabinete_pressed():
	$Descricoes.visible = true
	$"Descricoes/Gabinete".visible = true
	




