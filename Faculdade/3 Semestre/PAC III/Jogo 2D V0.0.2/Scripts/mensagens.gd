extends Control

func _physics_process(delta):
	
	if Global.mensagem == 0:
		$personagem.visible = false
	else: 
		$personagem.visible = true
	msg_1()
	msg_2()
	msg_3()
	msg_4()
	msg_5()
	msg_6()
	msg_7()
	msg_8()
	msg_9()
	msg_10()
	msg_11()
	msg_12()
	msg_15()
	msg_20()
	msg_21()
#
func msg_1():
	if Global.mensagem == 1:
		$msg_1.visible = true
	elif Global.mensagem != 1:
		$msg_1.visible = false
		
func msg_2():
	if Global.mensagem == 2:
		$msg_2.visible = true
	elif Global.mensagem != 2:
		$msg_2.visible = false
		
func msg_3():
	if Global.mensagem == 3:
		$msg_3.visible = true
	elif Global.mensagem != 3:
		$msg_3.visible = false

func msg_4():
	if Global.mensagem == 4:
		$msg_4.visible = true
	elif Global.mensagem != 4:
		$msg_4.visible = false
		
func msg_5():
	if Global.mensagem == 5:
		$msg_5.visible = true
	elif Global.mensagem != 5:
		$msg_5.visible = false
		
func msg_6():
	if Global.mensagem == 6:
		$msg_6.visible = true
	elif Global.mensagem != 6:
		$msg_6.visible = false
func msg_7():
	if Global.mensagem == 7:
		$msg_7.visible = true
	elif Global.mensagem != 7:
		$msg_7.visible = false
func msg_8():
	if Global.mensagem == 8:
		$msg_8.visible = true
	elif Global.mensagem != 8:
		$msg_8.visible = false
func msg_9():
	if Global.mensagem == 9:
		$msg_9.visible = true
	elif Global.mensagem != 9:
		$msg_9.visible = false
func msg_10():
	if Global.mensagem == 10:
		$msg_10.visible = true
	elif Global.mensagem != 10:
		$msg_10.visible = false
func msg_11():
	if Global.mensagem == 11:
		$msg_11.visible = true
	elif Global.mensagem != 11:
		$msg_11.visible = false
func msg_12():
	if Global.mensagem == 12:
		$msg_12.visible = true
	elif Global.mensagem != 12:
		$msg_12.visible = false
func msg_15():
	if Global.mensagem == 15:
		$msg_15.visible = true
	elif Global.mensagem != 15:
		$msg_15.visible = false

func msg_20():
	if Global.mensagem == 20:
		$msg_20.visible = true
	elif Global.mensagem != 20:
		$msg_20.visible = false
func msg_21():
	if Global.mensagem == 21:
		$msg_21.visible = true
	elif Global.mensagem != 21:
		$msg_21.visible = false
#Opões -------------------------------------------------------------- 
#Opões -------------------------------------------------------------- RJ45 - M1
func _on_Correto_pressed():
	Global.missao_1 = 1 # Certa
	Global.mensagem = 10
	Global.em_missao = false
func _on_Errado__1_pressed():
	Global.missao_1 = 2
	Global.mensagem = 9
func _on_Errado__2_pressed():
	Global.missao_1 = 3
	Global.mensagem = 9




func _on_Button_pressed():
	Global.mensagem = 21
