class hc_lr_radio_dialog
{
    idd = 9990;
    movingEnable = 1;
    controlsBackground[] = { };
    objects[] = { };
    onUnload = "['OnRadioOpen', [player, TF_sw_dialog_radio, false, 'anprc152_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;";
    //onLoad = QUOTE(if (sunOrMoon < 0.2) then {((_this select 0) displayCtrl TF_IDD_BACKGROUND) ctrlSetText 'PATHTOF(anprc152\ui\152_n.paa)';};);
    controls[]= {
        background,
        volume_Switch,
        next_channel,
        prev_channel,
        clear,
        stereo,
        additional,
        speakers,
        enter,
        channel_01,
        channel_02,
        channel_03,
        channel_04,
        channel_05,
        channel_06,
        channel_07,
        channel_08,
        channel_09,
        channel_edit,
        edit
    };
    class background: RscBackPicture
    {
        idc = 1200;
        moving = 1;
        text = "hclr\ui\hclr.paa";
        x = 0.304167 * safezoneW + safezoneX;
        y = 0.265 * safezoneH + safezoneY;
        w = 0.391667 * safezoneW;
        h = 0.47 * safezoneH;
    };
    class volume_Switch: HiddenRotator
    {
        idc = 1600;
        x = 0.32375 * safezoneW + safezoneX;
        y = 0.5094 * safezoneH + safezoneY;
        w = 0.0391667 * safezoneW;
        h = 0.1692 * safezoneH;
        tooltip = "Volume";
        onMouseButtonDown = "[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
    };
    class next_channel: HiddenButton
    {
        idc = 1601;
        x = 0.402083 * safezoneW + safezoneX;
        y = 0.5094 * safezoneH + safezoneY;
        w = 0.0391667 * safezoneW;
        h = 0.0564 * safezoneH;
        tooltip = "Next Channel";
        action = "[1, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class prev_channel: HiddenButton
    {
        idc = 1602;
        x = 0.402083 * safezoneW + safezoneX;
        y = 0.6222 * safezoneH + safezoneY;
        w = 0.0391667 * safezoneW;
        h = 0.0564 * safezoneH;
        tooltip = "Previous Channel";
        action = "[0, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class clear: HiddenButton
    {
        idc = 1603;
        x = 0.480417 * safezoneW + safezoneX;
        y = 0.5094 * safezoneH + safezoneY;
        w = 0.0391667 * safezoneW;
        h = 0.0564 * safezoneH;
        tooltip = "Clear";
        action = "ctrlSetText [ARR_2(2501, '')]; ctrlSetFocus ((findDisplay 9990) displayCtrl 2501);"
        
    };
    class stereo: HiddenButton
    {
        idc = 1604;
        x = 0.480417 * safezoneW + safezoneX;
        y = 0.6222 * safezoneH + safezoneY;
        w = 0.0391667 * safezoneW;
        h = 0.0564 * safezoneH;
        action = "[ARR_2(TF_sw_dialog_radio, ((TF_sw_dialog_radio call TFAR_fnc_getCurrentSwStereo) + 1) mod TFAR_MAX_STEREO)] call TFAR_fnc_setSwStereo; [TF_sw_dialog_radio] call TFAR_fnc_showRadioVolume;"
        tooltip = "Stereo";
    };
    class additional: HiddenButton
    {
        idc = 1605;
        x = 0.55875 * safezoneW + safezoneX;
        y = 0.6222 * safezoneH + safezoneY;
        w = 0.0391667 * safezoneW;
        h = 0.0564 * safezoneH;
         tooltip = "Set Additional";
        action = "[TF_sw_dialog_radio, TF_sw_dialog_radio call TFAR_fnc_getSwChannel] call TFAR_fnc_setAdditionalSwChannel; call TFAR_fnc_updateSWDialogToChannel; [TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
    };
    class speakers: HiddenButton
    {
        idc = 1606;
        x = 0.637083 * safezoneW + safezoneX;
        y = 0.6222 * safezoneH + safezoneY;
        w = 0.0391667 * safezoneW;
        h = 0.0564 * safezoneH;
        tooltip = "Speaker";
        action = "[TF_sw_dialog_radio] call TFAR_fnc_setSwSpeakers;[TF_sw_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
    };
    class enter: HiddenButton
    {
        idc = 1607;
        x = 0.55875 * safezoneW + safezoneX;
        y = 0.5094 * safezoneH + safezoneY;
        w = 0.1175 * safezoneW;
        h = 0.0564 * safezoneH;
        tooltip = "enter";
        onButtonClick = "[((ctrlParent (_this select 0))) displayCtrl 2501] call TFAR_backpacks_fnc_onButtonClick_Enter;"
        action = "";
    };
    class channel_01: HiddenButton
    {
        idc = 1608;
        x = 0.568542 * safezoneW + safezoneX;
        y = 0.3214 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        action = "[TF_lr_dialog_radio, 0] call TFAR_fnc_setLrChannel;[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "1";
    };
    class channel_02: HiddenButton
    {
        idc = 1609;
        x = 0.607708 * safezoneW + safezoneX;
        y = 0.3214 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        action = "[TF_lr_dialog_radio, 1] call TFAR_fnc_setLrChannel;[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "2";
    };
    class channel_03: HiddenButton
    {
        idc = 1610;
        x = 0.646875 * safezoneW + safezoneX;
        y = 0.3214 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        action = "[TF_lr_dialog_radio, 2] call TFAR_fnc_setLrChannel;[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "3";
    };
    class channel_04: HiddenButton
    {
        idc = 1611;
        x = 0.568542 * safezoneW + safezoneX;
        y = 0.3778 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        action = "[TF_lr_dialog_radio, 3] call TFAR_fnc_setLrChannel;[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "4";
    };
    class channel_05: HiddenButton
    {
        idc = 1612;
        x = 0.607708 * safezoneW + safezoneX;
        y = 0.3778 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        action = "[TF_lr_dialog_radio, 4] call TFAR_fnc_setLrChannel;[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "5";
    };
    class channel_06: HiddenButton
    {
        idc = 1613;
        x = 0.646875 * safezoneW + safezoneX;
        y = 0.3778 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        action = "[TF_lr_dialog_radio, 5] call TFAR_fnc_setLrChannel;[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "6";
    };
    class channel_07: HiddenButton
    {
        idc = 1614;
        x = 0.568542 * safezoneW + safezoneX;
        y = 0.4342 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        action = "[TF_lr_dialog_radio, 6] call TFAR_fnc_setLrChannel;[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "6";
    };
    class channel_08: HiddenButton
    {
        idc = 1615;
        x = 0.607708 * safezoneW + safezoneX;
        y = 0.4342 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        action = "[TF_lr_dialog_radio, 7] call TFAR_fnc_setLrChannel;[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "7";
    };
    class channel_09: HiddenButton
    {
        idc = 1616;
        x = 0.646875 * safezoneW + safezoneX;
        y = 0.4342 * safezoneH + safezoneY;
        w = 0.0195833 * safezoneW;
        h = 0.0376 * safezoneH;
        action = "[TF_lr_dialog_radio, 8] call TFAR_fnc_setLrChannel;[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "8";
    };
    class channel_edit: RscEditLCD
    {
        idc = 2500;
        x = 0.333542 * safezoneW + safezoneX;
        y = 0.359 * safezoneH + safezoneY;
        w = 0.05875 * safezoneW;
        h = 0.0752 * safezoneH;
        colorBackground[] = {0,0,0,0};
        colorText[] = {1,0.5,0,1};
        font = "TFAR_font_segments";
        shadow = 1;
        sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 32) * 1.2)";
        tooltip = "Current Channel";
        canModify = 0;
    };
    
    class edit: RscEditLCD
    {
        idc = 2501;
        x = 0.402083 * safezoneW + safezoneX;
        y = 0.359 * safezoneH + safezoneY;
        w = 0.122396 * safezoneW;
        h = 0.0752 * safezoneH;
        colorBackground[] = {0,0,0,0};
        colorText[] = {1,0.5,0,1};
        font = "TFAR_font_segments";
        shadow = 1;
        sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 32) * 1.2)";
        tooltip = "Change Frequency";
        canModify = 1;
        onKeyUp ="if (_this select 1 in [ARR_2(28,156)]) then {[((ctrlParent (_this select 0))) displayCtrl 2501] call TFAR_backpacks_fnc_onButtonClick_Enter;}"
    };
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

