class commlink_radio_dialog
{
    idd = IDD_COMMLINK_RADIO_DIALOG;
    movingEnable = 1;
    controlsBackground[] = { };
    objects[] = { };
    onUnload = "['OnRadioOpen', [player, TF_sw_dialog_radio, false, 'commlink_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;";
    onLoad = "if (sunOrMoon < 0.2) then {((_this select 0) displayCtrl 1299) ctrlSetText '\HC_Core\TFAR_Radios\ui\commlink_n.paa';};";    
    controls[]= {
        background,
        channel_01,
        channel_02,
        channel_03,
        channel_04,
        channel_05,
        channel_06,
        channel_07,
        channel_08,
        channel_09,
        enter,
        clear,
        stereo,
        additional,
        speaker,
        next_channel,
        prev_channel,
        volume_Switch,
        edit,
        channel_edit
    };

    class background: RscBackPicture
    {
        idc = 1299;
        text = "HC_Core\TFAR_Radios\ui\commlink.paa";
        x = 0.199167 * safezoneW + safezoneX;
	    y = 0.048 * safezoneH + safezoneY;
	    w = 0.596562 * safezoneW;
	    h = 0.87 * safezoneH;
    };
    class channel_01: HiddenButton
    {
        tooltip = "1";
        idc = 1691;
        x = 0.318542 * safezoneW + safezoneX;
		y = 0.5564 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 0] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class channel_02: HiddenButton
    {
        tooltip = "2";
        idc = 1692;
        x = 0.352708 * safezoneW + safezoneX;
		y = 0.5564 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 1] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class channel_03: HiddenButton
    {
        tooltip = "3";
        idc = 1693;
        x = 0.381875 * safezoneW + safezoneX;
		y = 0.5564 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 2] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class channel_04: HiddenButton
    {
        tooltip = "4";
        idc = 1694;
        x = 0.318542 * safezoneW + safezoneX;
		y = 0.6034 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 3] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class channel_05: HiddenButton
    {
        tooltip = "5";
        idc = 1695;
        x = 0.352708 * safezoneW + safezoneX;
		y = 0.6034 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 4] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class channel_06: HiddenButton
    {
        tooltip = "6";
        idc = 1695;
        x = 0.381875 * safezoneW + safezoneX;
		y = 0.6034 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 5] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class channel_07: HiddenButton
    {
        tooltip = "7";
        idc = 1696;
        x = 0.318542 * safezoneW + safezoneX;
		y = 0.6504 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 6] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class channel_08: HiddenButton
    {
        tooltip = "8";
        idc = 1997;
        x = 0.352708 * safezoneW + safezoneX;
		y = 0.6504 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 7] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class channel_09: HiddenButton
    {
        tooltip = "9";
        idc = 1996;
        x = 0.381875 * safezoneW + safezoneX;
		y = 0.6504 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 8] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };

    class enter: HiddenButton
    {
        idc = 1697;
        x = 0.316541 * safezoneW + safezoneX;
		y = 0.4104 * safezoneH + safezoneY;
		w = 0.0685417 * safezoneW;
		h = 0.0376 * safezoneH;
        onButtonClick = QUOTE([((ctrlParent (_this select 0))) displayCtrl IDC_ANPRC152_EDIT] call TFAR_handhelds_fnc_onButtonClick_Enter;);
        action = "";
        tooltip = "Enter";
    };
    class clear: HiddenButton
    {
        idc = 1607;
        x = 0.382875 * safezoneW + safezoneX;
		y = 0.4154 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        tooltip = "Clear"
        action = QUOTE( \
            ctrlSetText [ARR_2(IDC_ANPRC152_EDIT, '')]; \
            ctrlSetFocus ((findDisplay IDD_ANPRC152_RADIO_DIALOG) displayCtrl IDC_ANPRC152_EDIT); \
        );
    };
    class stereo: HiddenButton
    {
        idc = 1608;
        x = 0.382875 * safezoneW + safezoneX;
		y = 0.4624 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        tooltip = "Sound Stereo";
        action = QUOTE( \
            [ARR_2(TF_sw_dialog_radio, ((TF_sw_dialog_radio call TFAR_fnc_getCurrentSwStereo) + 1) mod TFAR_MAX_STEREO)] call TFAR_fnc_setSwStereo; \
            [TF_sw_dialog_radio] call TFAR_fnc_showRadioVolume; \
        );
    };
    class additional: HiddenButton
    {
        idc = 1609;
        x = 0.382875 * safezoneW + safezoneX;
		y = 0.5094 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        tooltop = "Set Additional";
        action = "[TF_sw_dialog_radio, TF_sw_dialog_radio call TFAR_fnc_getSwChannel] call TFAR_fnc_setAdditionalSwChannel; call TFAR_fnc_updateSWDialogToChannel; [TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
        tooltip = "Set Additional"
    };
    class speaker: HiddenButton
    {
        idc = 1610;
        x = 0.630583 * safezoneW + safezoneX;
		y = 0.453 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio] call TFAR_fnc_setSwSpeakers;[TF_sw_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
        tooltip = "Speaker"
    };
    class next_channel: HiddenButton
    {
        idc = 1611;
        x = 0.342708 * safezoneW + safezoneX;
		y = 0.4624 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        tooltip = "Next Channel";
        action = "[1, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class prev_channel: HiddenButton
    {
        idc = 1612;
        x = 0.342708 * safezoneW + safezoneX;
		y = 0.5094 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        tooltip = "Previous Channel";
        action = "[0, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class volume_Switch: HiddenButton
    {
        idc = 1613;
        x = 0.318542 * safezoneW + safezoneX;
		y = 0.4624 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0846 * safezoneH;
        tooltip = "Volume Down | Volume Up";
        onMouseButtonDown = "[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
    };

    class edit: RscEditLCD
    {
        moving = 1;
        idc = IDC_COMMLINK_EDIT;
        x = 0.350604 * safezoneW + safezoneX;
		y = 0.3496 * safezoneH + safezoneY;
		w = 0.05875 * safezoneW;
		h = 0.0376 * safezoneH;
        colorBackground[] = {0,0,0,0};
        colorText[] = {9, 250, 82, 1};
        font = "TFAR_font_dots";
        canModify = 1;
        onKeyUp = QUOTE( \
            if (_this select 1 in [ARR_2(28,156)]) then { \
                [((ctrlParent (_this select 0))) displayCtrl IDC_ANPRC152_EDIT] call TFAR_handhelds_fnc_onButtonClick_Enter; \
            }; \
        );
        tooltip = "Current Channel";
    };
    class channel_edit: RscEditLCD
    {
        //text = "";
        idc = IDC_COMMLINK_CHANNEL_EDIT;
        x = 0.321437 * safezoneW + safezoneX;
		y = 0.3496 * safezoneH + safezoneY;
		w = 0.0244792 * safezoneW;
		h = 0.0376 * safezoneH;
        moving = 1;
        colorBackground[] = {0,0,0,0};
        colorText[] = {9, 250, 82, 1};
        font = "TFAR_font_dots";
        shadow = 2;
        canModify = 0;
        tooltip = "Edit Frequency";
    };

};