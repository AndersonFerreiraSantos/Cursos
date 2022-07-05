extends HBoxContainer

func _physics_process(delta):
	
	if Global.RJ45_Macho > 0:
		$RJ45_Macho.visible = true
		$RJ45_Macho/Quantidade.text = String(Global.RJ45_Macho)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$RJ45_Macho.visible = false
	
	if Global.RAM_2> 0:
		$RAM_2.visible = true
		$RAM_2/Quantidade.text = String(Global.RAM_2)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$RAM_2.visible = false
		
	if Global.RAM_4> 0:
		$RAM_4.visible = true
		$RAM_4/Quantidade.text = String(Global.RAM_4)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$RAM_4.visible = false
	
	if Global.RAM_8> 0:
		$RAM_8.visible = true
		$RAM_8/Quantidade.text = String(Global.RAM_8)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$RAM_8.visible = false
		
	if Global.RAM_16> 0:
		$RAM_16.visible = true
		$RAM_16/Quantidade.text = String(Global.RAM_16)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$RAM_16.visible = false

	if Global.Processador> 0:
		$Processador.visible = true
		$Processador/Quantidade.text = String(Global.Processador)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$Processador.visible = false
		
	if Global.HD> 0:
		$HD.visible = true
		$HD/Quantidade.text = String(Global.HD)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$HD.visible = false
		
	if Global.Patch_cord> 0:
		$Patch_cord.visible = true
		$Patch_cord/Quantidade.text = String(Global.Patch_cord)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$Patch_cord.visible = false
		
	if Global.Placa_mae> 0:
		$Placa_mae.visible = true
		$Placa_mae/Quantidade.text = String(Global.Placa_mae)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$Placa_mae.visible = false
		
	if Global.Fonte> 0:
		$Fonte.visible = true
		$Fonte/Quantidade.text = String(Global.Fonte)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$Fonte.visible = false
		
	if Global.Gabinete> 0:
		$Gabinete.visible = true
		$Gabinete/Quantidade.text = String(Global.Gabinete)
		#$Quantidade.text = String(Global.RJ45_Macho)
	else:
		$Gabinete.visible = false
		
#----------------------------------------------------------------------Fila 2
