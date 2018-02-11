//////////////////////////////
//    Dynamic-AI-Creator    //
//    Version 2.1 - 2009    //
//--------------------------//
//    DAC_Config_Units      //
//--------------------------//
//    Script by Silola      //
//    silola@freenet.de     //
//////////////////////////////

private ["_TypNumber","_TempArray","_Unit_Pool_S","_Unit_Pool_V","_Unit_Pool_T","_Unit_Pool_A"];
_TypNumber = _this select 0;_TempArray = [];

switch (_TypNumber) do
{
//-------------------------------------------------------------------------------------------------
// First three units in Pool S must be Crewman, Pilot, Leader. Place units more often if you wish for them to appear more often.
// AA is automatically disabled. 
// CSAT
  case 0:
  {
    _Unit_Pool_S = ["O_crew_F","O_Helipilot_F","O_Soldier_SL_F","O_soldier_AR_F","O_soldier_AR_F","O_soldier_exp_F","O_soldier_GL_F","O_soldier_GL_F","O_soldier_M_F","O_medic_F","O_soldier_repair_F","O_Soldier_F","O_Soldier_F","O_soldier_LAT_F","O_soldier_LAT_F","O_soldier_lite_F","O_soldier_TL_F","O_soldier_TL_F"];
    _Unit_Pool_V = ["O_MRAP_02_F","O_MRAP_02_gmg_F","O_MRAP_02_hmg_F"];
    _Unit_Pool_T = ["O_MBT_02_arty_F","I_APC_Wheeled_03_cannon_F","O_APC_Tracked_02_cannon_F","O_APC_Wheeled_02_rcws_F","O_MBT_02_cannon_F"];
  _Unit_Pool_A = ["O_Heli_Attack_02_F","O_Heli_Light_02_F","O_Heli_Light_02_armed_F"];
  };
//-------------------------------------------------------------------------------------------------
// NATO
  case 1:
  {
    _Unit_Pool_S = ["B_crew_F","B_Helipilot_F","B_Soldier_SL_F","B_soldier_AR_F","B_soldier_AR_F","B_soldier_exp_F","B_soldier_GL_F","B_soldier_GL_F","B_soldier_M_F","B_medic_F","B_soldier_repair_F","B_Soldier_F","B_Soldier_F","B_soldier_LAT_F","B_soldier_LAT_F","B_soldier_lite_F","B_soldier_TL_F","B_soldier_TL_F"];
    _Unit_Pool_V = ["B_MRAP_01_F","B_MRAP_01_gmg_F","B_MRAP_01_hmg_F"];
    _Unit_Pool_T = ["B_APC_Wheeled_01_cannon_F","B_APC_Tracked_01_rcws_F","B_MBT_01_cannon_F","B_MBT_01_arty_F","B_MBT_01_mlrs_F"];
    _Unit_Pool_A = ["B_Heli_Light_01_armed_F","B_Heli_Transport_01_camo_F","B_Heli_Light_01_F"];
  };
//-------------------------------------------------------------------------------------------------
// AAF
  case 2:
  {
    _Unit_Pool_S = ["I_crew_F","I_helipilot_F","I_officer_F","I_Soldier_LAT_F","I_Soldier_LAT_F","I_Soldier_M_F","I_Soldier_GL_F","I_Soldier_exp_F","I_engineer_F","I_medic_F","I_Soldier_AR_F","I_Soldier_A_F"];
    _Unit_Pool_V = ["I_Truck_02_covered_F","I_Truck_02_transport_F","I_MRAP_03_hmg_F","I_MRAP_03_gmg_F","I_MRAP_03_F"];
    _Unit_Pool_T = ["I_MBT_03_cannon_F","I_APC_tracked_03_cannon_F","I_APC_Wheeled_03_cannon_F"];
    _Unit_Pool_A = ["I_Heli_light_03_F"];
  };
//-------------------------------------------------------------------------------------------------
// Civilians
  case 3:
  {
    _Unit_Pool_S = ["C_man_1","C_man_1","C_man_1","C_man_polo_1_F","C_man_polo_2_F","C_man_polo_3_F","C_man_polo_4_F","C_man_polo_5_F","C_man_polo_6_F","C_man_1_1_F","C_man_1_2_F","C_man_1_3_F"];
    _Unit_Pool_V = ["C_Van_01_box_F","C_Van_01_transport_F","C_Offroad_01_F","C_Hatchback_01_sport_F","C_Hatchback_01_F"];
    _Unit_Pool_T = ["C_Van_01_box_F","C_Van_01_transport_F","C_Offroad_01_F","C_Hatchback_01_sport_F","C_Hatchback_01_F"];
    _Unit_Pool_A = [];
  };
  //-------------------------------------------------------------------------------------------------
    // FIA
  case 4:
  {
    _Unit_Pool_S = ["B_G_engineer_F","B_G_medic_F","B_G_officer_F","B_G_Soldier_A_F","B_G_Soldier_AR_F","B_G_Soldier_exp_F","B_G_Soldier_F","B_G_Soldier_GL_F","B_G_Soldier_LAT_F","B_G_Soldier_lite_F","B_G_Soldier_M_F","B_G_Soldier_SL_F","B_G_Soldier_TL_F"];
    _Unit_Pool_V = ["B_G_Offroad_01_F","B_G_Offroad_01_armed_F","B_G_Van_01_transport_F","B_G_Van_01_fuel_F"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// RHS Russian MSV (Flora Camo)
  case 5:
  {
    _Unit_Pool_S = ["rhs_msv_crew","rhs_pilot_combat_heli","rhs_msv_officer","rhs_msv_machinegunner","rhs_msv_machinegunner","rhs_msv_grenadier","rhs_msv_grenadier","rhs_msv_medic","rhs_msv_rifleman","rhs_msv_rifleman","rhs_msv_LAT","rhs_msv_LAT","rhs_msv_sergeant","rhs_msv_sergeant"];
    _Unit_Pool_V = ["rhs_tigr_msv","RHS_Ural_msv_01","RHS_Ural_Open_msv_01"];
    _Unit_Pool_T = ["rhs_btr80_msv"];
	_Unit_Pool_A = ["RHS_Mi24P_vvsc","RHS_Mi8mt_vvsc","RHS_Mi8AMTSh_vvsc"];
  };
//-------------------------------------------------------------------------------------------------
// RHS US Army (Woodland Camo)
  case 6:
  {
    _Unit_Pool_S = ["rhsusf_army_ocp_crewman","rhsusf_army_ocp_helipilot","rhsusf_army_ocp_squadleader","rhsusf_army_ocp_autorifleman","rhsusf_army_ocp_autorifleman","rhsusf_army_ocp_medic","rhsusf_army_ocp_grenadier","rhsusf_army_ocp_grenadier","rhsusf_army_ocp_rifleman","rhsusf_army_ocp_medic","rhsusf_army_ocp_engineer","rhsusf_army_ocp_rifleman","rhsusf_army_ocp_rifleman","rhsusf_army_ocp_riflemanat","rhsusf_army_ocp_riflemanat","rhsusf_army_ocp_riflemanl","rhsusf_army_ocp_teamleader","rhsusf_army_ocp_teamleader"];
    _Unit_Pool_V = ["rhsusf_m998_w_2dr_fulltop","rhsusf_m998_w_2dr_halftop","rhsusf_m998_w_2dr"];
    _Unit_Pool_T = ["rhsusf_m113_usarmy","RHS_M2A2_wd","RHS_M2A2_BUSKI_WD","RHS_M2A3_BUSKIII_wd","rhsusf_m1a2sep1tuskiwd_usarmy","rhsusf_m109_usarmy"];
    _Unit_Pool_A = ["RHS_UH60M","RHS_UH60M_MEV","RHS_AH64D_wd"];
  };
//-------------------------------------------------------------------------------------------------
// RHS Russian VDV (EMR Summer Camo)
  case 7:
  {
    _Unit_Pool_S = ["rhs_vdv_crew","rhs_pilot","rhs_vdv_sergeant","rhs_vdv_machinegunner","rhs_vdv_machinegunner","rhs_vdv_medic","rhs_vdv_grenadier","rhs_vdv_grenadier","rhs_vdv_rifleman","rhs_vdv_medic","rhs_vdv_engineer","rhs_vdv_rifleman","rhs_vdv_rifleman","rhs_vdv_LAT","rhs_vdv_LAT","rhs_vdv_rifleman","rhs_vdv_junior_sergeant","rhs_vdv_junior_sergeant"];
    _Unit_Pool_V = ["rhs_gaz66_vdv","RHS_Ural_VDV_01","RHS_Ural_Open_VDV_01"];
    _Unit_Pool_T = ["rhs_bmd2","rhs_bmp1d_vdv","rhs_btr70_vdv","rhs_btr60_vdv","rhs_btr80_vdv","rhs_bmp2d_vdv"];
    _Unit_Pool_A = ["RHS_Mi8AMT_vdv","RHS_Mi8MTV3_vdv","RHS_Mi24V_vdv"];
  }; 
//-------------------------------------------------------------------------------------------------
// RHS Russian MSV (EMR Summer Camo)
  case 8:
  {
    _Unit_Pool_S = ["rhs_msv_emr_crew","rhs_pilot_combat_heli","rhs_msv_emr_officer","rhs_msv_emr_machinegunner","rhs_msv_emr_machinegunner","rhs_msv_emr_grenadier","rhs_msv_emr_grenadier","rhs_msv_emr_medic","rhs_msv_emr_rifleman","rhs_msv_emr_rifleman","rhs_msv_emr_LAT","rhs_msv_emr_LAT","rhs_msv_emr_sergeant","rhs_msv_emr_sergeant"];
    _Unit_Pool_V = ["rhs_tigr_msv","RHS_Ural_msv_01","RHS_Ural_Open_msv_01"];
    _Unit_Pool_T = ["rhs_btr80_msv"];
	_Unit_Pool_A = ["RHS_Mi24P_vvsc","RHS_Mi8mt_vvsc","RHS_Mi8AMTSh_vvsc"];
  };
//-------------------------------------------------------------------------------------------------
// RHS Russian VDV (Flora Camo)(The vehicles in this version are older variants, swap it out or in depending on your preference.)
  case 9:
  {
    _Unit_Pool_S = ["rhs_vdv_flora_crew","rhs_pilot","rhs_vdv_flora_sergeant","rhs_vdv_flora_machinegunner","rhs_vdv_flora_machinegunner","rhs_vdv_flora_medic","rhs_vdv_flora_grenadier","rhs_vdv_flora_grenadier","rhs_vdv_flora_rifleman","rhs_vdv_flora_medic","rhs_vdv_flora_engineer","rhs_vdv_flora_rifleman","rhs_vdv_flora_rifleman","rhs_vdv_flora_LAT","rhs_vdv_flora_LAT","rhs_vdv_flora_rifleman","rhs_vdv_flora_junior_sergeant","rhs_vdv_flora_junior_sergeant"];
    _Unit_Pool_V = ["rhs_gaz66_vdv","RHS_Ural_VDV_01","RHS_Ural_Open_VDV_01"];
    _Unit_Pool_T = ["rhs_bmp2_msv","rhs_prp3_vmf","rhs_btr60_msv","rhs_btr60_msv"];
    _Unit_Pool_A = ["RHS_Mi8mt_vdv","RHS_Mi8MTV3_vdv","RHS_Mi8mt_vdv"];
  }; 
//-------------------------------------------------------------------------------------------------
// CAF Eastern European Irregulars (No armored vehicles)
  case 10:
  {
    _Unit_Pool_S = ["CAF_AG_EEUR_R_AK47","CAF_AG_EEUR_R_AK47","CAF_AG_EEUR_R_GL","CAF_AG_EEUR_R_RPK74","CAF_AG_EEUR_R_PKM","CAF_AG_EEUR_R_AK74","CAF_AG_EEUR_R_GL","CAF_AG_EEUR_R_AK74","CAF_AG_EEUR_R_AK47","CAF_AG_EEUR_R_RPG"];
    _Unit_Pool_V = ["CAF_AG_eeur_r_van_01","CAF_AG_eeur_r_Offroad","CAF_AG_eeur_r_Offroad_armed_01"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  }; 
//-------------------------------------------------------------------------------------------------
// CAF Middle Eastern Irregulars (No armored vehicles)
  case 11:
  {
    _Unit_Pool_S = ["CAF_AG_ME_T_AK47","CAF_AG_ME_T_AK47","CAF_AG_ME_T_GL","CAF_AG_ME_T_RPK74","CAF_AG_ME_T_PKM","CAF_AG_ME_T_AK74","CAF_AG_ME_T_GL","CAF_AG_ME_T_AK74","CAF_AG_ME_T_AK47","CAF_AG_ME_T_RPG"];
    _Unit_Pool_V = ["CAF_AG_ME_T_van_01","CAF_AG_ME_T_Offroad","CAF_AG_ME_T_Offroad_armed_01"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  }; 
//-------------------------------------------------------------------------------------------------
// Isla Duala African Soviet Supplies Army (Uses RHS vehicles)
  case 12:
  {
    _Unit_Pool_S = ["ibr_mol_soldier_crew","ibr_mol_soldier_pilot","ibr_mol_soldier_sl","ibr_mol_soldier_mg","ibr_mol_soldier_medic","ibr_mol_soldier_gl","ibr_mol_soldier_rifleman","ibr_mol_soldier_rifleman","ibr_mol_soldier_ee","ibr_mol_soldier_ar","ibr_mol_soldier_rifleman","ibr_mol_soldier_at","ibr_mol_soldier_sniper","ibr_mol_soldier_ar"];
    _Unit_Pool_V = ["rhs_gaz66_vdv","RHS_Ural_VDV_01","RHS_Ural_Open_VDV_01"];
    _Unit_Pool_T = ["rhs_bmp2_msv","rhs_prp3_vmf","rhs_btr60_msv","rhs_btr60_msv"];
    _Unit_Pool_A = ["RHS_Mi8mt_vdv","RHS_Mi8MTV3_vdv","RHS_Mi8mt_vdv"];
  }; 
//-------------------------------------------------------------------------------------------------
// Isla Duala African Western Supplied Army (Uses RHS vehicles)
  case 13:
  {
    _Unit_Pool_S = ["ibr_afr_soldier_crew","ibr_afr_soldier_pilot","ibr_afr_soldier_sl","ibr_afr_soldier_mg","ibr_afr_soldier_medic","ibr_afr_soldier_gl","ibr_afr_soldier_rifleman","ibr_afr_soldier_rifleman","ibr_afr_soldier_ee","ibr_afr_soldier_ar","ibr_afr_soldier_rifleman","ibr_afr_soldier_at","ibr_afr_soldier_sniper","ibr_afr_soldier_ar"];
    _Unit_Pool_V = ["rhsusf_m1025_w_m2_10","rhsusf_M1083A1P2_B_wd_fmtv_usarmy_10","rhsusf_M1083A1P2_B_wd_fmtv_usarmy_10","rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy_10"];
    _Unit_Pool_T = ["rhsusf_m113_usarmy_10","rhsusf_m113_usarmy_10"];
    _Unit_Pool_A = ["RHS_UH1Y_UNARMED_10","RHS_UH1Y_UNARMED_10","RHS_UH1Y_10"];
  }; 
//-------------------------------------------------------------------------------------------------
// Arma 2 ChDKZ Guerillas
  case 14:
  {
    _Unit_Pool_S = ["LOP_ChDKZ_Infantry_Crewman","LOP_ChDKZ_Infantry_Pilot","LOP_ChDKZ_Infantry_SL","LOP_ChDKZ_Infantry_MG","LOP_ChDKZ_Infantry_Corpsman","LOP_ChDKZ_Infantry_TL","LOP_ChDKZ_Infantry_Rifleman","LOP_ChDKZ_Infantry_Engineer","LOP_ChDKZ_Infantry_Rifleman","LOP_ChDKZ_Infantry_Rifleman","LOP_ChDKZ_Infantry_AT","LOP_ChDKZ_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_ChDKZ_UAZ_Open","LOP_ChDKZ_UAZ","LOP_ChDKZ_Ural","LOP_ChDKZ_Ural_open"];
    _Unit_Pool_T = ["LOP_ChDKZ_BTR60","LOP_ChDKZ_BTR60","LOP_ChDKZ_BMP2"];
    _Unit_Pool_A = ["LOP_ChDKZ_Mi8MT_Cargo","LOP_ChDKZ_Mi8MT_Cargo","LOP_ChDKZ_Mi8MTV3_FAB"];
  }; 
//-------------------------------------------------------------------------------------------------
// Arma 2 Takistani Army
  case 15:
  {
    _Unit_Pool_S = ["LOP_TKA_Infantry_Crewman","LOP_TKA_Infantry_Pilot","LOP_TKA_Infantry_SL","LOP_TKA_Infantry_MG","LOP_TKA_Infantry_Corpsman","LOP_TKA_Infantry_TL","LOP_TKA_Infantry_Rifleman","LOP_TKA_Infantry_MG_Asst","LOP_TKA_Infantry_Rifleman","LOP_TKA_Infantry_Rifleman","LOP_TKA_Infantry_AT","LOP_TKA_Infantry_AT_Asst","LOP_TKA_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_TKA_UAZ_Open","LOP_TKA_UAZ","LOP_TKA_Ural","LOP_TKA_Ural_open"];
    _Unit_Pool_T = ["LOP_TKA_BTR60","LOP_TKA_BTR60","LOP_TKA_BMP2"];
    _Unit_Pool_A = ["LOP_TKA_Mi8MT_Cargo","LOP_TKA_Mi8MT_Cargo","LOP_TKA_Mi8MTV3_FAB"];
  }; 
//-------------------------------------------------------------------------------------------------
// Arma 1 Sahrani Liberation Army
  case 16:
  {
    _Unit_Pool_S = ["LOP_SLA_Infantry_Crewman","LOP_SLA_Infantry_Pilot","LOP_SLA_Infantry_SL","LOP_SLA_Infantry_MG","LOP_SLA_Infantry_Corpsman","LOP_SLA_Infantry_TL","LOP_SLA_Infantry_Rifleman","LOP_SLA_Infantry_MG_Asst","LOP_SLA_Infantry_Rifleman","LOP_SLA_Infantry_Rifleman","LOP_SLA_Infantry_AT","LOP_SLA_Infantry_AT_Asst","LOP_SLA_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_SLA_UAZ_Open","LOP_SLA_UAZ","LOP_SLA_Ural","LOP_SLA_Ural_open"];
    _Unit_Pool_T = ["LOP_SLA_BTR60","LOP_SLA_BTR60","LOP_SLA_BMP2"];
    _Unit_Pool_A = ["LOP_SLA_Mi8MT_Cargo","LOP_SLA_Mi8MT_Cargo","LOP_SLA_Mi8MTV3_FAB"];
  }; 
//-------------------------------------------------------------------------------------------------
// African Militia
  case 17:
  {
    _Unit_Pool_S = ["LOP_AFR_Driver","LOP_AFR_Driver","LOP_AFR_Infantry_SL","LOP_AFR_Infantry_MG","LOP_AFR_Infantry_Corpsman","LOP_AFR_Infantry_TL","LOP_AFR_Infantry_Rifleman","LOP_AFR_Infantry_Rifleman","LOP_AFR_Infantry_IED","LOP_AFR_Infantry_AT","LOP_AFR_Infantry_Rifleman","LOP_AFR_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_AFR_Offroad_M2","LOP_AFR_Landrover_M2","LOP_AFR_Truck","LOP_AFR_Truck"];
    _Unit_Pool_T = ["LOP_AFR_BTR60"];
    _Unit_Pool_A = [];
  }; 
//-------------------------------------------------------------------------------------------------
// Novorussians
  case 18:
  {
    _Unit_Pool_S = ["LOP_US_Infantry_Crewman","LOP_US_Infantry_Pilot","LOP_US_Infantry_SL","LOP_US_Infantry_MG","LOP_US_Infantry_Corpsman","LOP_US_Infantry_TL","LOP_US_Infantry_Rifleman","LOP_US_Infantry_MG_Asst","LOP_US_Infantry_Rifleman","LOP_US_Infantry_Rifleman","LOP_US_Infantry_AT","LOP_US_Infantry_AT_Asst","LOP_US_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_US_UAZ_Open","LOP_US_UAZ","LOP_US_Ural","LOP_US_Ural_open"];
    _Unit_Pool_T = ["LOP_US_BTR60","LOP_US_BTR60","LOP_US_BMP2"];
    _Unit_Pool_A = ["LOP_US_Mi8MT_Cargo","LOP_US_Mi8MT_Cargo","LOP_US_Mi8MTV3_FAB"];
  }; 
//-------------------------------------------------------------------------------------------------
// Afghan Militia
  case 19:
  {
    _Unit_Pool_S = ["LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_SL","LOP_AM_Infantry_AR","LOP_AM_Infantry_Corpsman","LOP_AM_Infantry_TL","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_Engineer","LOP_AM_Infantry_AT","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_AM_Offroad_M2","LOP_AM_Landrover_M2","LOP_AM_Truck","LOP_AM_Truck"];
    _Unit_Pool_T = ["LOP_AM_BTR60"];
    _Unit_Pool_A = [];
  }; 
//-------------------------------------------------------------------------------------------------
// ISIS
  case 20:
  {
    _Unit_Pool_S = ["LOP_ISTS_Infantry_Rifleman","LOP_ISTS_Infantry_Rifleman","LOP_ISTS_Infantry_SL","LOP_ISTS_Infantry_AR","LOP_ISTS_Infantry_Corpsman","LOP_ISTS_Infantry_TL","LOP_ISTS_Infantry_Rifleman","LOP_ISTS_Infantry_Rifleman","LOP_ISTS_Infantry_Engineer","LOP_ISTS_Infantry_AT","LOP_ISTS_Infantry_Rifleman","LOP_ISTS_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_ISTS_Offroad_M2","LOP_ISTS_Landrover_M2","LOP_ISTS_Truck","LOP_ISTS_Truck"];
    _Unit_Pool_T = ["LOP_ISTS_BTR60"];
    _Unit_Pool_A = [];
  }; 
//-------------------------------------------------------------------------------------------------
// Arma 1 Royal Army Corps of Sahrani
  case 21:
  {
    _Unit_Pool_S = ["LOP_RACS_Infantry_Crewman","LOP_RACS_Infantry_Pilot","LOP_RACS_Infantry_SL","LOP_RACS_Infantry_MG","LOP_RACS_Infantry_Corpsman","LOP_RACS_Infantry_TL","LOP_RACS_Infantry_Rifleman","LOP_RACS_Infantry_MG_Asst","LOP_RACS_Infantry_Rifleman","LOP_RACS_Infantry_Rifleman","LOP_RACS_Infantry_AT","LOP_RACS_Infantry_AT_Asst","LOP_RACS_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_RACS_Offroad_M2","LOP_RACS_Landrover_M2","LOP_RACS_Truck","LOP_RACS_Truck"];
    _Unit_Pool_T = ["LOP_RACS_M113_W"];
    _Unit_Pool_A = ["LOP_RACS_UH60M"];
  }; 
//-------------------------------------------------------------------------------------------------
// Ultranationalists
  case 22:
  {
    _Unit_Pool_S = ["LOP_UA_Infantry_Crewman","LOP_UA_Infantry_Pilot","LOP_UA_Infantry_SL","LOP_UA_Infantry_MG","LOP_UA_Infantry_Corpsman","LOP_UA_Infantry_TL","LOP_UA_Infantry_Rifleman","LOP_UA_Infantry_MG_Asst","LOP_UA_Infantry_Rifleman","LOP_UA_Infantry_Rifleman","LOP_UA_Infantry_AT","LOP_UA_Infantry_AT_Asst","LOP_UA_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_UA_UAZ","LOP_UA_Ural_open","LOP_UA_Ural"];
    _Unit_Pool_T = ["LOP_UA_BMP2"];
    _Unit_Pool_A = ["LOP_UA_Mi8MT_Cargo","LOP_UA_Mi8MT_Cargo","LOP_UA_Mi8MTV3_FAB"];
  }; 
//-------------------------------------------------------------------------------------------------
// Arma 2 NAPA Guerillas
  case 23:
  {
    _Unit_Pool_S = ["LOP_NAPA_Infantry_Rifleman","LOP_NAPA_Infantry_Rifleman","LOP_NAPA_Infantry_SL","LOP_NAPA_Infantry_AR","LOP_NAPA_Infantry_Corpsman","LOP_NAPA_Infantry_TL","LOP_NAPA_Infantry_Rifleman","LOP_NAPA_Infantry_Rifleman","LOP_NAPA_Infantry_Engineer","LOP_NAPA_Infantry_AT","LOP_NAPA_Infantry_Rifleman","LOP_NAPA_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_NAPA_Offroad_M2","LOP_NAPA_Landrover_M2","LOP_NAPA_Truck","LOP_NAPA_Truck"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  }; 
//-------------------------------------------------------------------------------------------------
// United Nations (Urals are buggy sometimes, may want to remove/swap them out)
  case 24:
  {
    _Unit_Pool_S = ["LOP_UN_Infantry_Crewman","LOP_UN_Infantry_Pilot","LOP_UN_Infantry_SL","LOP_UN_Infantry_MG","LOP_UN_Infantry_Corpsman","LOP_UN_Infantry_TL","LOP_UN_Infantry_Rifleman","LOP_UN_Infantry_MG_Asst","LOP_UN_Infantry_Rifleman","LOP_UN_Infantry_Rifleman","LOP_UN_Infantry_AT","LOP_UN_Infantry_AT_Asst","LOP_UN_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_UN_UAZ","LOP_UN_Ural_open","LOP_UN_Ural"];
    _Unit_Pool_T = ["LOP_UN_BMP2","LOP_UN_BTR60","LOP_UN_BTR60"];
    _Unit_Pool_A = ["LOP_UN_Mi8MT_Cargo","LOP_UN_Mi8MT_Cargo","LOP_UN_Mi8MTV3_FAB"];
  }; 
//-------------------------------------------------------------------------------------------------
// Arma 2 Chernarussian Defence Force
  case 25:
  {
    _Unit_Pool_S = ["LOP_CDF_Infantry_Crewman","LOP_CDF_Infantry_Pilot","LOP_CDF_Infantry_SL","LOP_CDF_Infantry_MG","LOP_CDF_Infantry_Corpsman","LOP_CDF_Infantry_TL","LOP_CDF_Infantry_Rifleman","LOP_CDF_Infantry_MG_Asst","LOP_CDF_Infantry_Rifleman","LOP_CDF_Infantry_Rifleman","LOP_CDF_Infantry_AT","LOP_CDF_Infantry_AT_Asst","LOP_CDF_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_CDF_UAZ","LOP_CDF_Ural_open","LOP_CDF_Ural"];
    _Unit_Pool_T = ["LOP_CDF_BMP2","LOP_CDF_BTR70","LOP_CDF_BTR60"];
    _Unit_Pool_A = ["LOP_CDF_Mi8MT_Cargo","LOP_CDF_Mi8MT_Cargo","LOP_CDF_Mi8MTV3_FAB"];
  }; 
//-------------------------------------------------------------------------------------------------
// Afghan National Army
  case 26:
  {
    _Unit_Pool_S = ["LOP_AA_Infantry_Crewman","LOP_AA_Infantry_Pilot","LOP_AA_Infantry_SL","LOP_AA_Infantry_MG","LOP_AA_Infantry_Corpsman","LOP_AA_Infantry_TL","LOP_AA_Infantry_Rifleman","LOP_AA_Infantry_MG_Asst","LOP_AA_Infantry_Rifleman","LOP_AA_Infantry_Rifleman","LOP_AA_Infantry_AT","LOP_AA_Infantry_AT_Asst","LOP_AA_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_AA_M1025_W_M2","LOP_AA_Offroad_M2","LOP_AA_Truck"];
    _Unit_Pool_T = ["LOP_AA_M113_W"];
    _Unit_Pool_A = [];
  }; 
//-------------------------------------------------------------------------------------------------
// Afghan Police
  case 27:
  {
    _Unit_Pool_S = ["LOP_AA_Police_Rifleman","LOP_AA_Police_Rifleman","LOP_AA_Police_SL","LOP_AA_Police_MG","LOP_AA_Police_Corpsman","LOP_AA_Police_TL","LOP_AA_Police_Rifleman","LOP_AA_Police_Rifleman","LOP_AA_Police_Rifleman"];
    _Unit_Pool_V = ["LOP_AA_Offroad_M2_Police","LOP_AA_Offroad_Police","LOP_AA_Truck"];
    _Unit_Pool_T = ["LOP_AA_M113_W"];
    _Unit_Pool_A = [];
  }; 
//-------------------------------------------------------------------------------------------------
// Iraqi Army (Post-Saddam)
  case 28:
  {
    _Unit_Pool_S = ["LOP_IA_Infantry_Crewman","LOP_IA_Infantry_Pilot","LOP_IA_Infantry_SL","LOP_IA_Infantry_MG","LOP_IA_Infantry_Corpsman","LOP_IA_Infantry_TL","LOP_IA_Infantry_Rifleman","LOP_IA_Infantry_MG_Asst","LOP_IA_Infantry_Rifleman","LOP_IA_Infantry_Rifleman","LOP_IA_Infantry_AT","LOP_IA_Infantry_AT_Asst","LOP_IA_Infantry_Marksman"];
    _Unit_Pool_V = ["LOP_IA_M1025_W_M2","LOP_IA_Offroad_M2","LOP_IA_HEMTT_Covered_D"];
    _Unit_Pool_T = ["LOP_IA_M113_W","LOP_IA_BMP2"];
    _Unit_Pool_A = [];
  }; 
//-------------------------------------------------------------------------------------------------

  Default
  {
    if(DAC_Basic_Value != 5) then
    {
      DAC_Basic_Value = 5;publicvariable "DAC_Basic_Value",
      hintc "Error: DAC_Config_Units > No valid config number";
    };
    if(true) exitwith {};
  };
};

if(count _this == 2) then
{
  _TempArray = _TempArray + [_Unit_Pool_S,_Unit_Pool_V,_Unit_Pool_T,_Unit_Pool_A];
}
else
{
  _TempArray = _Unit_Pool_V + _Unit_Pool_T + _Unit_Pool_A;
};
_TempArray