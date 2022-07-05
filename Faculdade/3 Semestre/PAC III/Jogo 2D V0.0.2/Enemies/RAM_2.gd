extends Label
export var teste = "teste"
func _physics_process(delta):
	$Label.text = teste 
