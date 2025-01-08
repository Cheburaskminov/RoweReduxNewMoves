SlateportCity_PokemonFanClub_EventScript_SwaggerTutor:: @ 82C7F16
	lock
	faceplayer
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_SwaggerDeclined
	//
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_NoHeartScale
	//
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_SwaggerDeclined
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SWAGGER
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_EventScript_SwaggerDeclined
	removeitem ITEM_HEART_SCALE
	goto MoveTutor_EventScript_SwaggerTaught
	end
	
MoveTutor_EventScript_NoHeartScale::
	msgbox MoveTutor_Text_NoHeartScale, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SwaggerDeclined:: @ 82C7F6A
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SwaggerTaught:: @ 82C7F74
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_PsychicFangsTutor:: @ 82C7F7E
	lock
	faceplayer
	msgbox MoveTutor_Text_PsychicFangsTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_PsychicFangsDeclined
	//
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_NoHeartScale
	//
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_PsychicFangsDeclined
	msgbox MoveTutor_Text_PsychicFangsWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_PSYCHIC_FANGS
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_EventScript_PsychicFangsDeclined
	removeitem ITEM_HEART_SCALE
	goto MoveTutor_EventScript_PsychicFangsTaught
	end

MoveTutor_EventScript_PsychicFangsDeclined:: @ 82C7FD2
	msgbox MoveTutor_Text_PsychicFangsDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_PsychicFangsTaught:: @ 82C7FDC
	msgbox MoveTutor_Text_PsychicFangsTaught, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_CrunchTutor:: @ 82C7FE6
	lock
	faceplayer
	msgbox MoveTutor_Text_CrunchTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_CrunchDeclined
	//
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_NoHeartScale
	//
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_CrunchDeclined
	msgbox MoveTutor_Text_CrunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_CRUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_EventScript_CrunchDeclined
	removeitem ITEM_HEART_SCALE
	goto MoveTutor_EventScript_CrunchTaught
	end

MoveTutor_EventScript_CrunchDeclined:: @ 82C803A
	msgbox MoveTutor_Text_CrunchDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_CrunchTaught:: @ 82C8044
	msgbox MoveTutor_Text_CrunchTaught, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_MimicTutor:: @ 82C804E
	lock
	faceplayer
	msgbox MoveTutor_MimicTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_MimicDeclined
	//
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_NoHeartScale
	//
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_MimicDeclined
	msgbox MoveTutor_Text_MimicWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_MIMIC
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_EventScript_MimicDeclined
	removeitem ITEM_HEART_SCALE
	goto MoveTutor_EventScript_MimicTaught
	end

MoveTutor_EventScript_MimicDeclined:: @ 82C80A2
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MimicTaught:: @ 82C80AC
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_AuroraBeamTutor:: @ 82C80B6
	lock
	faceplayer
	msgbox MoveTutor_Text_AuroraBeamTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_AuroraBeamDeclined
	//
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_NoHeartScale
	//
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_AuroraBeamDeclined
	msgbox MoveTutor_Text_AuroraBeamWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_AURORA_BEAM
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_EventScript_AuroraBeamDeclined
	removeitem ITEM_HEART_SCALE
	goto MoveTutor_EventScript_AuroraBeamTaught
	end

MoveTutor_EventScript_AuroraBeamDeclined:: @ 82C810A
	msgbox MoveTutor_Text_AuroraBeamDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_AuroraBeamTaught:: @ 82C8114
	msgbox MoveTutor_Text_AuroraBeamTaught, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_SleepTalkTutor:: @ 82C811E
	lock
	faceplayer
	msgbox MoveTutor_Text_SleepTalkTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_SleepTalkDeclined
	//
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_NoHeartScale
	//
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_SleepTalkDeclined
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SLEEP_TALK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_EventScript_SleepTalkDeclined
	removeitem ITEM_HEART_SCALE
	goto MoveTutor_EventScript_SleepTalkTaught
	end

MoveTutor_EventScript_SleepTalkDeclined:: @ 82C8172
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SleepTalkTaught:: @ 82C817C
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ZenHeadbuttTutor:: @ 82C8186
	lock
	faceplayer
	msgbox MoveTutor_Text_ZenHeadbuttTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_ZenHeadbuttDeclined
	//
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_NoHeartScale
	//
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_ZenHeadbuttDeclined
	msgbox MoveTutor_Text_ZenHeadbuttWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ZEN_HEADBUTT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_EventScript_ZenHeadbuttDeclined
	removeitem ITEM_HEART_SCALE
	goto MoveTutor_EventScript_ZenHeadbuttTaught
	end

MoveTutor_EventScript_ZenHeadbuttDeclined:: @ 82C81DA
	msgbox MoveTutor_Text_ZenHeadbuttDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_ZenHeadbuttTaught:: @ 82C81E4
	msgbox MoveTutor_Text_ZenHeadbuttTaught, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DynamicPunchTutor:: @ 82C81EE
	lock
	faceplayer
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_DynamicPunchDeclined
	//
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_NoHeartScale
	//
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_DynamicPunchDeclined
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_DYNAMIC_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_EventScript_DynamicPunchDeclined
	removeitem ITEM_HEART_SCALE
	goto MoveTutor_EventScript_DynamicPunchTaught
	end

MoveTutor_EventScript_DynamicPunchDeclined:: @ 82C8242
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DynamicPunchTaught:: @ 82C824C
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor:: @ 82C8256
	lock
	faceplayer
	msgbox MoveTutor_Text_DoubleEdgeTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_DoubleEdgeDeclined
	//
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_NoHeartScale
	//
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_DoubleEdgeDeclined
	msgbox MoveTutor_Text_DoubleEdgeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_DOUBLE_EDGE
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_EventScript_DoubleEdgeDeclined
	removeitem ITEM_HEART_SCALE
	goto MoveTutor_EventScript_DoubleEdgeTaught
	end

MoveTutor_EventScript_DoubleEdgeDeclined:: @ 82C82AA
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DoubleEdgeTaught:: @ 82C82B4
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor:: @ 82C82BE
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PACIFIDLOG_TM_EXPLOSION, MoveTutor_EventScript_ExplosionTaught
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM64
	setflag FLAG_RECEIVED_PACIFIDLOG_TM_EXPLOSION
	goto MoveTutor_EventScript_ExplosionTaught
	end

MoveTutor_EventScript_ExplosionTaught:: @ 82C831C
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_OpenPartyMenu:: @ 82C8326
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_CanOnlyBeLearnedOnce:: @ 82C832D
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	return
