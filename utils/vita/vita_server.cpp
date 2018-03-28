#include "vita_defs.h"
#include "precompiled.h"

extern "C"
{

void GiveFnptrsToDll( enginefuncs_t *pengfuncsFromEngine, globalvars_t *pGlobals );
int GetEntityAPI( DLL_FUNCTIONS *pFunctionTable, int interfaceVersion );
// int GetEntityAPI2( DLL_FUNCTIONS *pFunctionTable, int *interfaceVersion );
int GetNewDLLFunctions( NEW_DLL_FUNCTIONS *pFunctionTable, int *interfaceVersion );
int Server_GetBlendingInterface( int version, struct sv_blending_interface_s **ppinterface, struct engine_studio_api_s *pstudio, float *rotationmatrix, float *bonetransform );
void item_airtank( entvars_t *pev );
void ammo_9mm( entvars_t *pev );
void ammo_buckshot( entvars_t *pev );
void ammo_556nato( entvars_t *pev );
void ammo_556natobox( entvars_t *pev );
void ammo_762nato( entvars_t *pev );
void ammo_45acp( entvars_t *pev );
void ammo_50ae( entvars_t *pev );
void ammo_338magnum( entvars_t *pev );
void ammo_57mm( entvars_t *pev );
void ammo_357sig( entvars_t *pev );
void func_wall( entvars_t *pev );
void func_wall_toggle( entvars_t *pev );
void func_conveyor( entvars_t *pev );
void func_illusionary( entvars_t *pev );
void func_monsterclip( entvars_t *pev );
void func_rotating( entvars_t *pev );
void func_pendulum( entvars_t *pev );
void env_global( entvars_t *pev );
void multisource( entvars_t *pev );
void func_button( entvars_t *pev );
void func_rot_button( entvars_t *pev );
void momentary_rot_button( entvars_t *pev );
void env_spark( entvars_t *pev );
void env_debris( entvars_t *pev );
void button_target( entvars_t *pev );
void func_door( entvars_t *pev );
void func_water( entvars_t *pev );
void func_door_rotating( entvars_t *pev );
void momentary_door( entvars_t *pev );
void info_target( entvars_t *pev );
void env_bubbles( entvars_t *pev );
void beam( entvars_t *pev );
void env_lightning( entvars_t *pev );
void env_beam( entvars_t *pev );
void env_laser( entvars_t *pev );
void env_glow( entvars_t *pev );
void env_bombglow( entvars_t *pev );
void env_sprite( entvars_t *pev );
void gibshooter( entvars_t *pev );
void env_shooter( entvars_t *pev );
void test_effect( entvars_t *pev );
void env_blood( entvars_t *pev );
void env_shake( entvars_t *pev );
void env_fade( entvars_t *pev );
void env_message( entvars_t *pev );
void env_funnel( entvars_t *pev );
void env_beverage( entvars_t *pev );
void item_sodacan( entvars_t *pev );
void spark_shower( entvars_t *pev );
void env_explosion( entvars_t *pev );
void func_breakable( entvars_t *pev );
void func_pushable( entvars_t *pev );
void func_tank( entvars_t *pev );
void func_tanklaser( entvars_t *pev );
void func_tankrocket( entvars_t *pev );
void func_tankmortar( entvars_t *pev );
void func_tankcontrols( entvars_t *pev );
void grenade( entvars_t *pev );
void item_healthkit( entvars_t *pev );
void func_healthcharger( entvars_t *pev );
void func_recharge( entvars_t *pev );
void cycler( entvars_t *pev );
void cycler_prdroid( entvars_t *pev );
void cycler_sprite( entvars_t *pev );
void cycler_weapon( entvars_t *pev );
void cycler_wreckage( entvars_t *pev );
void world_items( entvars_t *pev );
void item_suit( entvars_t *pev );
void item_battery( entvars_t *pev );
void item_antidote( entvars_t *pev );
void item_security( entvars_t *pev );
void item_longjump( entvars_t *pev );
void item_kevlar( entvars_t *pev );
void item_assaultsuit( entvars_t *pev );
void item_thighpack( entvars_t *pev );
void light( entvars_t *pev );
void light_spot( entvars_t *pev );
void light_environment( entvars_t *pev );
void game_score( entvars_t *pev );
void game_end( entvars_t *pev );
void game_text( entvars_t *pev );
void game_team_master( entvars_t *pev );
void game_team_set( entvars_t *pev );
void game_zone_player( entvars_t *pev );
void game_player_hurt( entvars_t *pev );
void game_counter( entvars_t *pev );
void game_counter_set( entvars_t *pev );
void game_player_equip( entvars_t *pev );
void game_player_team( entvars_t *pev );
void func_mortar_field( entvars_t *pev );
void monster_mortar( entvars_t *pev );
void info_map_parameters( entvars_t *pev );
void path_corner( entvars_t *pev );
void path_track( entvars_t *pev );
void func_plat( entvars_t *pev );
void func_platrot( entvars_t *pev );
void func_train( entvars_t *pev );
void func_tracktrain( entvars_t *pev );
void func_traincontrols( entvars_t *pev );
void func_trackchange( entvars_t *pev );
void func_trackautochange( entvars_t *pev );
void func_guntarget( entvars_t *pev );
void player( entvars_t *pev );
void weapon_shield( entvars_t *pev );
void monster_hevsuit_dead( entvars_t *pev );
void player_weaponstrip( entvars_t *pev );
void player_loadsaved( entvars_t *pev );
void info_intermission( entvars_t *pev );
void ambient_generic( entvars_t *pev );
void env_sound( entvars_t *pev );
void speaker( entvars_t *pev );
void soundent( entvars_t *pev );
void info_null( entvars_t *pev );
void info_player_deathmatch( entvars_t *pev );
void info_player_start( entvars_t *pev );
void info_vip_start( entvars_t *pev );
void info_landmark( entvars_t *pev );
void info_hostage_rescue( entvars_t *pev );
void info_bomb_target( entvars_t *pev );
void DelayedUse( entvars_t *pev );
void func_grencatch( entvars_t *pev );
void func_weaponcheck( entvars_t *pev );
void func_friction( entvars_t *pev );
void trigger_auto( entvars_t *pev );
void trigger_relay( entvars_t *pev );
void multi_manager( entvars_t *pev );
void env_render( entvars_t *pev );
void trigger( entvars_t *pev );
void trigger_hurt( entvars_t *pev );
void trigger_monsterjump( entvars_t *pev );
void trigger_cdaudio( entvars_t *pev );
void target_cdaudio( entvars_t *pev );
void trigger_multiple( entvars_t *pev );
void trigger_once( entvars_t *pev );
void trigger_counter( entvars_t *pev );
void trigger_transition( entvars_t *pev );
void fireanddie( entvars_t *pev );
void trigger_changelevel( entvars_t *pev );
void func_ladder( entvars_t *pev );
void trigger_push( entvars_t *pev );
void trigger_teleport( entvars_t *pev );
void info_teleport_destination( entvars_t *pev );
void func_buyzone( entvars_t *pev );
void func_bomb_target( entvars_t *pev );
void func_hostage_rescue( entvars_t *pev );
void func_escapezone( entvars_t *pev );
void func_vip_safetyzone( entvars_t *pev );
void trigger_autosave( entvars_t *pev );
void trigger_endsection( entvars_t *pev );
void trigger_gravity( entvars_t *pev );
void trigger_changetarget( entvars_t *pev );
void trigger_camera( entvars_t *pev );
void env_snow( entvars_t *pev );
void func_snow( entvars_t *pev );
void env_rain( entvars_t *pev );
void func_rain( entvars_t *pev );
void env_fog( entvars_t *pev );
void func_vehicle( entvars_t *pev );
void func_vehiclecontrols( entvars_t *pev );
void weaponbox( entvars_t *pev );
void armoury_entity( entvars_t *pev );
void infodecal( entvars_t *pev );
void bodyque( entvars_t *pev );
void worldspawn( entvars_t *pev );
void hostage_entity( entvars_t *pev );
void monster_scientist( entvars_t *pev );
void weapon_ak47( entvars_t *pev );
void weapon_aug( entvars_t *pev );
void weapon_awp( entvars_t *pev );
void weapon_c4( entvars_t *pev );
void weapon_deagle( entvars_t *pev );
void weapon_elite( entvars_t *pev );
void weapon_famas( entvars_t *pev );
void weapon_fiveseven( entvars_t *pev );
void weapon_flashbang( entvars_t *pev );
void weapon_g3sg1( entvars_t *pev );
void weapon_galil( entvars_t *pev );
void weapon_glock18( entvars_t *pev );
void weapon_hegrenade( entvars_t *pev );
void weapon_knife( entvars_t *pev );
void weapon_m249( entvars_t *pev );
void weapon_m3( entvars_t *pev );
void weapon_m4a1( entvars_t *pev );
void weapon_mac10( entvars_t *pev );
void weapon_mp5navy( entvars_t *pev );
void weapon_p228( entvars_t *pev );
void weapon_p90( entvars_t *pev );
void weapon_scout( entvars_t *pev );
void weapon_sg550( entvars_t *pev );
void weapon_sg552( entvars_t *pev );
void weapon_smokegrenade( entvars_t *pev );
void weapon_tmp( entvars_t *pev );
void weapon_ump45( entvars_t *pev );
void weapon_usp( entvars_t *pev );
void weapon_xm1014( entvars_t *pev );

dllexport_t vita_exports[] =
{
	{ "GiveFnptrsToDll", (void*)GiveFnptrsToDll },
	{ "GetEntityAPI", (void*)GetEntityAPI },
	// { "GetEntityAPI2", (void*)GetEntityAPI2 },
	{ "GetNewDLLFunctions", (void*)GetNewDLLFunctions },
	{ "Server_GetBlendingInterface", (void*)Server_GetBlendingInterface },
// entity exports, generated by genexports.py
	{ "item_airtank", (void*)item_airtank },
	{ "ammo_9mm", (void*)ammo_9mm },
	{ "ammo_buckshot", (void*)ammo_buckshot },
	{ "ammo_556nato", (void*)ammo_556nato },
	{ "ammo_556natobox", (void*)ammo_556natobox },
	{ "ammo_762nato", (void*)ammo_762nato },
	{ "ammo_45acp", (void*)ammo_45acp },
	{ "ammo_50ae", (void*)ammo_50ae },
	{ "ammo_338magnum", (void*)ammo_338magnum },
	{ "ammo_57mm", (void*)ammo_57mm },
	{ "ammo_357sig", (void*)ammo_357sig },
	{ "func_wall", (void*)func_wall },
	{ "func_wall_toggle", (void*)func_wall_toggle },
	{ "func_conveyor", (void*)func_conveyor },
	{ "func_illusionary", (void*)func_illusionary },
	{ "func_monsterclip", (void*)func_monsterclip },
	{ "func_rotating", (void*)func_rotating },
	{ "func_pendulum", (void*)func_pendulum },
	{ "env_global", (void*)env_global },
	{ "multisource", (void*)multisource },
	{ "func_button", (void*)func_button },
	{ "func_rot_button", (void*)func_rot_button },
	{ "momentary_rot_button", (void*)momentary_rot_button },
	{ "env_spark", (void*)env_spark },
	{ "env_debris", (void*)env_debris },
	{ "button_target", (void*)button_target },
	{ "func_door", (void*)func_door },
	{ "func_water", (void*)func_water },
	{ "func_door_rotating", (void*)func_door_rotating },
	{ "momentary_door", (void*)momentary_door },
	{ "info_target", (void*)info_target },
	{ "env_bubbles", (void*)env_bubbles },
	{ "beam", (void*)beam },
	{ "env_lightning", (void*)env_lightning },
	{ "env_beam", (void*)env_beam },
	{ "env_laser", (void*)env_laser },
	{ "env_glow", (void*)env_glow },
	{ "env_bombglow", (void*)env_bombglow },
	{ "env_sprite", (void*)env_sprite },
	{ "gibshooter", (void*)gibshooter },
	{ "env_shooter", (void*)env_shooter },
	{ "test_effect", (void*)test_effect },
	{ "env_blood", (void*)env_blood },
	{ "env_shake", (void*)env_shake },
	{ "env_fade", (void*)env_fade },
	{ "env_message", (void*)env_message },
	{ "env_funnel", (void*)env_funnel },
	{ "env_beverage", (void*)env_beverage },
	{ "item_sodacan", (void*)item_sodacan },
	{ "spark_shower", (void*)spark_shower },
	{ "env_explosion", (void*)env_explosion },
	{ "func_breakable", (void*)func_breakable },
	{ "func_pushable", (void*)func_pushable },
	{ "func_tank", (void*)func_tank },
	{ "func_tanklaser", (void*)func_tanklaser },
	{ "func_tankrocket", (void*)func_tankrocket },
	{ "func_tankmortar", (void*)func_tankmortar },
	{ "func_tankcontrols", (void*)func_tankcontrols },
	{ "grenade", (void*)grenade },
	{ "item_healthkit", (void*)item_healthkit },
	{ "func_healthcharger", (void*)func_healthcharger },
	{ "func_recharge", (void*)func_recharge },
	{ "cycler", (void*)cycler },
	{ "cycler_prdroid", (void*)cycler_prdroid },
	{ "cycler_sprite", (void*)cycler_sprite },
	{ "cycler_weapon", (void*)cycler_weapon },
	{ "cycler_wreckage", (void*)cycler_wreckage },
	{ "world_items", (void*)world_items },
	{ "item_suit", (void*)item_suit },
	{ "item_battery", (void*)item_battery },
	{ "item_antidote", (void*)item_antidote },
	{ "item_security", (void*)item_security },
	{ "item_longjump", (void*)item_longjump },
	{ "item_kevlar", (void*)item_kevlar },
	{ "item_assaultsuit", (void*)item_assaultsuit },
	{ "item_thighpack", (void*)item_thighpack },
	{ "light", (void*)light },
	{ "light_spot", (void*)light_spot },
	{ "light_environment", (void*)light_environment },
	{ "game_score", (void*)game_score },
	{ "game_end", (void*)game_end },
	{ "game_text", (void*)game_text },
	{ "game_team_master", (void*)game_team_master },
	{ "game_team_set", (void*)game_team_set },
	{ "game_zone_player", (void*)game_zone_player },
	{ "game_player_hurt", (void*)game_player_hurt },
	{ "game_counter", (void*)game_counter },
	{ "game_counter_set", (void*)game_counter_set },
	{ "game_player_equip", (void*)game_player_equip },
	{ "game_player_team", (void*)game_player_team },
	{ "func_mortar_field", (void*)func_mortar_field },
	{ "monster_mortar", (void*)monster_mortar },
	{ "info_map_parameters", (void*)info_map_parameters },
	{ "path_corner", (void*)path_corner },
	{ "path_track", (void*)path_track },
	{ "func_plat", (void*)func_plat },
	{ "func_platrot", (void*)func_platrot },
	{ "func_train", (void*)func_train },
	{ "func_tracktrain", (void*)func_tracktrain },
	{ "func_traincontrols", (void*)func_traincontrols },
	{ "func_trackchange", (void*)func_trackchange },
	{ "func_trackautochange", (void*)func_trackautochange },
	{ "func_guntarget", (void*)func_guntarget },
	{ "player", (void*)player },
	{ "weapon_shield", (void*)weapon_shield },
	{ "monster_hevsuit_dead", (void*)monster_hevsuit_dead },
	{ "player_weaponstrip", (void*)player_weaponstrip },
	{ "player_loadsaved", (void*)player_loadsaved },
	{ "info_intermission", (void*)info_intermission },
	{ "ambient_generic", (void*)ambient_generic },
	{ "env_sound", (void*)env_sound },
	{ "speaker", (void*)speaker },
	{ "soundent", (void*)soundent },
	{ "info_null", (void*)info_null },
	{ "info_player_deathmatch", (void*)info_player_deathmatch },
	{ "info_player_start", (void*)info_player_start },
	{ "info_vip_start", (void*)info_vip_start },
	{ "info_landmark", (void*)info_landmark },
	{ "info_hostage_rescue", (void*)info_hostage_rescue },
	{ "info_bomb_target", (void*)info_bomb_target },
	{ "DelayedUse", (void*)DelayedUse },
	{ "func_grencatch", (void*)func_grencatch },
	{ "func_weaponcheck", (void*)func_weaponcheck },
	{ "func_friction", (void*)func_friction },
	{ "trigger_auto", (void*)trigger_auto },
	{ "trigger_relay", (void*)trigger_relay },
	{ "multi_manager", (void*)multi_manager },
	{ "env_render", (void*)env_render },
	{ "trigger", (void*)trigger },
	{ "trigger_hurt", (void*)trigger_hurt },
	{ "trigger_monsterjump", (void*)trigger_monsterjump },
	{ "trigger_cdaudio", (void*)trigger_cdaudio },
	{ "target_cdaudio", (void*)target_cdaudio },
	{ "trigger_multiple", (void*)trigger_multiple },
	{ "trigger_once", (void*)trigger_once },
	{ "trigger_counter", (void*)trigger_counter },
	{ "trigger_transition", (void*)trigger_transition },
	{ "fireanddie", (void*)fireanddie },
	{ "trigger_changelevel", (void*)trigger_changelevel },
	{ "func_ladder", (void*)func_ladder },
	{ "trigger_push", (void*)trigger_push },
	{ "trigger_teleport", (void*)trigger_teleport },
	{ "info_teleport_destination", (void*)info_teleport_destination },
	{ "func_buyzone", (void*)func_buyzone },
	{ "func_bomb_target", (void*)func_bomb_target },
	{ "func_hostage_rescue", (void*)func_hostage_rescue },
	{ "func_escapezone", (void*)func_escapezone },
	{ "func_vip_safetyzone", (void*)func_vip_safetyzone },
	{ "trigger_autosave", (void*)trigger_autosave },
	{ "trigger_endsection", (void*)trigger_endsection },
	{ "trigger_gravity", (void*)trigger_gravity },
	{ "trigger_changetarget", (void*)trigger_changetarget },
	{ "trigger_camera", (void*)trigger_camera },
	{ "env_snow", (void*)env_snow },
	{ "func_snow", (void*)func_snow },
	{ "env_rain", (void*)env_rain },
	{ "func_rain", (void*)func_rain },
	{ "env_fog", (void*)env_fog },
	{ "func_vehicle", (void*)func_vehicle },
	{ "func_vehiclecontrols", (void*)func_vehiclecontrols },
	{ "weaponbox", (void*)weaponbox },
	{ "armoury_entity", (void*)armoury_entity },
	{ "infodecal", (void*)infodecal },
	{ "bodyque", (void*)bodyque },
	{ "worldspawn", (void*)worldspawn },
	{ "hostage_entity", (void*)hostage_entity },
	{ "monster_scientist", (void*)monster_scientist },
	{ "weapon_ak47", (void*)weapon_ak47 },
	{ "weapon_aug", (void*)weapon_aug },
	{ "weapon_awp", (void*)weapon_awp },
	{ "weapon_c4", (void*)weapon_c4 },
	{ "weapon_deagle", (void*)weapon_deagle },
	{ "weapon_elite", (void*)weapon_elite },
	{ "weapon_famas", (void*)weapon_famas },
	{ "weapon_fiveseven", (void*)weapon_fiveseven },
	{ "weapon_flashbang", (void*)weapon_flashbang },
	{ "weapon_g3sg1", (void*)weapon_g3sg1 },
	{ "weapon_galil", (void*)weapon_galil },
	{ "weapon_glock18", (void*)weapon_glock18 },
	{ "weapon_hegrenade", (void*)weapon_hegrenade },
	{ "weapon_knife", (void*)weapon_knife },
	{ "weapon_m249", (void*)weapon_m249 },
	{ "weapon_m3", (void*)weapon_m3 },
	{ "weapon_m4a1", (void*)weapon_m4a1 },
	{ "weapon_mac10", (void*)weapon_mac10 },
	{ "weapon_mp5navy", (void*)weapon_mp5navy },
	{ "weapon_p228", (void*)weapon_p228 },
	{ "weapon_p90", (void*)weapon_p90 },
	{ "weapon_scout", (void*)weapon_scout },
	{ "weapon_sg550", (void*)weapon_sg550 },
	{ "weapon_sg552", (void*)weapon_sg552 },
	{ "weapon_smokegrenade", (void*)weapon_smokegrenade },
	{ "weapon_tmp", (void*)weapon_tmp },
	{ "weapon_ump45", (void*)weapon_ump45 },
	{ "weapon_usp", (void*)weapon_usp },
	{ "weapon_xm1014", (void*)weapon_xm1014 },
	{ NULL, NULL },
};

}
