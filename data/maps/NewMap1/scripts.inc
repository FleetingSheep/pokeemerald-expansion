NewMap1_MapScripts::
	.byte 0

NewMap1_EventScript_Woman::
	msgbox NewMap1_Text_A, MSGBOX_NPC
	face_left
	end

NewMap1_EventScript_Child::
	msgbox NewMap1_Text_B, MSGBOX_NPC
	end

NewMap1_Text_A:
	.string "Was my husband bothering you outside?\n"
	.string "Don't worry, I don't know what he's\l"
	.string "talking about either.$"

NewMap1_Text_B:
	.string "It's so much warmer here than Kanto!$"
