MonitoringStation_EmeraldRoom_MapScripts::
	.byte 0

MonitoringStation_EmeraldRoom_EventScript_BrailleMessage::
	lockall
	setvar VAR_0x8005, 130
	braillemessage_wait Braille_Text_Give
	braillemessage_wait Braille_Text_Life
	braillemessage_wait Braille_Text_Idea
	braillemessage_wait Braille_Text_Achieve
	braillemessage_wait Braille_Text_Highest
	braillemessage_wait Braille_Text_Purpose
	braillemessage_wait Braille_Text_Memories
	braillemessage_wait Braille_Text_Past2
	braillemessage_wait Braille_Text_Rekindled
	braillemessage_wait Braille_Text_Buried
	braillemessage_wait Braille_Text_Concepts
	braillemessage_wait Braille_Text_Reused
	braillemessage_wait Braille_Text_Community
	braillemessage_wait Braille_Text_Reunited
	braillemessage_wait Braille_Text_Given
	braillemessage_wait Braille_Text_Shape
	braillemessage_wait Braille_Text_Passion
	braillemessage_wait Braille_Text_Continue
	braillemessage_wait Braille_Text_Legacy
	braillemessage_wait Braille_Text_Create
	braillemessage_wait Braille_Text_Worlds
	braillemessage_wait Braille_Text_Show
	braillemessage_wait Braille_Text_New
	braillemessage_wait Braille_Text_Generation
	braillemessage_wait Braille_Text_Meaning
	braillemessage_wait Braille_Text_Adventure
	braillemessage_wait Braille_Text_Discovery
	braillemessage Braille_Text_Joy
	waitbuttonpress
	releaseall
	end

MonitoringStation_EmeraldRoom_EventScript_Text::
	msgbox Monitoring_Station_EmeraldRoom_Text_Text, MSGBOX_SIGN
	end