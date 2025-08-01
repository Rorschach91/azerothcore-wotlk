/*
 * This file is part of the AzerothCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef WORLDCONFIG_H
#define WORLDCONFIG_H

#include "ConfigValueCache.h"

enum ServerConfigs
{
    CONFIG_DURABILITY_LOSS_IN_PVP = 0,
    CONFIG_ADDON_CHANNEL,
    CONFIG_ALLOW_PLAYER_COMMANDS,
    CONFIG_CLEAN_CHARACTER_DB,
    CONFIG_STATS_SAVE_ONLY_ON_LOGOUT,
    CONFIG_ALLOW_TWO_SIDE_ACCOUNTS,
    CONFIG_ALLOW_TWO_SIDE_INTERACTION_CALENDAR,
    CONFIG_ALLOW_TWO_SIDE_INTERACTION_CHAT,
    CONFIG_ALLOW_TWO_SIDE_INTERACTION_CHANNEL,
    CONFIG_ALLOW_TWO_SIDE_INTERACTION_GROUP,
    CONFIG_ALLOW_TWO_SIDE_INTERACTION_GUILD,
    CONFIG_ALLOW_TWO_SIDE_INTERACTION_ARENA,
    CONFIG_ALLOW_TWO_SIDE_INTERACTION_AUCTION,
    CONFIG_ALLOW_TWO_SIDE_INTERACTION_MAIL,
    CONFIG_ALLOW_TWO_SIDE_WHO_LIST,
    CONFIG_ALLOW_TWO_SIDE_ADD_FRIEND,
    CONFIG_ALLOW_TWO_SIDE_TRADE,
    CONFIG_ALL_TAXI_PATHS,
    CONFIG_INSTANCE_IGNORE_LEVEL,
    CONFIG_INSTANCE_IGNORE_RAID,
    CONFIG_INSTANCE_GMSUMMON_PLAYER,
    CONFIG_INSTANCE_SHARED_ID,
    CONFIG_ALLOW_GM_GROUP,
    CONFIG_ALLOW_GM_FRIEND,
    CONFIG_GM_LOWER_SECURITY,
    CONFIG_SKILL_PROSPECTING,
    CONFIG_SKILL_MILLING,
    CONFIG_SAVE_RESPAWN_TIME_IMMEDIATELY,
    CONFIG_WEATHER,
    CONFIG_ALWAYS_MAX_SKILL_FOR_LEVEL,
    CONFIG_QUEST_IGNORE_RAID,
    CONFIG_DETECT_POS_COLLISION,
    CONFIG_RESTRICTED_LFG_CHANNEL,
    CONFIG_SILENTLY_GM_JOIN_TO_CHANNEL,
    CONFIG_TALENTS_INSPECTING,
    CONFIG_CHAT_FAKE_MESSAGE_PREVENTING,
    CONFIG_CHAT_MUTE_FIRST_LOGIN,
    CONFIG_DEATH_CORPSE_RECLAIM_DELAY_PVP,
    CONFIG_DEATH_CORPSE_RECLAIM_DELAY_PVE,
    CONFIG_DEATH_BONES_WORLD,
    CONFIG_DEATH_BONES_BG_OR_ARENA,
    CONFIG_DIE_COMMAND_MODE,
    CONFIG_DECLINED_NAMES_USED,
    CONFIG_BATTLEGROUND_DISABLE_QUEST_SHARE_IN_BG,
    CONFIG_BATTLEGROUND_DISABLE_READY_CHECK_IN_BG,
    CONFIG_BATTLEGROUND_CAST_DESERTER,
    CONFIG_BATTLEGROUND_QUEUE_ANNOUNCER_ENABLE,
    CONFIG_BATTLEGROUND_QUEUE_ANNOUNCER_PLAYERONLY,
    CONFIG_BATTLEGROUND_QUEUE_ANNOUNCER_TIMED,
    CONFIG_BATTLEGROUND_STORE_STATISTICS_ENABLE,
    CONFIG_BATTLEGROUND_TRACK_DESERTERS,
    CONFIG_BG_XP_FOR_KILL,
    CONFIG_ARENA_AUTO_DISTRIBUTE_POINTS,
    CONFIG_ARENA_QUEUE_ANNOUNCER_ENABLE,
    CONFIG_ARENA_QUEUE_ANNOUNCER_PLAYERONLY,
    CONFIG_OFFHAND_CHECK_AT_SPELL_UNLEARN,
    CONFIG_VMAP_INDOOR_CHECK,
    CONFIG_PET_LOS,
    CONFIG_START_CUSTOM_SPELLS,
    CONFIG_START_ALL_EXPLORED,
    CONFIG_START_ALL_REP,
    CONFIG_ALWAYS_MAXSKILL,
    CONFIG_PVP_TOKEN_ENABLE,
    CONFIG_NO_RESET_TALENT_COST,
    CONFIG_SHOW_KICK_IN_WORLD,
    CONFIG_SHOW_MUTE_IN_WORLD,
    CONFIG_SHOW_BAN_IN_WORLD,
    CONFIG_AUTOBROADCAST,
    CONFIG_ALLOW_TICKETS,
    CONFIG_DELETE_CHARACTER_TICKET_TRACE,
    CONFIG_LFG_CAST_DESERTER,
    CONFIG_DBC_ENFORCE_ITEM_ATTRIBUTES,
    CONFIG_PRESERVE_CUSTOM_CHANNELS,
    CONFIG_PDUMP_NO_PATHS,
    CONFIG_PDUMP_NO_OVERWRITE,
    CONFIG_ENABLE_MMAPS,
    CONFIG_ENABLE_LOGIN_AFTER_DC,
    CONFIG_DONT_CACHE_RANDOM_MOVEMENT_PATHS,
    CONFIG_QUEST_IGNORE_AUTO_ACCEPT,
    CONFIG_QUEST_IGNORE_AUTO_COMPLETE,
    CONFIG_QUEST_ENABLE_QUEST_TRACKER,
    CONFIG_WARDEN_ENABLED,
    CONFIG_ENABLE_CONTINENT_TRANSPORT,
    CONFIG_ENABLE_CONTINENT_TRANSPORT_PRELOADING,
    CONFIG_MINIGOB_MANABONK,
    CONFIG_IP_BASED_ACTION_LOGGING,
    CONFIG_CALCULATE_CREATURE_ZONE_AREA_DATA,
    CONFIG_CALCULATE_GAMEOBJECT_ZONE_AREA_DATA,
    CONFIG_CHECK_GOBJECT_LOS,
    CONFIG_CLOSE_IDLE_CONNECTIONS,
    CONFIG_LFG_LOCATION_ALL,
    CONFIG_PRELOAD_ALL_NON_INSTANCED_MAP_GRIDS,
    CONFIG_ALLOW_TWO_SIDE_INTERACTION_EMOTE,
    CONFIG_ITEMDELETE_METHOD,
    CONFIG_ITEMDELETE_VENDOR,
    CONFIG_DEBUG_BATTLEGROUND,
    CONFIG_DEBUG_ARENA,
    CONFIG_DUNGEON_ACCESS_REQUIREMENTS_PORTAL_CHECK_ILVL,
    CONFIG_DUNGEON_ACCESS_REQUIREMENTS_LFG_DBC_LEVEL_OVERRIDE,
    CONFIG_REGEN_HP_CANNOT_REACH_TARGET_IN_RAID,
    CONFIG_SET_BOP_ITEM_TRADEABLE,
    CONFIG_ALLOW_LOGGING_IP_ADDRESSES_IN_DATABASE,
    CONFIG_REALM_LOGIN_ENABLED,
    CONFIG_PLAYER_SETTINGS_ENABLED,
    CONFIG_ALLOW_JOIN_BG_AND_LFG,
    CONFIG_MISS_CHANCE_MULTIPLIER_ONLY_FOR_PLAYERS,
    CONFIG_LEAVE_GROUP_ON_LOGOUT,
    CONFIG_QUEST_POI_ENABLED,
    CONFIG_VMAP_BLIZZLIKE_PVP_LOS,
    CONFIG_VMAP_BLIZZLIKE_LOS_OPEN_WORLD,
    CONFIG_OBJECT_SPARKLES,
    CONFIG_LOW_LEVEL_REGEN_BOOST,
    CONFIG_OBJECT_QUEST_MARKERS,
    CONFIG_STRICT_NAMES_RESERVED,
    CONFIG_STRICT_NAMES_PROFANITY,
    CONFIG_ALLOWS_RANK_MOD_FOR_PET_HEALTH,
    CONFIG_MUNCHING_BLIZZLIKE,
    CONFIG_ENABLE_DAZE,
    CONFIG_SPELL_QUEUE_ENABLED,
    CONFIG_GROUP_XP_DISTANCE,
    CONFIG_MAX_RECRUIT_A_FRIEND_DISTANCE,
    CONFIG_SIGHT_MONSTER,
    CONFIG_LISTEN_RANGE_SAY,
    CONFIG_LISTEN_RANGE_TEXTEMOTE,
    CONFIG_LISTEN_RANGE_YELL,
    CONFIG_CREATURE_LEASH_RADIUS,
    CONFIG_CREATURE_FAMILY_FLEE_ASSISTANCE_RADIUS,
    CONFIG_CREATURE_FAMILY_ASSISTANCE_RADIUS,
    CONFIG_CHANCE_OF_GM_SURVEY,
    CONFIG_ARENA_WIN_RATING_MODIFIER_1,
    CONFIG_ARENA_WIN_RATING_MODIFIER_2,
    CONFIG_ARENA_LOSE_RATING_MODIFIER,
    CONFIG_ARENA_MATCHMAKER_RATING_MODIFIER,
    CONFIG_RESPAWN_DYNAMICRATE_GAMEOBJECT,
    CONFIG_RESPAWN_DYNAMICRATE_CREATURE,
    CONFIG_COMPRESSION,
    CONFIG_INTERVAL_MAPUPDATE,
    CONFIG_INTERVAL_CHANGEWEATHER,
    CONFIG_INTERVAL_DISCONNECT_TOLERANCE,
    CONFIG_INTERVAL_SAVE,
    CONFIG_PORT_WORLD,
    CONFIG_SOCKET_TIMEOUTTIME,
    CONFIG_SESSION_ADD_DELAY,
    CONFIG_GAME_TYPE,
    CONFIG_REALM_ZONE,
    CONFIG_STRICT_PLAYER_NAMES,
    CONFIG_STRICT_CHARTER_NAMES,
    CONFIG_STRICT_CHANNEL_NAMES,
    CONFIG_STRICT_PET_NAMES,
    CONFIG_MIN_PLAYER_NAME,
    CONFIG_MIN_CHARTER_NAME,
    CONFIG_MIN_PET_NAME,
    CONFIG_CHARACTER_CREATING_DISABLED,
    CONFIG_CHARACTER_CREATING_DISABLED_RACEMASK,
    CONFIG_CHARACTER_CREATING_DISABLED_CLASSMASK,
    CONFIG_CHARACTERS_PER_ACCOUNT,
    CONFIG_CHARACTERS_PER_REALM,
    CONFIG_CREATURE_STOP_FOR_PLAYER,
    CONFIG_HEROIC_CHARACTERS_PER_REALM,
    CONFIG_CHARACTER_CREATING_MIN_LEVEL_FOR_HEROIC_CHARACTER,
    CONFIG_SKIP_CINEMATICS,
    CONFIG_MAX_PLAYER_LEVEL,
    CONFIG_MIN_DUALSPEC_LEVEL,
    CONFIG_START_PLAYER_LEVEL,
    CONFIG_START_HEROIC_PLAYER_LEVEL,
    CONFIG_START_PLAYER_MONEY,
    CONFIG_START_HEROIC_PLAYER_MONEY,
    CONFIG_MAX_HONOR_POINTS,
    CONFIG_MAX_HONOR_POINTS_MONEY_PER_POINT,
    CONFIG_START_HONOR_POINTS,
    CONFIG_MAX_ARENA_POINTS,
    CONFIG_START_ARENA_POINTS,
    CONFIG_MAX_RECRUIT_A_FRIEND_BONUS_PLAYER_LEVEL,
    CONFIG_MAX_RECRUIT_A_FRIEND_BONUS_PLAYER_LEVEL_DIFFERENCE,
    CONFIG_INSTANCE_RESET_TIME_HOUR,
    CONFIG_INSTANCE_RESET_TIME_RELATIVE_TIMESTAMP,
    CONFIG_INSTANCE_UNLOAD_DELAY,
    CONFIG_MAX_PRIMARY_TRADE_SKILL,
    CONFIG_MIN_PETITION_SIGNS,
    CONFIG_GM_LOGIN_STATE,
    CONFIG_GM_VISIBLE_STATE,
    CONFIG_GM_CHAT,
    CONFIG_GM_WHISPERING_TO,
    CONFIG_GM_LEVEL_IN_GM_LIST,
    CONFIG_GM_LEVEL_IN_WHO_LIST,
    CONFIG_START_GM_LEVEL,
    CONFIG_GROUP_VISIBILITY,
    CONFIG_MAIL_DELIVERY_DELAY,
    CONFIG_UPTIME_UPDATE,
    CONFIG_SKILL_CHANCE_ORANGE,
    CONFIG_SKILL_CHANCE_YELLOW,
    CONFIG_SKILL_CHANCE_GREEN,
    CONFIG_SKILL_CHANCE_GREY,
    CONFIG_SKILL_CHANCE_MINING_STEPS,
    CONFIG_SKILL_CHANCE_SKINNING_STEPS,
    CONFIG_SKILL_GAIN_CRAFTING,
    CONFIG_SKILL_GAIN_DEFENSE,
    CONFIG_SKILL_GAIN_GATHERING,
    CONFIG_SKILL_GAIN_WEAPON,
    CONFIG_MAX_OVERSPEED_PINGS,
    CONFIG_EXPANSION,
    CONFIG_CHATFLOOD_MESSAGE_COUNT,
    CONFIG_CHATFLOOD_MESSAGE_DELAY,
    CONFIG_CHATFLOOD_ADDON_MESSAGE_COUNT,
    CONFIG_CHATFLOOD_ADDON_MESSAGE_DELAY,
    CONFIG_CHATFLOOD_MUTE_TIME,
    CONFIG_EVENT_ANNOUNCE,
    CONFIG_CREATURE_FAMILY_ASSISTANCE_DELAY,
    CONFIG_CREATURE_FAMILY_ASSISTANCE_PERIOD,
    CONFIG_CREATURE_FAMILY_FLEE_DELAY,
    CONFIG_WORLD_BOSS_LEVEL_DIFF,
    CONFIG_QUEST_LOW_LEVEL_HIDE_DIFF,
    CONFIG_QUEST_HIGH_LEVEL_HIDE_DIFF,
    CONFIG_CHAT_STRICT_LINK_CHECKING_SEVERITY,
    CONFIG_CHAT_STRICT_LINK_CHECKING_KICK,
    CONFIG_CHAT_CHANNEL_LEVEL_REQ,
    CONFIG_CHAT_WHISPER_LEVEL_REQ,
    CONFIG_CHAT_SAY_LEVEL_REQ,
    CONFIG_PARTY_LEVEL_REQ,
    CONFIG_CHAT_TIME_MUTE_FIRST_LOGIN,
    CONFIG_TRADE_LEVEL_REQ,
    CONFIG_TICKET_LEVEL_REQ,
    CONFIG_AUCTION_LEVEL_REQ,
    CONFIG_MAIL_LEVEL_REQ,
    CONFIG_CORPSE_DECAY_NORMAL,
    CONFIG_CORPSE_DECAY_RARE,
    CONFIG_CORPSE_DECAY_ELITE,
    CONFIG_CORPSE_DECAY_RAREELITE,
    CONFIG_CORPSE_DECAY_WORLDBOSS,
    CONFIG_DEATH_SICKNESS_LEVEL,
    CONFIG_INSTANT_LOGOUT,
    CONFIG_DISABLE_BREATHING,
    CONFIG_BATTLEGROUND_PREP_TIME,
    CONFIG_BATTLEGROUND_OVERRIDE_LOWLEVELS_MINPLAYERS,
    CONFIG_BATTLEGROUND_QUEUE_ANNOUNCER_SPAM_DELAY,
    CONFIG_BATTLEGROUND_QUEUE_ANNOUNCER_TIMER,
    CONFIG_BATTLEGROUND_PREMATURE_FINISH_TIMER,
    CONFIG_BATTLEGROUND_PREMADE_GROUP_WAIT_FOR_MATCH,
    CONFIG_BATTLEGROUND_REPORT_AFK_TIMER,
    CONFIG_BATTLEGROUND_REPORT_AFK,
    CONFIG_BATTLEGROUND_INVITATION_TYPE,
    CONFIG_BATTLEGROUND_PLAYER_RESPAWN,
    CONFIG_BATTLEGROUND_RESTORATION_BUFF_RESPAWN,
    CONFIG_BATTLEGROUND_BERSERKING_BUFF_RESPAWN,
    CONFIG_BATTLEGROUND_SPEED_BUFF_RESPAWN,
    CONFIG_BATTLEGROUND_QUEUE_ANNOUNCER_LIMIT_MIN_LEVEL,
    CONFIG_BATTLEGROUND_QUEUE_ANNOUNCER_LIMIT_MIN_PLAYERS,
    CONFIG_BATTLEGROUND_WARSONG_FLAGS,
    CONFIG_BATTLEGROUND_ARATHI_CAPTUREPOINTS,
    CONFIG_BATTLEGROUND_ALTERAC_REINFORCEMENTS,
    CONFIG_BATTLEGROUND_ALTERAC_REP_ONBOSSDEATH,
    CONFIG_BATTLEGROUND_EYEOFTHESTORM_CAPTUREPOINTS,
    CONFIG_WINTERGRASP_ENABLE,
    CONFIG_ARENA_PREP_TIME,
    CONFIG_ARENA_MAX_RATING_DIFFERENCE,
    CONFIG_ARENA_RATING_DISCARD_TIMER,
    CONFIG_ARENA_PREV_OPPONENTS_DISCARD_TIMER,
    CONFIG_ARENA_AUTO_DISTRIBUTE_INTERVAL_DAYS,
    CONFIG_ARENA_GAMES_REQUIRED,
    CONFIG_ARENA_START_RATING,
    CONFIG_LEGACY_ARENA_START_RATING,
    CONFIG_LEGACY_ARENA_POINTS_CALC,
    CONFIG_ARENA_START_PERSONAL_RATING,
    CONFIG_ARENA_START_MATCHMAKER_RATING,
    CONFIG_ARENA_QUEUE_ANNOUNCER_DETAIL,
    CONFIG_HONOR_AFTER_DUEL,
    CONFIG_PVP_TOKEN_MAP_TYPE,
    CONFIG_PVP_TOKEN_ID,
    CONFIG_PVP_TOKEN_COUNT,
    CONFIG_ENABLE_SINFO_LOGIN,
    CONFIG_NUMTHREADS,
    CONFIG_LOGDB_CLEARINTERVAL,
    CONFIG_LOGDB_CLEARTIME,
    CONFIG_TELEPORT_TIMEOUT_NEAR,
    CONFIG_TELEPORT_TIMEOUT_FAR,
    CONFIG_MAX_ALLOWED_MMR_DROP,
    CONFIG_CLIENTCACHE_VERSION,
    CONFIG_GUILD_EVENT_LOG_COUNT,
    CONFIG_GUILD_BANK_EVENT_LOG_COUNT,
    CONFIG_MIN_LEVEL_STAT_SAVE,
    CONFIG_RANDOM_BG_RESET_HOUR,
    CONFIG_CALENDAR_DELETE_OLD_EVENTS_HOUR,
    CONFIG_GUILD_RESET_HOUR,
    CONFIG_CHARDELETE_KEEP_DAYS,
    CONFIG_CHARDELETE_METHOD,
    CONFIG_CHARDELETE_MIN_LEVEL,
    CONFIG_AUTOBROADCAST_CENTER,
    CONFIG_AUTOBROADCAST_INTERVAL,
    CONFIG_AUTOBROADCAST_MIN_LEVEL_DISABLE,
    CONFIG_MAX_RESULTS_LOOKUP_COMMANDS,
    CONFIG_DB_PING_INTERVAL,
    CONFIG_PRESERVE_CUSTOM_CHANNEL_DURATION,
    CONFIG_PERSISTENT_CHARACTER_CLEAN_FLAGS,
    CONFIG_LFG_OPTIONSMASK,
    CONFIG_MAX_INSTANCES_PER_HOUR,
    CONFIG_WINTERGRASP_PLR_MAX,
    CONFIG_WINTERGRASP_PLR_MIN,
    CONFIG_WINTERGRASP_PLR_MIN_LVL,
    CONFIG_WINTERGRASP_BATTLETIME,
    CONFIG_WINTERGRASP_NOBATTLETIME,
    CONFIG_WINTERGRASP_RESTART_AFTER_CRASH,
    CONFIG_PACKET_SPOOF_BANMODE,
    CONFIG_PACKET_SPOOF_BANDURATION,
    CONFIG_WARDEN_CLIENT_RESPONSE_DELAY,
    CONFIG_WARDEN_CLIENT_CHECK_HOLDOFF,
    CONFIG_WARDEN_CLIENT_FAIL_ACTION,
    CONFIG_WARDEN_CLIENT_BAN_DURATION,
    CONFIG_WARDEN_NUM_MEM_CHECKS,
    CONFIG_WARDEN_NUM_LUA_CHECKS,
    CONFIG_WARDEN_NUM_OTHER_CHECKS,
    CONFIG_BIRTHDAY_TIME,
    CONFIG_SOCKET_TIMEOUTTIME_ACTIVE,
    CONFIG_INSTANT_TAXI,
    CONFIG_AFK_PREVENT_LOGOUT,
    CONFIG_ICC_BUFF_HORDE,
    CONFIG_ICC_BUFF_ALLIANCE,
    CONFIG_ITEMDELETE_QUALITY,
    CONFIG_ITEMDELETE_ITEM_LEVEL,
    CONFIG_ITEMDELETE_KEEP_DAYS,
    CONFIG_BG_REWARD_WINNER_HONOR_FIRST,
    CONFIG_BG_REWARD_WINNER_ARENA_FIRST,
    CONFIG_BG_REWARD_WINNER_HONOR_LAST,
    CONFIG_BG_REWARD_WINNER_ARENA_LAST,
    CONFIG_BG_REWARD_LOSER_HONOR_FIRST,
    CONFIG_BG_REWARD_LOSER_HONOR_LAST,
    CONFIG_CHARTER_COST_GUILD,
    CONFIG_CHARTER_COST_ARENA_2v2,
    CONFIG_CHARTER_COST_ARENA_3v3,
    CONFIG_CHARTER_COST_ARENA_5v5,
    CONFIG_MAX_WHO_LIST_RETURN,
    CONFIG_WAYPOINT_MOVEMENT_STOP_TIME_FOR_PLAYER,
    CONFIG_DUNGEON_ACCESS_REQUIREMENTS_PRINT_MODE,
    CONFIG_DUNGEON_ACCESS_REQUIREMENTS_OPTIONAL_STRING_ID,
    CONFIG_GUILD_BANK_INITIAL_TABS,
    CONFIG_GUILD_BANK_TAB_COST_0,
    CONFIG_GUILD_BANK_TAB_COST_1,
    CONFIG_GUILD_BANK_TAB_COST_2,
    CONFIG_GUILD_BANK_TAB_COST_3,
    CONFIG_GUILD_BANK_TAB_COST_4,
    CONFIG_GUILD_BANK_TAB_COST_5,
    CONFIG_GUILD_MEMBER_LIMIT,
    CONFIG_GM_LEVEL_CHANNEL_MODERATION,
    CONFIG_TOGGLE_XP_COST,
    CONFIG_NPC_EVADE_IF_NOT_REACHABLE,
    CONFIG_NPC_REGEN_TIME_IF_NOT_REACHABLE_IN_RAID,
    CONFIG_FFA_PVP_TIMER,
    CONFIG_LOOT_NEED_BEFORE_GREED_ILVL_RESTRICTION,
    CONFIG_LFG_MAX_KICK_COUNT,
    CONFIG_LFG_KICK_PREVENTION_TIMER,
    CONFIG_CHANGE_FACTION_MAX_MONEY,
    CONFIG_WATER_BREATH_TIMER,
    CONFIG_DAILY_RBG_MIN_LEVEL_AP_REWARD,
    CONFIG_AUCTIONHOUSE_WORKERTHREADS,
    CONFIG_SPELL_QUEUE_WINDOW,
    CONFIG_SUNSREACH_COUNTER_MAX,
    CONFIG_RESPAWN_DYNAMICMINIMUM_GAMEOBJECT,
    CONFIG_RESPAWN_DYNAMICMINIMUM_CREATURE,
    RATE_HEALTH,
    RATE_POWER_MANA,
    RATE_POWER_RAGE_INCOME,
    RATE_POWER_RAGE_LOSS,
    RATE_POWER_RUNICPOWER_INCOME,
    RATE_POWER_RUNICPOWER_LOSS,
    RATE_POWER_FOCUS,
    RATE_POWER_ENERGY,
    RATE_SKILL_DISCOVERY,
    RATE_DROP_ITEM_POOR,
    RATE_DROP_ITEM_NORMAL,
    RATE_DROP_ITEM_UNCOMMON,
    RATE_DROP_ITEM_RARE,
    RATE_DROP_ITEM_EPIC,
    RATE_DROP_ITEM_LEGENDARY,
    RATE_DROP_ITEM_ARTIFACT,
    RATE_DROP_ITEM_REFERENCED,
    RATE_DROP_ITEM_REFERENCED_AMOUNT,
    RATE_DROP_ITEM_GROUP_AMOUNT,
    RATE_SELLVALUE_ITEM_POOR,
    RATE_SELLVALUE_ITEM_NORMAL,
    RATE_SELLVALUE_ITEM_UNCOMMON,
    RATE_SELLVALUE_ITEM_RARE,
    RATE_SELLVALUE_ITEM_EPIC,
    RATE_SELLVALUE_ITEM_LEGENDARY,
    RATE_SELLVALUE_ITEM_ARTIFACT,
    RATE_SELLVALUE_ITEM_HEIRLOOM,
    RATE_BUYVALUE_ITEM_POOR,
    RATE_BUYVALUE_ITEM_NORMAL,
    RATE_BUYVALUE_ITEM_UNCOMMON,
    RATE_BUYVALUE_ITEM_RARE,
    RATE_BUYVALUE_ITEM_EPIC,
    RATE_BUYVALUE_ITEM_LEGENDARY,
    RATE_BUYVALUE_ITEM_ARTIFACT,
    RATE_BUYVALUE_ITEM_HEIRLOOM,
    RATE_DROP_MONEY,
    RATE_REWARD_QUEST_MONEY,
    RATE_REWARD_BONUS_MONEY,
    RATE_XP_KILL,
    RATE_XP_BG_KILL_AV,
    RATE_XP_BG_KILL_WSG,
    RATE_XP_BG_KILL_AB,
    RATE_XP_BG_KILL_EOTS,
    RATE_XP_BG_KILL_SOTA,
    RATE_XP_BG_KILL_IC,
    RATE_XP_QUEST,
    RATE_XP_QUEST_DF,
    RATE_XP_EXPLORE,
    RATE_XP_PET,
    RATE_XP_PET_NEXT_LEVEL,
    RATE_REPAIRCOST,
    RATE_REPUTATION_GAIN,
    RATE_REPUTATION_LOWLEVEL_KILL,
    RATE_REPUTATION_LOWLEVEL_QUEST,
    RATE_REPUTATION_RECRUIT_A_FRIEND_BONUS,
    RATE_CREATURE_NORMAL_HP,
    RATE_CREATURE_ELITE_ELITE_HP,
    RATE_CREATURE_ELITE_RAREELITE_HP,
    RATE_CREATURE_ELITE_WORLDBOSS_HP,
    RATE_CREATURE_ELITE_RARE_HP,
    RATE_CREATURE_NORMAL_DAMAGE,
    RATE_CREATURE_ELITE_ELITE_DAMAGE,
    RATE_CREATURE_ELITE_RAREELITE_DAMAGE,
    RATE_CREATURE_ELITE_WORLDBOSS_DAMAGE,
    RATE_CREATURE_ELITE_RARE_DAMAGE,
    RATE_CREATURE_NORMAL_SPELLDAMAGE,
    RATE_CREATURE_ELITE_ELITE_SPELLDAMAGE,
    RATE_CREATURE_ELITE_RAREELITE_SPELLDAMAGE,
    RATE_CREATURE_ELITE_WORLDBOSS_SPELLDAMAGE,
    RATE_CREATURE_ELITE_RARE_SPELLDAMAGE,
    RATE_CREATURE_AGGRO,
    RATE_REST_INGAME,
    RATE_REST_OFFLINE_IN_TAVERN_OR_CITY,
    RATE_REST_OFFLINE_IN_WILDERNESS,
    RATE_REST_MAX_BONUS,
    RATE_DAMAGE_FALL,
    RATE_AUCTION_TIME,
    RATE_AUCTION_DEPOSIT,
    RATE_AUCTION_CUT,
    RATE_HONOR,
    RATE_ARENA_POINTS,
    RATE_TALENT,
    RATE_TALENT_PET,
    RATE_CORPSE_DECAY_LOOTED,
    RATE_INSTANCE_RESET_TIME,
    RATE_DURABILITY_LOSS_ON_DEATH,
    RATE_DURABILITY_LOSS_DAMAGE,
    RATE_DURABILITY_LOSS_PARRY,
    RATE_DURABILITY_LOSS_ABSORB,
    RATE_DURABILITY_LOSS_BLOCK,
    RATE_MOVESPEED_PLAYER,
    RATE_MOVESPEED_NPC,
    RATE_MISS_CHANCE_MULTIPLIER_TARGET_CREATURE,
    RATE_MISS_CHANCE_MULTIPLIER_TARGET_PLAYER,
    CONFIG_NEW_CHAR_STRING,
    CONFIG_VALIDATE_SKILL_LEARNED_BY_SPELLS,

    MAX_NUM_SERVER_CONFIGS
};

class WorldConfig : public ConfigValueCache<ServerConfigs>
{
public:
    WorldConfig() : ConfigValueCache(MAX_NUM_SERVER_CONFIGS) { }

    void BuildConfigCache() override;
};

#endif
