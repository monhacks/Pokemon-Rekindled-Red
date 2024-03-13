#ifndef GUARD_CONSTANTS_POKEDEX_H
#define GUARD_CONSTANTS_POKEDEX_H

// National Pokedex order
enum {
    NATIONAL_DEX_NONE,
    // Kanto
    NATIONAL_DEX_BULBASAUR,
    NATIONAL_DEX_IVYSAUR,
    NATIONAL_DEX_VENUSAUR,
    NATIONAL_DEX_CHARMANDER,
    NATIONAL_DEX_CHARMELEON,
    NATIONAL_DEX_CHARIZARD,
    NATIONAL_DEX_SQUIRTLE,
    NATIONAL_DEX_WARTORTLE,
    NATIONAL_DEX_BLASTOISE,
    NATIONAL_DEX_CATERPIE,
    NATIONAL_DEX_METAPOD,
    NATIONAL_DEX_BUTTERFREE,
    NATIONAL_DEX_WEEDLE,
    NATIONAL_DEX_KAKUNA,
    NATIONAL_DEX_BEEDRILL,
    NATIONAL_DEX_PIDGEY,
    NATIONAL_DEX_PIDGEOTTO,
    NATIONAL_DEX_PIDGEOT,
    NATIONAL_DEX_RATTATA,
    NATIONAL_DEX_RATICATE,
    NATIONAL_DEX_SPEAROW,
    NATIONAL_DEX_FEAROW,
    NATIONAL_DEX_EKANS,
    NATIONAL_DEX_ARBOK,
    NATIONAL_DEX_PIKACHU,
    NATIONAL_DEX_RAICHU,
    NATIONAL_DEX_SANDSHREW,
    NATIONAL_DEX_SANDSLASH,
    NATIONAL_DEX_NIDORAN_F,
    NATIONAL_DEX_NIDORINA,
    NATIONAL_DEX_NIDOQUEEN,
    NATIONAL_DEX_NIDORAN_M,
    NATIONAL_DEX_NIDORINO,
    NATIONAL_DEX_NIDOKING,
    NATIONAL_DEX_CLEFAIRY,
    NATIONAL_DEX_CLEFABLE,
    NATIONAL_DEX_VULPIX,
    NATIONAL_DEX_NINETALES,
    NATIONAL_DEX_JIGGLYPUFF,
    NATIONAL_DEX_WIGGLYTUFF,
    NATIONAL_DEX_ZUBAT,
    NATIONAL_DEX_GOLBAT,
    NATIONAL_DEX_ODDISH,
    NATIONAL_DEX_GLOOM,
    NATIONAL_DEX_VILEPLUME,
    NATIONAL_DEX_PARAS,
    NATIONAL_DEX_PARASECT,
    NATIONAL_DEX_VENONAT,
    NATIONAL_DEX_VENOMOTH,
    NATIONAL_DEX_DIGLETT,
    NATIONAL_DEX_DUGTRIO,
    NATIONAL_DEX_MEOWTH,
    NATIONAL_DEX_PERSIAN,
    NATIONAL_DEX_PSYDUCK,
    NATIONAL_DEX_GOLDUCK,
    NATIONAL_DEX_MANKEY,
    NATIONAL_DEX_PRIMEAPE,
    NATIONAL_DEX_GROWLITHE,
    NATIONAL_DEX_ARCANINE,
    NATIONAL_DEX_POLIWAG,
    NATIONAL_DEX_POLIWHIRL,
    NATIONAL_DEX_POLIWRATH,
    NATIONAL_DEX_ABRA,
    NATIONAL_DEX_KADABRA,
    NATIONAL_DEX_ALAKAZAM,
    NATIONAL_DEX_MACHOP,
    NATIONAL_DEX_MACHOKE,
    NATIONAL_DEX_MACHAMP,
    NATIONAL_DEX_BELLSPROUT,
    NATIONAL_DEX_WEEPINBELL,
    NATIONAL_DEX_VICTREEBEL,
    NATIONAL_DEX_TENTACOOL,
    NATIONAL_DEX_TENTACRUEL,
    NATIONAL_DEX_GEODUDE,
    NATIONAL_DEX_GRAVELER,
    NATIONAL_DEX_GOLEM,
    NATIONAL_DEX_PONYTA,
    NATIONAL_DEX_RAPIDASH,
    NATIONAL_DEX_SLOWPOKE,
    NATIONAL_DEX_SLOWBRO,
    NATIONAL_DEX_MAGNEMITE,
    NATIONAL_DEX_MAGNETON,
    NATIONAL_DEX_FARFETCHD,
    NATIONAL_DEX_DODUO,
    NATIONAL_DEX_DODRIO,
    NATIONAL_DEX_SEEL,
    NATIONAL_DEX_DEWGONG,
    NATIONAL_DEX_GRIMER,
    NATIONAL_DEX_MUK,
    NATIONAL_DEX_SHELLDER,
    NATIONAL_DEX_CLOYSTER,
    NATIONAL_DEX_GASTLY,
    NATIONAL_DEX_HAUNTER,
    NATIONAL_DEX_GENGAR,
    NATIONAL_DEX_ONIX,
    NATIONAL_DEX_DROWZEE,
    NATIONAL_DEX_HYPNO,
    NATIONAL_DEX_KRABBY,
    NATIONAL_DEX_KINGLER,
    NATIONAL_DEX_VOLTORB,
    NATIONAL_DEX_ELECTRODE,
    NATIONAL_DEX_EXEGGCUTE,
    NATIONAL_DEX_EXEGGUTOR,
    NATIONAL_DEX_CUBONE,
    NATIONAL_DEX_MAROWAK,
    NATIONAL_DEX_HITMONLEE,
    NATIONAL_DEX_HITMONCHAN,
    NATIONAL_DEX_LICKITUNG,
    NATIONAL_DEX_KOFFING,
    NATIONAL_DEX_WEEZING,
    NATIONAL_DEX_RHYHORN,
    NATIONAL_DEX_RHYDON,
    NATIONAL_DEX_CHANSEY,
    NATIONAL_DEX_TANGELA,
    NATIONAL_DEX_KANGASKHAN,
    NATIONAL_DEX_HORSEA,
    NATIONAL_DEX_SEADRA,
    NATIONAL_DEX_GOLDEEN,
    NATIONAL_DEX_SEAKING,
    NATIONAL_DEX_STARYU,
    NATIONAL_DEX_STARMIE,
    NATIONAL_DEX_MR_MIME,
    NATIONAL_DEX_SCYTHER,
    NATIONAL_DEX_JYNX,
    NATIONAL_DEX_ELECTABUZZ,
    NATIONAL_DEX_MAGMAR,
    NATIONAL_DEX_PINSIR,
    NATIONAL_DEX_TAUROS,
    NATIONAL_DEX_MAGIKARP,
    NATIONAL_DEX_GYARADOS,
    NATIONAL_DEX_LAPRAS,
    NATIONAL_DEX_DITTO,
    NATIONAL_DEX_EEVEE,
    NATIONAL_DEX_VAPOREON,
    NATIONAL_DEX_JOLTEON,
    NATIONAL_DEX_FLAREON,
    NATIONAL_DEX_PORYGON,
    NATIONAL_DEX_OMANYTE,
    NATIONAL_DEX_OMASTAR,
    NATIONAL_DEX_KABUTO,
    NATIONAL_DEX_KABUTOPS,
    NATIONAL_DEX_AERODACTYL,
    NATIONAL_DEX_SNORLAX,
    NATIONAL_DEX_ARTICUNO,
    NATIONAL_DEX_ZAPDOS,
    NATIONAL_DEX_MOLTRES,
    NATIONAL_DEX_DRATINI,
    NATIONAL_DEX_DRAGONAIR,
    NATIONAL_DEX_DRAGONITE,
    NATIONAL_DEX_MEWTWO,
    NATIONAL_DEX_MEW,
    // Johto
    NATIONAL_DEX_CHIKORITA,
    NATIONAL_DEX_BAYLEEF,
    NATIONAL_DEX_MEGANIUM,
    NATIONAL_DEX_CYNDAQUIL,
    NATIONAL_DEX_QUILAVA,
    NATIONAL_DEX_TYPHLOSION,
    NATIONAL_DEX_TOTODILE,
    NATIONAL_DEX_CROCONAW,
    NATIONAL_DEX_FERALIGATR,
    NATIONAL_DEX_SENTRET,
    NATIONAL_DEX_FURRET,
    NATIONAL_DEX_HOOTHOOT,
    NATIONAL_DEX_NOCTOWL,
    NATIONAL_DEX_LEDYBA,
    NATIONAL_DEX_LEDIAN,
    NATIONAL_DEX_SPINARAK,
    NATIONAL_DEX_ARIADOS,
    NATIONAL_DEX_CROBAT,
    NATIONAL_DEX_CHINCHOU,
    NATIONAL_DEX_LANTURN,
    NATIONAL_DEX_PICHU,
    NATIONAL_DEX_CLEFFA,
    NATIONAL_DEX_IGGLYBUFF,
    NATIONAL_DEX_TOGEPI,
    NATIONAL_DEX_TOGETIC,
    NATIONAL_DEX_NATU,
    NATIONAL_DEX_XATU,
    NATIONAL_DEX_MAREEP,
    NATIONAL_DEX_FLAAFFY,
    NATIONAL_DEX_AMPHAROS,
    NATIONAL_DEX_BELLOSSOM,
    NATIONAL_DEX_MARILL,
    NATIONAL_DEX_AZUMARILL,
    NATIONAL_DEX_SUDOWOODO,
    NATIONAL_DEX_POLITOED,
    NATIONAL_DEX_HOPPIP,
    NATIONAL_DEX_SKIPLOOM,
    NATIONAL_DEX_JUMPLUFF,
    NATIONAL_DEX_AIPOM,
    NATIONAL_DEX_SUNKERN,
    NATIONAL_DEX_SUNFLORA,
    NATIONAL_DEX_YANMA,
    NATIONAL_DEX_WOOPER,
    NATIONAL_DEX_QUAGSIRE,
    NATIONAL_DEX_ESPEON,
    NATIONAL_DEX_UMBREON,
    NATIONAL_DEX_MURKROW,
    NATIONAL_DEX_SLOWKING,
    NATIONAL_DEX_MISDREAVUS,
    NATIONAL_DEX_UNOWN,
    NATIONAL_DEX_WOBBUFFET,
    NATIONAL_DEX_GIRAFARIG,
    NATIONAL_DEX_PINECO,
    NATIONAL_DEX_FORRETRESS,
    NATIONAL_DEX_DUNSPARCE,
    NATIONAL_DEX_GLIGAR,
    NATIONAL_DEX_STEELIX,
    NATIONAL_DEX_SNUBBULL,
    NATIONAL_DEX_GRANBULL,
    NATIONAL_DEX_QWILFISH,
    NATIONAL_DEX_SCIZOR,
    NATIONAL_DEX_SHUCKLE,
    NATIONAL_DEX_HERACROSS,
    NATIONAL_DEX_SNEASEL,
    NATIONAL_DEX_TEDDIURSA,
    NATIONAL_DEX_URSARING,
    NATIONAL_DEX_SLUGMA,
    NATIONAL_DEX_MAGCARGO,
    NATIONAL_DEX_SWINUB,
    NATIONAL_DEX_PILOSWINE,
    NATIONAL_DEX_CORSOLA,
    NATIONAL_DEX_REMORAID,
    NATIONAL_DEX_OCTILLERY,
    NATIONAL_DEX_DELIBIRD,
    NATIONAL_DEX_MANTINE,
    NATIONAL_DEX_SKARMORY,
    NATIONAL_DEX_HOUNDOUR,
    NATIONAL_DEX_HOUNDOOM,
    NATIONAL_DEX_KINGDRA,
    NATIONAL_DEX_PHANPY,
    NATIONAL_DEX_DONPHAN,
    NATIONAL_DEX_PORYGON2,
    NATIONAL_DEX_STANTLER,
    NATIONAL_DEX_SMEARGLE,
    NATIONAL_DEX_TYROGUE,
    NATIONAL_DEX_HITMONTOP,
    NATIONAL_DEX_SMOOCHUM,
    NATIONAL_DEX_ELEKID,
    NATIONAL_DEX_MAGBY,
    NATIONAL_DEX_MILTANK,
    NATIONAL_DEX_BLISSEY,
    NATIONAL_DEX_RAIKOU,
    NATIONAL_DEX_ENTEI,
    NATIONAL_DEX_SUICUNE,
    NATIONAL_DEX_LARVITAR,
    NATIONAL_DEX_PUPITAR,
    NATIONAL_DEX_TYRANITAR,
    NATIONAL_DEX_LUGIA,
    NATIONAL_DEX_HO_OH,
    NATIONAL_DEX_CELEBI,
    // Hoenn
    NATIONAL_DEX_TREECKO,
    NATIONAL_DEX_GROVYLE,
    NATIONAL_DEX_SCEPTILE,
    NATIONAL_DEX_TORCHIC,
    NATIONAL_DEX_COMBUSKEN,
    NATIONAL_DEX_BLAZIKEN,
    NATIONAL_DEX_MUDKIP,
    NATIONAL_DEX_MARSHTOMP,
    NATIONAL_DEX_SWAMPERT,
    NATIONAL_DEX_POOCHYENA,
    NATIONAL_DEX_MIGHTYENA,
    NATIONAL_DEX_ZIGZAGOON,
    NATIONAL_DEX_LINOONE,
    NATIONAL_DEX_WURMPLE,
    NATIONAL_DEX_SILCOON,
    NATIONAL_DEX_BEAUTIFLY,
    NATIONAL_DEX_CASCOON,
    NATIONAL_DEX_DUSTOX,
    NATIONAL_DEX_LOTAD,
    NATIONAL_DEX_LOMBRE,
    NATIONAL_DEX_LUDICOLO,
    NATIONAL_DEX_SEEDOT,
    NATIONAL_DEX_NUZLEAF,
    NATIONAL_DEX_SHIFTRY,
    NATIONAL_DEX_TAILLOW,
    NATIONAL_DEX_SWELLOW,
    NATIONAL_DEX_WINGULL,
    NATIONAL_DEX_PELIPPER,
    NATIONAL_DEX_RALTS,
    NATIONAL_DEX_KIRLIA,
    NATIONAL_DEX_GARDEVOIR,
    NATIONAL_DEX_SURSKIT,
    NATIONAL_DEX_MASQUERAIN,
    NATIONAL_DEX_SHROOMISH,
    NATIONAL_DEX_BRELOOM,
    NATIONAL_DEX_SLAKOTH,
    NATIONAL_DEX_VIGOROTH,
    NATIONAL_DEX_SLAKING,
    NATIONAL_DEX_NINCADA,
    NATIONAL_DEX_NINJASK,
    NATIONAL_DEX_SHEDINJA,
    NATIONAL_DEX_WHISMUR,
    NATIONAL_DEX_LOUDRED,
    NATIONAL_DEX_EXPLOUD,
    NATIONAL_DEX_MAKUHITA,
    NATIONAL_DEX_HARIYAMA,
    NATIONAL_DEX_AZURILL,
    NATIONAL_DEX_NOSEPASS,
    NATIONAL_DEX_SKITTY,
    NATIONAL_DEX_DELCATTY,
    NATIONAL_DEX_SABLEYE,
    NATIONAL_DEX_MAWILE,
    NATIONAL_DEX_ARON,
    NATIONAL_DEX_LAIRON,
    NATIONAL_DEX_AGGRON,
    NATIONAL_DEX_MEDITITE,
    NATIONAL_DEX_MEDICHAM,
    NATIONAL_DEX_ELECTRIKE,
    NATIONAL_DEX_MANECTRIC,
    NATIONAL_DEX_PLUSLE,
    NATIONAL_DEX_MINUN,
    NATIONAL_DEX_VOLBEAT,
    NATIONAL_DEX_ILLUMISE,
    NATIONAL_DEX_ROSELIA,
    NATIONAL_DEX_GULPIN,
    NATIONAL_DEX_SWALOT,
    NATIONAL_DEX_CARVANHA,
    NATIONAL_DEX_SHARPEDO,
    NATIONAL_DEX_WAILMER,
    NATIONAL_DEX_WAILORD,
    NATIONAL_DEX_NUMEL,
    NATIONAL_DEX_CAMERUPT,
    NATIONAL_DEX_TORKOAL,
    NATIONAL_DEX_SPOINK,
    NATIONAL_DEX_GRUMPIG,
    NATIONAL_DEX_SPINDA,
    NATIONAL_DEX_TRAPINCH,
    NATIONAL_DEX_VIBRAVA,
    NATIONAL_DEX_FLYGON,
    NATIONAL_DEX_CACNEA,
    NATIONAL_DEX_CACTURNE,
    NATIONAL_DEX_SWABLU,
    NATIONAL_DEX_ALTARIA,
    NATIONAL_DEX_ZANGOOSE,
    NATIONAL_DEX_SEVIPER,
    NATIONAL_DEX_LUNATONE,
    NATIONAL_DEX_SOLROCK,
    NATIONAL_DEX_BARBOACH,
    NATIONAL_DEX_WHISCASH,
    NATIONAL_DEX_CORPHISH,
    NATIONAL_DEX_CRAWDAUNT,
    NATIONAL_DEX_BALTOY,
    NATIONAL_DEX_CLAYDOL,
    NATIONAL_DEX_LILEEP,
    NATIONAL_DEX_CRADILY,
    NATIONAL_DEX_ANORITH,
    NATIONAL_DEX_ARMALDO,
    NATIONAL_DEX_FEEBAS,
    NATIONAL_DEX_MILOTIC,
    NATIONAL_DEX_CASTFORM,
    NATIONAL_DEX_KECLEON,
    NATIONAL_DEX_SHUPPET,
    NATIONAL_DEX_BANETTE,
    NATIONAL_DEX_DUSKULL,
    NATIONAL_DEX_DUSCLOPS,
    NATIONAL_DEX_TROPIUS,
    NATIONAL_DEX_CHIMECHO,
    NATIONAL_DEX_ABSOL,
    NATIONAL_DEX_WYNAUT,
    NATIONAL_DEX_SNORUNT,
    NATIONAL_DEX_GLALIE,
    NATIONAL_DEX_SPHEAL,
    NATIONAL_DEX_SEALEO,
    NATIONAL_DEX_WALREIN,
    NATIONAL_DEX_CLAMPERL,
    NATIONAL_DEX_HUNTAIL,
    NATIONAL_DEX_GOREBYSS,
    NATIONAL_DEX_RELICANTH,
    NATIONAL_DEX_LUVDISC,
    NATIONAL_DEX_BAGON,
    NATIONAL_DEX_SHELGON,
    NATIONAL_DEX_SALAMENCE,
    NATIONAL_DEX_BELDUM,
    NATIONAL_DEX_METANG,
    NATIONAL_DEX_METAGROSS,
    NATIONAL_DEX_REGIROCK,
    NATIONAL_DEX_REGICE,
    NATIONAL_DEX_REGISTEEL,
    NATIONAL_DEX_LATIAS,
    NATIONAL_DEX_LATIOS,
    NATIONAL_DEX_KYOGRE,
    NATIONAL_DEX_GROUDON,
    NATIONAL_DEX_RAYQUAZA,
    NATIONAL_DEX_JIRACHI,
    NATIONAL_DEX_DEOXYS,
    NATIONAL_DEX_REGIGIGAS,
    // Forms
    // TODO:FORME add dex entry number here
    NATIONAL_DEX_FOSSILIZED_KABUTOPS,
    NATIONAL_DEX_SEVIIAN_AERODACTYL,
    // Old Unown
    NATIONAL_DEX_OLD_UNOWN_B,
    NATIONAL_DEX_OLD_UNOWN_C,
    NATIONAL_DEX_OLD_UNOWN_D,
    NATIONAL_DEX_OLD_UNOWN_E,
    NATIONAL_DEX_OLD_UNOWN_F,
    NATIONAL_DEX_OLD_UNOWN_G,
    NATIONAL_DEX_OLD_UNOWN_H,
    NATIONAL_DEX_OLD_UNOWN_I,
    NATIONAL_DEX_OLD_UNOWN_J,
    NATIONAL_DEX_OLD_UNOWN_K,
    NATIONAL_DEX_OLD_UNOWN_L,
    NATIONAL_DEX_OLD_UNOWN_M,
    NATIONAL_DEX_OLD_UNOWN_N,
    NATIONAL_DEX_OLD_UNOWN_O,
    NATIONAL_DEX_OLD_UNOWN_P,
    NATIONAL_DEX_OLD_UNOWN_Q,
    NATIONAL_DEX_OLD_UNOWN_R,
    NATIONAL_DEX_OLD_UNOWN_S,
    NATIONAL_DEX_OLD_UNOWN_T,
    NATIONAL_DEX_OLD_UNOWN_U,
    NATIONAL_DEX_OLD_UNOWN_V,
    NATIONAL_DEX_OLD_UNOWN_W,
    NATIONAL_DEX_OLD_UNOWN_X,
    NATIONAL_DEX_OLD_UNOWN_Y,
    NATIONAL_DEX_OLD_UNOWN_Z,

};

#define KANTO_DEX_COUNT     NATIONAL_DEX_MEW
#define JOHTO_DEX_COUNT     NATIONAL_DEX_CELEBI
#define NATIONAL_DEX_COUNT  NATIONAL_DEX_DEOXYS


// Hoenn Pokedex order
enum {
    HOENN_DEX_NONE,
    HOENN_DEX_TREECKO,
    HOENN_DEX_GROVYLE,
    HOENN_DEX_SCEPTILE,
    HOENN_DEX_TORCHIC,
    HOENN_DEX_COMBUSKEN,
    HOENN_DEX_BLAZIKEN,
    HOENN_DEX_MUDKIP,
    HOENN_DEX_MARSHTOMP,
    HOENN_DEX_SWAMPERT,
    HOENN_DEX_POOCHYENA,
    HOENN_DEX_MIGHTYENA,
    HOENN_DEX_ZIGZAGOON,
    HOENN_DEX_LINOONE,
    HOENN_DEX_WURMPLE,
    HOENN_DEX_SILCOON,
    HOENN_DEX_BEAUTIFLY,
    HOENN_DEX_CASCOON,
    HOENN_DEX_DUSTOX,
    HOENN_DEX_LOTAD,
    HOENN_DEX_LOMBRE,
    HOENN_DEX_LUDICOLO,
    HOENN_DEX_SEEDOT,
    HOENN_DEX_NUZLEAF,
    HOENN_DEX_SHIFTRY,
    HOENN_DEX_TAILLOW,
    HOENN_DEX_SWELLOW,
    HOENN_DEX_WINGULL,
    HOENN_DEX_PELIPPER,
    HOENN_DEX_RALTS,
    HOENN_DEX_KIRLIA,
    HOENN_DEX_GARDEVOIR,
    HOENN_DEX_SURSKIT,
    HOENN_DEX_MASQUERAIN,
    HOENN_DEX_SHROOMISH,
    HOENN_DEX_BRELOOM,
    HOENN_DEX_SLAKOTH,
    HOENN_DEX_VIGOROTH,
    HOENN_DEX_SLAKING,
    HOENN_DEX_ABRA,
    HOENN_DEX_KADABRA,
    HOENN_DEX_ALAKAZAM,
    HOENN_DEX_NINCADA,
    HOENN_DEX_NINJASK,
    HOENN_DEX_SHEDINJA,
    HOENN_DEX_WHISMUR,
    HOENN_DEX_LOUDRED,
    HOENN_DEX_EXPLOUD,
    HOENN_DEX_MAKUHITA,
    HOENN_DEX_HARIYAMA,
    HOENN_DEX_GOLDEEN,
    HOENN_DEX_SEAKING,
    HOENN_DEX_MAGIKARP,
    HOENN_DEX_GYARADOS,
    HOENN_DEX_AZURILL,
    HOENN_DEX_MARILL,
    HOENN_DEX_AZUMARILL,
    HOENN_DEX_GEODUDE,
    HOENN_DEX_GRAVELER,
    HOENN_DEX_GOLEM,
    HOENN_DEX_NOSEPASS,
    HOENN_DEX_SKITTY,
    HOENN_DEX_DELCATTY,
    HOENN_DEX_ZUBAT,
    HOENN_DEX_GOLBAT,
    HOENN_DEX_CROBAT,
    HOENN_DEX_TENTACOOL,
    HOENN_DEX_TENTACRUEL,
    HOENN_DEX_SABLEYE,
    HOENN_DEX_MAWILE,
    HOENN_DEX_ARON,
    HOENN_DEX_LAIRON,
    HOENN_DEX_AGGRON,
    HOENN_DEX_MACHOP,
    HOENN_DEX_MACHOKE,
    HOENN_DEX_MACHAMP,
    HOENN_DEX_MEDITITE,
    HOENN_DEX_MEDICHAM,
    HOENN_DEX_ELECTRIKE,
    HOENN_DEX_MANECTRIC,
    HOENN_DEX_PLUSLE,
    HOENN_DEX_MINUN,
    HOENN_DEX_MAGNEMITE,
    HOENN_DEX_MAGNETON,
    HOENN_DEX_VOLTORB,
    HOENN_DEX_ELECTRODE,
    HOENN_DEX_VOLBEAT,
    HOENN_DEX_ILLUMISE,
    HOENN_DEX_ODDISH,
    HOENN_DEX_GLOOM,
    HOENN_DEX_VILEPLUME,
    HOENN_DEX_BELLOSSOM,
    HOENN_DEX_DODUO,
    HOENN_DEX_DODRIO,
    HOENN_DEX_ROSELIA,
    HOENN_DEX_GULPIN,
    HOENN_DEX_SWALOT,
    HOENN_DEX_CARVANHA,
    HOENN_DEX_SHARPEDO,
    HOENN_DEX_WAILMER,
    HOENN_DEX_WAILORD,
    HOENN_DEX_NUMEL,
    HOENN_DEX_CAMERUPT,
    HOENN_DEX_SLUGMA,
    HOENN_DEX_MAGCARGO,
    HOENN_DEX_TORKOAL,
    HOENN_DEX_GRIMER,
    HOENN_DEX_MUK,
    HOENN_DEX_KOFFING,
    HOENN_DEX_WEEZING,
    HOENN_DEX_SPOINK,
    HOENN_DEX_GRUMPIG,
    HOENN_DEX_SANDSHREW,
    HOENN_DEX_SANDSLASH,
    HOENN_DEX_SPINDA,
    HOENN_DEX_SKARMORY,
    HOENN_DEX_TRAPINCH,
    HOENN_DEX_VIBRAVA,
    HOENN_DEX_FLYGON,
    HOENN_DEX_CACNEA,
    HOENN_DEX_CACTURNE,
    HOENN_DEX_SWABLU,
    HOENN_DEX_ALTARIA,
    HOENN_DEX_ZANGOOSE,
    HOENN_DEX_SEVIPER,
    HOENN_DEX_LUNATONE,
    HOENN_DEX_SOLROCK,
    HOENN_DEX_BARBOACH,
    HOENN_DEX_WHISCASH,
    HOENN_DEX_CORPHISH,
    HOENN_DEX_CRAWDAUNT,
    HOENN_DEX_BALTOY,
    HOENN_DEX_CLAYDOL,
    HOENN_DEX_LILEEP,
    HOENN_DEX_CRADILY,
    HOENN_DEX_ANORITH,
    HOENN_DEX_ARMALDO,
    HOENN_DEX_IGGLYBUFF,
    HOENN_DEX_JIGGLYPUFF,
    HOENN_DEX_WIGGLYTUFF,
    HOENN_DEX_FEEBAS,
    HOENN_DEX_MILOTIC,
    HOENN_DEX_CASTFORM,
    HOENN_DEX_STARYU,
    HOENN_DEX_STARMIE,
    HOENN_DEX_KECLEON,
    HOENN_DEX_SHUPPET,
    HOENN_DEX_BANETTE,
    HOENN_DEX_DUSKULL,
    HOENN_DEX_DUSCLOPS,
    HOENN_DEX_TROPIUS,
    HOENN_DEX_CHIMECHO,
    HOENN_DEX_ABSOL,
    HOENN_DEX_VULPIX,
    HOENN_DEX_NINETALES,
    HOENN_DEX_PICHU,
    HOENN_DEX_PIKACHU,
    HOENN_DEX_RAICHU,
    HOENN_DEX_PSYDUCK,
    HOENN_DEX_GOLDUCK,
    HOENN_DEX_WYNAUT,
    HOENN_DEX_WOBBUFFET,
    HOENN_DEX_NATU,
    HOENN_DEX_XATU,
    HOENN_DEX_GIRAFARIG,
    HOENN_DEX_PHANPY,
    HOENN_DEX_DONPHAN,
    HOENN_DEX_PINSIR,
    HOENN_DEX_HERACROSS,
    HOENN_DEX_RHYHORN,
    HOENN_DEX_RHYDON,
    HOENN_DEX_SNORUNT,
    HOENN_DEX_GLALIE,
    HOENN_DEX_SPHEAL,
    HOENN_DEX_SEALEO,
    HOENN_DEX_WALREIN,
    HOENN_DEX_CLAMPERL,
    HOENN_DEX_HUNTAIL,
    HOENN_DEX_GOREBYSS,
    HOENN_DEX_RELICANTH,
    HOENN_DEX_CORSOLA,
    HOENN_DEX_CHINCHOU,
    HOENN_DEX_LANTURN,
    HOENN_DEX_LUVDISC,
    HOENN_DEX_HORSEA,
    HOENN_DEX_SEADRA,
    HOENN_DEX_KINGDRA,
    HOENN_DEX_BAGON,
    HOENN_DEX_SHELGON,
    HOENN_DEX_SALAMENCE,
    HOENN_DEX_BELDUM,
    HOENN_DEX_METANG,
    HOENN_DEX_METAGROSS,
    HOENN_DEX_REGIROCK,
    HOENN_DEX_REGICE,
    HOENN_DEX_REGISTEEL,
    HOENN_DEX_LATIAS,
    HOENN_DEX_LATIOS,
    HOENN_DEX_KYOGRE,
    HOENN_DEX_GROUDON,
    HOENN_DEX_RAYQUAZA,
    HOENN_DEX_JIRACHI,
    HOENN_DEX_DEOXYS,
    // End of Hoenn Dex (see HOENN_DEX_COUNT)
    // Here below have values but are excluded from the Pokedex
    HOENN_DEX_BULBASAUR,
    HOENN_DEX_IVYSAUR,
    HOENN_DEX_VENUSAUR,
    HOENN_DEX_CHARMANDER,
    HOENN_DEX_CHARMELEON,
    HOENN_DEX_CHARIZARD,
    HOENN_DEX_SQUIRTLE,
    HOENN_DEX_WARTORTLE,
    HOENN_DEX_BLASTOISE,
    HOENN_DEX_CATERPIE,
    HOENN_DEX_METAPOD,
    HOENN_DEX_BUTTERFREE,
    HOENN_DEX_WEEDLE,
    HOENN_DEX_KAKUNA,
    HOENN_DEX_BEEDRILL,
    HOENN_DEX_PIDGEY,
    HOENN_DEX_PIDGEOTTO,
    HOENN_DEX_PIDGEOT,
    HOENN_DEX_RATTATA,
    HOENN_DEX_RATICATE,
    HOENN_DEX_SPEAROW,
    HOENN_DEX_FEAROW,
    HOENN_DEX_EKANS,
    HOENN_DEX_ARBOK,
    HOENN_DEX_NIDORAN_F,
    HOENN_DEX_NIDORINA,
    HOENN_DEX_NIDOQUEEN,
    HOENN_DEX_NIDORAN_M,
    HOENN_DEX_NIDORINO,
    HOENN_DEX_NIDOKING,
    HOENN_DEX_CLEFAIRY,
    HOENN_DEX_CLEFABLE,
    HOENN_DEX_PARAS,
    HOENN_DEX_PARASECT,
    HOENN_DEX_VENONAT,
    HOENN_DEX_VENOMOTH,
    HOENN_DEX_DIGLETT,
    HOENN_DEX_DUGTRIO,
    HOENN_DEX_MEOWTH,
    HOENN_DEX_PERSIAN,
    HOENN_DEX_MANKEY,
    HOENN_DEX_PRIMEAPE,
    HOENN_DEX_GROWLITHE,
    HOENN_DEX_ARCANINE,
    HOENN_DEX_POLIWAG,
    HOENN_DEX_POLIWHIRL,
    HOENN_DEX_POLIWRATH,
    HOENN_DEX_BELLSPROUT,
    HOENN_DEX_WEEPINBELL,
    HOENN_DEX_VICTREEBEL,
    HOENN_DEX_PONYTA,
    HOENN_DEX_RAPIDASH,
    HOENN_DEX_SLOWPOKE,
    HOENN_DEX_SLOWBRO,
    HOENN_DEX_FARFETCHD,
    HOENN_DEX_SEEL,
    HOENN_DEX_DEWGONG,
    HOENN_DEX_SHELLDER,
    HOENN_DEX_CLOYSTER,
    HOENN_DEX_GASTLY,
    HOENN_DEX_HAUNTER,
    HOENN_DEX_GENGAR,
    HOENN_DEX_ONIX,
    HOENN_DEX_DROWZEE,
    HOENN_DEX_HYPNO,
    HOENN_DEX_KRABBY,
    HOENN_DEX_KINGLER,
    HOENN_DEX_EXEGGCUTE,
    HOENN_DEX_EXEGGUTOR,
    HOENN_DEX_CUBONE,
    HOENN_DEX_MAROWAK,
    HOENN_DEX_HITMONLEE,
    HOENN_DEX_HITMONCHAN,
    HOENN_DEX_LICKITUNG,
    HOENN_DEX_CHANSEY,
    HOENN_DEX_TANGELA,
    HOENN_DEX_KANGASKHAN,
    HOENN_DEX_MR_MIME,
    HOENN_DEX_SCYTHER,
    HOENN_DEX_JYNX,
    HOENN_DEX_ELECTABUZZ,
    HOENN_DEX_MAGMAR,
    HOENN_DEX_TAUROS,
    HOENN_DEX_LAPRAS,
    HOENN_DEX_DITTO,
    HOENN_DEX_EEVEE,
    HOENN_DEX_VAPOREON,
    HOENN_DEX_JOLTEON,
    HOENN_DEX_FLAREON,
    HOENN_DEX_PORYGON,
    HOENN_DEX_OMANYTE,
    HOENN_DEX_OMASTAR,
    HOENN_DEX_KABUTO,
    HOENN_DEX_KABUTOPS,
    HOENN_DEX_AERODACTYL,
    HOENN_DEX_SNORLAX,
    HOENN_DEX_ARTICUNO,
    HOENN_DEX_ZAPDOS,
    HOENN_DEX_MOLTRES,
    HOENN_DEX_DRATINI,
    HOENN_DEX_DRAGONAIR,
    HOENN_DEX_DRAGONITE,
    HOENN_DEX_MEWTWO,
    HOENN_DEX_MEW,
    HOENN_DEX_CHIKORITA,
    HOENN_DEX_BAYLEEF,
    HOENN_DEX_MEGANIUM,
    HOENN_DEX_CYNDAQUIL,
    HOENN_DEX_QUILAVA,
    HOENN_DEX_TYPHLOSION,
    HOENN_DEX_TOTODILE,
    HOENN_DEX_CROCONAW,
    HOENN_DEX_FERALIGATR,
    HOENN_DEX_SENTRET,
    HOENN_DEX_FURRET,
    HOENN_DEX_HOOTHOOT,
    HOENN_DEX_NOCTOWL,
    HOENN_DEX_LEDYBA,
    HOENN_DEX_LEDIAN,
    HOENN_DEX_SPINARAK,
    HOENN_DEX_ARIADOS,
    HOENN_DEX_CLEFFA,
    HOENN_DEX_TOGEPI,
    HOENN_DEX_TOGETIC,
    HOENN_DEX_MAREEP,
    HOENN_DEX_FLAAFFY,
    HOENN_DEX_AMPHAROS,
    HOENN_DEX_SUDOWOODO,
    HOENN_DEX_POLITOED,
    HOENN_DEX_HOPPIP,
    HOENN_DEX_SKIPLOOM,
    HOENN_DEX_JUMPLUFF,
    HOENN_DEX_AIPOM,
    HOENN_DEX_SUNKERN,
    HOENN_DEX_SUNFLORA,
    HOENN_DEX_YANMA,
    HOENN_DEX_WOOPER,
    HOENN_DEX_QUAGSIRE,
    HOENN_DEX_ESPEON,
    HOENN_DEX_UMBREON,
    HOENN_DEX_MURKROW,
    HOENN_DEX_SLOWKING,
    HOENN_DEX_MISDREAVUS,
    HOENN_DEX_UNOWN,
    HOENN_DEX_PINECO,
    HOENN_DEX_FORRETRESS,
    HOENN_DEX_DUNSPARCE,
    HOENN_DEX_GLIGAR,
    HOENN_DEX_STEELIX,
    HOENN_DEX_SNUBBULL,
    HOENN_DEX_GRANBULL,
    HOENN_DEX_QWILFISH,
    HOENN_DEX_SCIZOR,
    HOENN_DEX_SHUCKLE,
    HOENN_DEX_SNEASEL,
    HOENN_DEX_TEDDIURSA,
    HOENN_DEX_URSARING,
    HOENN_DEX_SWINUB,
    HOENN_DEX_PILOSWINE,
    HOENN_DEX_REMORAID,
    HOENN_DEX_OCTILLERY,
    HOENN_DEX_DELIBIRD,
    HOENN_DEX_MANTINE,
    HOENN_DEX_HOUNDOUR,
    HOENN_DEX_HOUNDOOM,
    HOENN_DEX_PORYGON2,
    HOENN_DEX_STANTLER,
    HOENN_DEX_SMEARGLE,
    HOENN_DEX_TYROGUE,
    HOENN_DEX_HITMONTOP,
    HOENN_DEX_SMOOCHUM,
    HOENN_DEX_ELEKID,
    HOENN_DEX_MAGBY,
    HOENN_DEX_MILTANK,
    HOENN_DEX_BLISSEY,
    HOENN_DEX_RAIKOU,
    HOENN_DEX_ENTEI,
    HOENN_DEX_SUICUNE,
    HOENN_DEX_LARVITAR,
    HOENN_DEX_PUPITAR,
    HOENN_DEX_TYRANITAR,
    HOENN_DEX_LUGIA,
    HOENN_DEX_HO_OH,
    HOENN_DEX_CELEBI,
    HOENN_DEX_OLD_UNOWN_B,
    HOENN_DEX_OLD_UNOWN_C,
    HOENN_DEX_OLD_UNOWN_D,
    HOENN_DEX_OLD_UNOWN_E,
    HOENN_DEX_OLD_UNOWN_F,
    HOENN_DEX_OLD_UNOWN_G,
    HOENN_DEX_OLD_UNOWN_H,
    HOENN_DEX_OLD_UNOWN_I,
    HOENN_DEX_OLD_UNOWN_J,
    HOENN_DEX_OLD_UNOWN_K,
    HOENN_DEX_OLD_UNOWN_L,
    HOENN_DEX_OLD_UNOWN_M,
    HOENN_DEX_OLD_UNOWN_N,
    HOENN_DEX_OLD_UNOWN_O,
    HOENN_DEX_OLD_UNOWN_P,
    HOENN_DEX_OLD_UNOWN_Q,
    HOENN_DEX_OLD_UNOWN_R,
    HOENN_DEX_OLD_UNOWN_S,
    HOENN_DEX_OLD_UNOWN_T,
    HOENN_DEX_OLD_UNOWN_U,
    HOENN_DEX_OLD_UNOWN_V,
    HOENN_DEX_OLD_UNOWN_W,
    HOENN_DEX_OLD_UNOWN_X,
    HOENN_DEX_OLD_UNOWN_Y,
    HOENN_DEX_OLD_UNOWN_Z,
};

#define HOENN_DEX_COUNT HOENN_DEX_DEOXYS

// Extended Pokedex order
enum {
    EXTENDED_DEX_NONE,
	EXTENDED_DEX_BULBASAUR,
	EXTENDED_DEX_IVYSAUR,
	EXTENDED_DEX_VENUSAUR,
	EXTENDED_DEX_CHARMANDER,
	EXTENDED_DEX_CHARMELEON,
	EXTENDED_DEX_CHARIZARD,
	EXTENDED_DEX_SQUIRTLE,
	EXTENDED_DEX_WARTORTLE,
	EXTENDED_DEX_BLASTOISE,
	EXTENDED_DEX_CATERPIE,
	EXTENDED_DEX_METAPOD,
	EXTENDED_DEX_BUTTERFREE,
	EXTENDED_DEX_WEEDLE,
	EXTENDED_DEX_KAKUNA,
	EXTENDED_DEX_BEEDRILL,
	EXTENDED_DEX_PIDGEY,
	EXTENDED_DEX_PIDGEOTTO,
	EXTENDED_DEX_PIDGEOT,
	EXTENDED_DEX_RATTATA,
	EXTENDED_DEX_RATICATE,
	EXTENDED_DEX_SPEAROW,
	EXTENDED_DEX_FEAROW,
	EXTENDED_DEX_EKANS,
	EXTENDED_DEX_ARBOK,
	EXTENDED_DEX_PICHU,
	EXTENDED_DEX_PIKACHU,
	EXTENDED_DEX_RAICHU,
	EXTENDED_DEX_SANDSHREW,
	EXTENDED_DEX_SANDSLASH,
	EXTENDED_DEX_NIDORAN_F,
	EXTENDED_DEX_NIDORINA,
	EXTENDED_DEX_NIDOQUEEN,
	EXTENDED_DEX_NIDORAN_M,
	EXTENDED_DEX_NIDORINO,
	EXTENDED_DEX_NIDOKING,
	EXTENDED_DEX_CLEFFA,
	EXTENDED_DEX_CLEFAIRY,
	EXTENDED_DEX_CLEFABLE,
	EXTENDED_DEX_VULPIX,
	EXTENDED_DEX_NINETALES,
	EXTENDED_DEX_IGGLYBUFF,
	EXTENDED_DEX_JIGGLYPUFF,
	EXTENDED_DEX_WIGGLYTUFF,
	EXTENDED_DEX_ZUBAT,
	EXTENDED_DEX_GOLBAT,
	EXTENDED_DEX_CROBAT,
	EXTENDED_DEX_ODDISH,
	EXTENDED_DEX_GLOOM,
	EXTENDED_DEX_VILEPLUME,
	EXTENDED_DEX_BELLOSSOM,
	EXTENDED_DEX_PARAS,
	EXTENDED_DEX_PARASECT,
	EXTENDED_DEX_VENONAT,
	EXTENDED_DEX_VENOMOTH,
	EXTENDED_DEX_DIGLETT,
	EXTENDED_DEX_DUGTRIO,
	EXTENDED_DEX_MEOWTH,
	EXTENDED_DEX_PERSIAN,
	EXTENDED_DEX_PSYDUCK,
	EXTENDED_DEX_GOLDUCK,
	EXTENDED_DEX_MANKEY,
	EXTENDED_DEX_PRIMEAPE,
	EXTENDED_DEX_GROWLITHE,
	EXTENDED_DEX_ARCANINE,
	EXTENDED_DEX_POLIWAG,
	EXTENDED_DEX_POLIWHIRL,
	EXTENDED_DEX_POLIWRATH,
	EXTENDED_DEX_POLITOED,
	EXTENDED_DEX_ABRA,
	EXTENDED_DEX_KADABRA,
	EXTENDED_DEX_ALAKAZAM,
	EXTENDED_DEX_MACHOP,
	EXTENDED_DEX_MACHOKE,
	EXTENDED_DEX_MACHAMP,
	EXTENDED_DEX_BELLSPROUT,
	EXTENDED_DEX_WEEPINBELL,
	EXTENDED_DEX_VICTREEBEL,
	EXTENDED_DEX_TENTACOOL,
	EXTENDED_DEX_TENTACRUEL,
	EXTENDED_DEX_GEODUDE,
	EXTENDED_DEX_GRAVELER,
	EXTENDED_DEX_GOLEM,
	EXTENDED_DEX_PONYTA,
	EXTENDED_DEX_RAPIDASH,
	EXTENDED_DEX_SLOWPOKE,
	EXTENDED_DEX_SLOWBRO,
	EXTENDED_DEX_SLOWKING,
	EXTENDED_DEX_MAGNEMITE,
	EXTENDED_DEX_MAGNETON,
	EXTENDED_DEX_FARFETCHD,
	EXTENDED_DEX_DODUO,
	EXTENDED_DEX_DODRIO,
	EXTENDED_DEX_SEEL,
	EXTENDED_DEX_DEWGONG,
	EXTENDED_DEX_GRIMER,
	EXTENDED_DEX_MUK,
	EXTENDED_DEX_SHELLDER,
	EXTENDED_DEX_CLOYSTER,
	EXTENDED_DEX_GASTLY,
	EXTENDED_DEX_HAUNTER,
	EXTENDED_DEX_GENGAR,
	EXTENDED_DEX_ONIX,
	EXTENDED_DEX_STEELIX,
	EXTENDED_DEX_DROWZEE,
	EXTENDED_DEX_HYPNO,
	EXTENDED_DEX_KRABBY,
	EXTENDED_DEX_KINGLER,
	EXTENDED_DEX_VOLTORB,
	EXTENDED_DEX_ELECTRODE,
	EXTENDED_DEX_EXEGGCUTE,
	EXTENDED_DEX_EXEGGUTOR,
	EXTENDED_DEX_CUBONE,
	EXTENDED_DEX_MAROWAK,
	EXTENDED_DEX_TYROGUE,
	EXTENDED_DEX_HITMONLEE,
	EXTENDED_DEX_HITMONCHAN,
	EXTENDED_DEX_HITMONTOP,
	EXTENDED_DEX_LICKITUNG,
	EXTENDED_DEX_KOFFING,
	EXTENDED_DEX_WEEZING,
	EXTENDED_DEX_RHYHORN,
	EXTENDED_DEX_RHYDON,
	EXTENDED_DEX_CHANSEY,
	EXTENDED_DEX_BLISSEY,
	EXTENDED_DEX_TANGELA,
	EXTENDED_DEX_KANGASKHAN,
	EXTENDED_DEX_HORSEA,
	EXTENDED_DEX_SEADRA,
	EXTENDED_DEX_KINGDRA,
	EXTENDED_DEX_GOLDEEN,
	EXTENDED_DEX_SEAKING,
	EXTENDED_DEX_STARYU,
	EXTENDED_DEX_STARMIE,
	EXTENDED_DEX_MR_MIME,
	EXTENDED_DEX_SCYTHER,
	EXTENDED_DEX_SCIZOR,
	EXTENDED_DEX_SMOOCHUM,
	EXTENDED_DEX_JYNX,
	EXTENDED_DEX_ELEKID,
	EXTENDED_DEX_ELECTABUZZ,
	EXTENDED_DEX_MAGBY,
	EXTENDED_DEX_MAGMAR,
	EXTENDED_DEX_PINSIR,
	EXTENDED_DEX_TAUROS,
	EXTENDED_DEX_MAGIKARP,
	EXTENDED_DEX_GYARADOS,
	EXTENDED_DEX_LAPRAS,
	EXTENDED_DEX_DITTO,
	EXTENDED_DEX_EEVEE,
	EXTENDED_DEX_VAPOREON,
	EXTENDED_DEX_JOLTEON,
	EXTENDED_DEX_FLAREON,
	EXTENDED_DEX_ESPEON,
	EXTENDED_DEX_UMBREON,
	EXTENDED_DEX_PORYGON,
	EXTENDED_DEX_PORYGON2,
	EXTENDED_DEX_OMANYTE,
	EXTENDED_DEX_OMASTAR,
	EXTENDED_DEX_KABUTO,
	EXTENDED_DEX_KABUTOPS,
	EXTENDED_DEX_AERODACTYL,
	EXTENDED_DEX_SNORLAX,
	EXTENDED_DEX_ARTICUNO,
	EXTENDED_DEX_ZAPDOS,
	EXTENDED_DEX_MOLTRES,
	EXTENDED_DEX_DRATINI,
	EXTENDED_DEX_DRAGONAIR,
	EXTENDED_DEX_DRAGONITE,
	EXTENDED_DEX_MEWTWO,
	EXTENDED_DEX_MEW,
	EXTENDED_DEX_SENTRET,
	EXTENDED_DEX_FURRET,
	EXTENDED_DEX_HOOTHOOT,
	EXTENDED_DEX_NOCTOWL,
	EXTENDED_DEX_LEDYBA,
	EXTENDED_DEX_LEDIAN,
	EXTENDED_DEX_SPINARAK,
	EXTENDED_DEX_ARIADOS,
	EXTENDED_DEX_CHINCHOU,
	EXTENDED_DEX_LANTURN,
	EXTENDED_DEX_TOGEPI,
	EXTENDED_DEX_TOGETIC,
	EXTENDED_DEX_NATU,
	EXTENDED_DEX_XATU,
	EXTENDED_DEX_MAREEP,
	EXTENDED_DEX_FLAAFFY,
	EXTENDED_DEX_AMPHAROS,
	EXTENDED_DEX_AZURILL,
	EXTENDED_DEX_MARILL,
	EXTENDED_DEX_AZUMARILL,
	EXTENDED_DEX_SUDOWOODO,
	EXTENDED_DEX_HOPPIP,
	EXTENDED_DEX_SKIPLOOM,
	EXTENDED_DEX_JUMPLUFF,
	EXTENDED_DEX_AIPOM,
	EXTENDED_DEX_SUNKERN,
	EXTENDED_DEX_SUNFLORA,
	EXTENDED_DEX_YANMA,
	EXTENDED_DEX_WOOPER,
	EXTENDED_DEX_QUAGSIRE,
	EXTENDED_DEX_MURKROW,
	EXTENDED_DEX_MISDREAVUS,
	EXTENDED_DEX_UNOWN,
	EXTENDED_DEX_WYNAUT,
	EXTENDED_DEX_WOBBUFFET,
	EXTENDED_DEX_GIRAFARIG,
	EXTENDED_DEX_PINECO,
	EXTENDED_DEX_FORRETRESS,
	EXTENDED_DEX_DUNSPARCE,
	EXTENDED_DEX_GLIGAR,
	EXTENDED_DEX_SNUBBULL,
	EXTENDED_DEX_GRANBULL,
	EXTENDED_DEX_QWILFISH,
	EXTENDED_DEX_SHUCKLE,
	EXTENDED_DEX_HERACROSS,
	EXTENDED_DEX_SNEASEL,
	EXTENDED_DEX_TEDDIURSA,
	EXTENDED_DEX_URSARING,
	EXTENDED_DEX_SLUGMA,
	EXTENDED_DEX_MAGCARGO,
	EXTENDED_DEX_SWINUB,
	EXTENDED_DEX_PILOSWINE,
	EXTENDED_DEX_CORSOLA,
	EXTENDED_DEX_REMORAID,
	EXTENDED_DEX_OCTILLERY,
	EXTENDED_DEX_DELIBIRD,
	EXTENDED_DEX_MANTINE,
	EXTENDED_DEX_SKARMORY,
	EXTENDED_DEX_HOUNDOUR,
	EXTENDED_DEX_HOUNDOOM,
	EXTENDED_DEX_PHANPY,
	EXTENDED_DEX_DONPHAN,
	EXTENDED_DEX_STANTLER,
	EXTENDED_DEX_SMEARGLE,
	EXTENDED_DEX_MILTANK,
	EXTENDED_DEX_RAIKOU,
	EXTENDED_DEX_ENTEI,
	EXTENDED_DEX_SUICUNE,
	EXTENDED_DEX_LARVITAR,
	EXTENDED_DEX_PUPITAR,
	EXTENDED_DEX_TYRANITAR,
	EXTENDED_DEX_LUGIA,
	EXTENDED_DEX_HO_OH,
	EXTENDED_DEX_LATIAS,
	EXTENDED_DEX_LATIOS,
	EXTENDED_DEX_DEOXYS,
    // End of Extended Dex (see EXTENDED_DEX_COUNT)
    // Here below have values but are excluded from the Pokedex
	EXTENDED_DEX_CHIKORITA,
	EXTENDED_DEX_BAYLEEF,
	EXTENDED_DEX_MEGANIUM,
	EXTENDED_DEX_CYNDAQUIL,
	EXTENDED_DEX_QUILAVA,
	EXTENDED_DEX_TYPHLOSION,
	EXTENDED_DEX_TOTODILE,
	EXTENDED_DEX_CROCONAW,
	EXTENDED_DEX_FERALIGATR,
	EXTENDED_DEX_CELEBI,
	EXTENDED_DEX_TREECKO,
	EXTENDED_DEX_GROVYLE,
	EXTENDED_DEX_SCEPTILE,
	EXTENDED_DEX_TORCHIC,
	EXTENDED_DEX_COMBUSKEN,
	EXTENDED_DEX_BLAZIKEN,
	EXTENDED_DEX_MUDKIP,
	EXTENDED_DEX_MARSHTOMP,
	EXTENDED_DEX_SWAMPERT,
	EXTENDED_DEX_POOCHYENA,
	EXTENDED_DEX_MIGHTYENA,
	EXTENDED_DEX_ZIGZAGOON,
	EXTENDED_DEX_LINOONE,
	EXTENDED_DEX_WURMPLE,
	EXTENDED_DEX_SILCOON,
	EXTENDED_DEX_BEAUTIFLY,
	EXTENDED_DEX_CASCOON,
	EXTENDED_DEX_DUSTOX,
	EXTENDED_DEX_LOTAD,
	EXTENDED_DEX_LOMBRE,
	EXTENDED_DEX_LUDICOLO,
	EXTENDED_DEX_SEEDOT,
	EXTENDED_DEX_NUZLEAF,
	EXTENDED_DEX_SHIFTRY,
	EXTENDED_DEX_TAILLOW,
	EXTENDED_DEX_SWELLOW,
	EXTENDED_DEX_WINGULL,
	EXTENDED_DEX_PELIPPER,
	EXTENDED_DEX_RALTS,
	EXTENDED_DEX_KIRLIA,
	EXTENDED_DEX_GARDEVOIR,
	EXTENDED_DEX_SURSKIT,
	EXTENDED_DEX_MASQUERAIN,
	EXTENDED_DEX_SHROOMISH,
	EXTENDED_DEX_BRELOOM,
	EXTENDED_DEX_SLAKOTH,
	EXTENDED_DEX_VIGOROTH,
	EXTENDED_DEX_SLAKING,
	EXTENDED_DEX_NINCADA,
	EXTENDED_DEX_NINJASK,
	EXTENDED_DEX_SHEDINJA,
	EXTENDED_DEX_WHISMUR,
	EXTENDED_DEX_LOUDRED,
	EXTENDED_DEX_EXPLOUD,
	EXTENDED_DEX_MAKUHITA,
	EXTENDED_DEX_HARIYAMA,
	EXTENDED_DEX_NOSEPASS,
	EXTENDED_DEX_SKITTY,
	EXTENDED_DEX_DELCATTY,
	EXTENDED_DEX_SABLEYE,
	EXTENDED_DEX_MAWILE,
	EXTENDED_DEX_ARON,
	EXTENDED_DEX_LAIRON,
	EXTENDED_DEX_AGGRON,
	EXTENDED_DEX_MEDITITE,
	EXTENDED_DEX_MEDICHAM,
	EXTENDED_DEX_ELECTRIKE,
	EXTENDED_DEX_MANECTRIC,
	EXTENDED_DEX_PLUSLE,
	EXTENDED_DEX_MINUN,
	EXTENDED_DEX_VOLBEAT,
	EXTENDED_DEX_ILLUMISE,
	EXTENDED_DEX_ROSELIA,
	EXTENDED_DEX_GULPIN,
	EXTENDED_DEX_SWALOT,
	EXTENDED_DEX_CARVANHA,
	EXTENDED_DEX_SHARPEDO,
	EXTENDED_DEX_WAILMER,
	EXTENDED_DEX_WAILORD,
	EXTENDED_DEX_NUMEL,
	EXTENDED_DEX_CAMERUPT,
	EXTENDED_DEX_TORKOAL,
	EXTENDED_DEX_SPOINK,
	EXTENDED_DEX_GRUMPIG,
	EXTENDED_DEX_SPINDA,
	EXTENDED_DEX_TRAPINCH,
	EXTENDED_DEX_VIBRAVA,
	EXTENDED_DEX_FLYGON,
	EXTENDED_DEX_CACNEA,
	EXTENDED_DEX_CACTURNE,
	EXTENDED_DEX_SWABLU,
	EXTENDED_DEX_ALTARIA,
	EXTENDED_DEX_ZANGOOSE,
	EXTENDED_DEX_SEVIPER,
	EXTENDED_DEX_LUNATONE,
	EXTENDED_DEX_SOLROCK,
	EXTENDED_DEX_BARBOACH,
	EXTENDED_DEX_WHISCASH,
	EXTENDED_DEX_CORPHISH,
	EXTENDED_DEX_CRAWDAUNT,
	EXTENDED_DEX_BALTOY,
	EXTENDED_DEX_CLAYDOL,
	EXTENDED_DEX_LILEEP,
	EXTENDED_DEX_CRADILY,
	EXTENDED_DEX_ANORITH,
	EXTENDED_DEX_ARMALDO,
	EXTENDED_DEX_FEEBAS,
	EXTENDED_DEX_MILOTIC,
	EXTENDED_DEX_CASTFORM,
	EXTENDED_DEX_KECLEON,
	EXTENDED_DEX_SHUPPET,
	EXTENDED_DEX_BANETTE,
	EXTENDED_DEX_DUSKULL,
	EXTENDED_DEX_DUSCLOPS,
	EXTENDED_DEX_TROPIUS,
	EXTENDED_DEX_CHIMECHO,
	EXTENDED_DEX_ABSOL,
	EXTENDED_DEX_SNORUNT,
	EXTENDED_DEX_GLALIE,
	EXTENDED_DEX_SPHEAL,
	EXTENDED_DEX_SEALEO,
	EXTENDED_DEX_WALREIN,
	EXTENDED_DEX_CLAMPERL,
	EXTENDED_DEX_HUNTAIL,
	EXTENDED_DEX_GOREBYSS,
	EXTENDED_DEX_RELICANTH,
	EXTENDED_DEX_LUVDISC,
	EXTENDED_DEX_BAGON,
	EXTENDED_DEX_SHELGON,
	EXTENDED_DEX_SALAMENCE,
	EXTENDED_DEX_BELDUM,
	EXTENDED_DEX_METANG,
	EXTENDED_DEX_METAGROSS,
	EXTENDED_DEX_REGIROCK,
	EXTENDED_DEX_REGICE,
	EXTENDED_DEX_REGISTEEL,
	EXTENDED_DEX_KYOGRE,
	EXTENDED_DEX_GROUDON,
	EXTENDED_DEX_RAYQUAZA,
	EXTENDED_DEX_JIRACHI,
    EXTENDED_DEX_REGIGIGAS,
    EXTENDED_DEX_OLD_UNOWN_B,
    EXTENDED_DEX_OLD_UNOWN_C,
    EXTENDED_DEX_OLD_UNOWN_D,
    EXTENDED_DEX_OLD_UNOWN_E,
    EXTENDED_DEX_OLD_UNOWN_F,
    EXTENDED_DEX_OLD_UNOWN_G,
    EXTENDED_DEX_OLD_UNOWN_H,
    EXTENDED_DEX_OLD_UNOWN_I,
    EXTENDED_DEX_OLD_UNOWN_J,
    EXTENDED_DEX_OLD_UNOWN_K,
    EXTENDED_DEX_OLD_UNOWN_L,
    EXTENDED_DEX_OLD_UNOWN_M,
    EXTENDED_DEX_OLD_UNOWN_N,
    EXTENDED_DEX_OLD_UNOWN_O,
    EXTENDED_DEX_OLD_UNOWN_P,
    EXTENDED_DEX_OLD_UNOWN_Q,
    EXTENDED_DEX_OLD_UNOWN_R,
    EXTENDED_DEX_OLD_UNOWN_S,
    EXTENDED_DEX_OLD_UNOWN_T,
    EXTENDED_DEX_OLD_UNOWN_U,
    EXTENDED_DEX_OLD_UNOWN_V,
    EXTENDED_DEX_OLD_UNOWN_W,
    EXTENDED_DEX_OLD_UNOWN_X,
    EXTENDED_DEX_OLD_UNOWN_Y,
    EXTENDED_DEX_OLD_UNOWN_Z,
};

#define EXTENDED_DEX_COUNT EXTENDED_DEX_DEOXYS

#endif // GUARD_CONSTANTS_POKEDEX_H
