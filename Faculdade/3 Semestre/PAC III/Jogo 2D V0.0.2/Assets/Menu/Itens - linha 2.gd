extends HBoxContainer

func _physics_process(delta):
	
	if Global.Cabo_de_Rede > 0:
		$Cabo_de_rede.visible = true
		$Cabo_de_rede/Quantidade.text = String(Global.Cabo_de_Rede)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$Cabo_de_rede.visible = false
	
