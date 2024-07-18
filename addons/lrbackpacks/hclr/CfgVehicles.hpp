class JMSLLTE_back_rebradio_v1_black;
class HC_Rebel_Backpack_Black: JMSLLTE_back_rebradio_v1_black
{
	author = "Queen";
	scope = 2;
    displayName = "[HC] LR Backpack";
	tf_range = 40000;
	tf_encryptionCode = "tf_east_radio_code";
	tf_dialog = "hc_lr_radio_dialog";
	tf_subtype = "digital_lr";
 	tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
};