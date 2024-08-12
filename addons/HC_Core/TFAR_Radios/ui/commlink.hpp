class commlink_radio_dialog
{
    idd = IDD_COMMLINK_RADIO_DIALOG;
    movingEnable = 1;
    controlsBackground[] = { };
    objects[] = { };
    onUnload = "['OnRadioOpen', [player, TF_sw_dialog_radio, false, 'commlink_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;";
    onLoad = QUOTE(if (sunOrMoon < 0.2) then {((_this select 0) displayCtrl 1200) ctrlSetText '\HC_Core\TFAR_Radios\ui\commlink.paa';};);    
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
        x = 0.304167 * safezoneW + safezoneX;
	    y = 0.265 * safezoneH + safezoneY;
	    w = 0.396562 * safezoneW;
	    h = 0.47 * safezoneH;
    };
    class channel_01: RscButton
    {
        tooltip = "1";
        idc = 1691;
        x = 0.333542 * safezoneW + safezoneX;
		y = 0.5564 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 0] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };
    class channel_02: RscButton
    {
        tooltip = "2";
        idc = 1692;
        x = 0.372708 * safezoneW + safezoneX;
		y = 0.5564 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 1] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };
    class channel_03: RscButton
    {
        tooltip = "3";
        idc = 1693;
        x = 0.411875 * safezoneW + safezoneX;
		y = 0.5564 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 2] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };
    class channel_04: RscButton
    {
        tooltip = "4";
        idc = 1694;
        x = 0.333542 * safezoneW + safezoneX;
		y = 0.6034 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 3] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };
    class channel_05: RscButton
    {
        tooltip = "5";
        idc = 1695;
        x = 0.372708 * safezoneW + safezoneX;
		y = 0.6034 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 4] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };
    class channel_06: RscButton
    {
        tooltip = "6";
        idc = 1695;
        x = 0.411875 * safezoneW + safezoneX;
		y = 0.6034 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 5] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };
    class channel_07: RscButton
    {
        tooltip = "7";
        idc = 1696;
        x = 0.333542 * safezoneW + safezoneX;
		y = 0.6504 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 6] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };
    class channel_08: RscButton
    {
        tooltip = "8";
        idc = 1997;
        x = 0.372708 * safezoneW + safezoneX;
		y = 0.6504 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 7] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };
    class channel_09: RscButton
    {
        tooltip = "9";
        idc = 1996;
        x = 0.411875 * safezoneW + safezoneX;
		y = 0.6504 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio, 8] call TFAR_fnc_setSwChannel;[""CH%1""] call TFAR_fnc_updateSWDialogToChannel;[TF_sw_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };

    class enter: RscButton
    {
        idc = 1697;
        x = 0.333541 * safezoneW + safezoneX;
		y = 0.4154 * safezoneH + safezoneY;
		w = 0.0685417 * safezoneW;
		h = 0.0376 * safezoneH;
        onButtonClick = QUOTE([((ctrlParent (_this select 0))) displayCtrl IDC_ANPRC152_EDIT] call TFAR_handhelds_fnc_onButtonClick_Enter;);
        action = "";
        tooltip = "Enter";
    };
    class clear: RscButton
    {
        idc = 1607;
        x = 0.411875 * safezoneW + safezoneX;
		y = 0.4154 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        tooltip = "Clear"
        action = QUOTE( \
            ctrlSetText [ARR_2(IDC_ANPRC152_EDIT, '')]; \
            ctrlSetFocus ((findDisplay IDD_ANPRC152_RADIO_DIALOG) displayCtrl IDC_ANPRC152_EDIT); \
        );
    };
    class stereo: RscButton
    {
        idc = 1608;
        x = 0.411875 * safezoneW + safezoneX;
		y = 0.4624 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        tooltip = "Sound Stereo";
        action = QUOTE( \
            [ARR_2(TF_sw_dialog_radio, ((TF_sw_dialog_radio call TFAR_fnc_getCurrentSwStereo) + 1) mod TFAR_MAX_STEREO)] call TFAR_fnc_setSwStereo; \
            [TF_sw_dialog_radio] call TFAR_fnc_showRadioVolume; \
        );
    };
    class additional: RscButton
    {
        idc = 1609;
        x = 0.411875 * safezoneW + safezoneX;
		y = 0.5094 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        tooltop = "Set Additional";
        action = "[TF_sw_dialog_radio, TF_sw_dialog_radio call TFAR_fnc_getSwChannel] call TFAR_fnc_setAdditionalSwChannel; call TFAR_fnc_updateSWDialogToChannel; [TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
        tooltip = "Set Additional"
    };
    class speaker: RscButton
    {
        idc = 1610;
        x = 0.519583 * safezoneW + safezoneX;
		y = 0.453 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        action = "[TF_sw_dialog_radio] call TFAR_fnc_setSwSpeakers;[TF_sw_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
        tooltip = "Speaker"
    };
    class next_channel: RscButton
    {
        idc = 1611;
        x = 0.485312 * safezoneW + safezoneX;
        y = 0.5658 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        tooltip = "Next Channel";
        action = "[1, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class prev_channel: RscButton
    {
        idc = 1612;
        x = 0.372708 * safezoneW + safezoneX;
		y = 0.5094 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0376 * safezoneH;
        tooltip = "Previous Channel";
        action = "[0, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class volume_Switch: RscButton
    {
        idc = 1613;
        x = 0.333542 * safezoneW + safezoneX;
		y = 0.4624 * safezoneH + safezoneY;
		w = 0.029375 * safezoneW;
		h = 0.0846 * safezoneH;
        tooltip = "Volume Up | Volume Down";
        onMouseButtonDown = "[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
    };

    class edit: RscEditLCD
    {
        moving = 1;
        idc = IDC_COMMLINK_EDIT;
        x = 0.377604 * safezoneW + safezoneX;
		y = 0.3496 * safezoneH + safezoneY;
		w = 0.05875 * safezoneW;
		h = 0.0376 * safezoneH;
        canModify = 1;
        onKeyUp = QUOTE( \
            if (_this select 1 in [ARR_2(28,156)]) then { \
                [((ctrlParent (_this select 0))) displayCtrl IDC_ANPRC152_EDIT] call TFAR_handhelds_fnc_onButtonClick_Enter; \
            }; \
        );
        tooltip = "Current Channel"
    };
    class channel_edit: RscEditLCD
    {
        //text = "";
        idc = IDC_COMMLINK_CHANNEL_EDIT;
        x = 0.338437 * safezoneW + safezoneX;
		y = 0.3496 * safezoneH + safezoneY;
		w = 0.0244792 * safezoneW;
		h = 0.0376 * safezoneH;
        moving = 1;
        font = "TFAR_font_dots";
        shadow = 2;
        canModify = 0;
        tooltip = "Edit Frequency";
    };

};