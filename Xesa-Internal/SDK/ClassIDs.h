#pragma once
//pasta from CSGOSimple
enum ClassID {
	ClassID_CAI_BaseNPC = 0,
	ClassID_CAK47,
	ClassID_CBaseAnimating,
	ClassID_CBaseAnimatingOverlay,
	ClassID_CBaseAttributableItem,
	ClassID_CBaseButton,
	ClassID_CBaseCombatCharacter,
	ClassID_CBaseCombatWeapon,
	ClassID_CBaseCSGrenade,
	ClassID_CBaseCSGrenadeProjectile,
	ClassID_CBaseDoor,
	ClassID_CBaseEntity,
	ClassID_CBaseFlex,
	ClassID_CBaseGrenade,
	ClassID_CBaseParticleEntity,
	ClassID_CBasePlayer,
	ClassID_CBasePropDoor,
	ClassID_CBaseTeamObjectiveResource,
	ClassID_CBaseTempEntity,
	ClassID_CBaseToggle,
	ClassID_CBaseTrigger,
	ClassID_CBaseViewModel,
	ClassID_CBaseVPhysicsTrigger,
	ClassID_CBaseWeaponWorldModel,
	ClassID_CBeam,
	ClassID_CBeamSpotlight,
	ClassID_CBoneFollower,
	ClassID_CBRC4Target,
	ClassID_CBreachCharge,
	ClassID_CBreachChargeProjectile,
	ClassID_CBreakableProp,
	ClassID_CBreakableSurface,
	ClassID_CBumpMine,
	ClassID_CBumpMineProjectile,
	ClassID_CC4,
	ClassID_CCascadeLight,
	ClassID_CChicken,
	ClassID_CColorCorrection,
	ClassID_CColorCorrectionVolume,
	ClassID_CCSGameRulesProxy,
	ClassID_CCSPlayer,
	ClassID_CCSPlayerResource,
	ClassID_CCSRagdoll,
	ClassID_CCSTeam,
	ClassID_CDangerZone,
	ClassID_CDangerZoneController,
	ClassID_CDEagle,
	ClassID_CDecoyGrenade,
	ClassID_CDecoyProjectile,
	ClassID_CDrone,
	ClassID_CDronegun,
	ClassID_CDynamicLight,
	ClassID_CDynamicProp,
	ClassID_CEconEntity,
	ClassID_CEconWearable,
	ClassID_CEmbers,
	ClassID_CEntityDissolve,
	ClassID_CEntityFlame,
	ClassID_CEntityFreezing,
	ClassID_CEntityParticleTrail,
	ClassID_CEnvAmbientLight,
	ClassID_CEnvDetailController,
	ClassID_CEnvDOFController,
	ClassID_CEnvGasCanister,
	ClassID_CEnvParticleScript,
	ClassID_CEnvProjectedTexture,
	ClassID_CEnvQuadraticBeam,
	ClassID_CEnvScreenEffect,
	ClassID_CEnvScreenOverlay,
	ClassID_CEnvTonemapController,
	ClassID_CEnvWind,
	ClassID_CFEPlayerDecal,
	ClassID_CFireCrackerBlast,
	ClassID_CFireSmoke,
	ClassID_CFireTrail,
	ClassID_CFish,
	ClassID_CFists,
	ClassID_CFlashbang,
	ClassID_CFogController,
	ClassID_CFootstepControl,
	ClassID_CFunc_Dust,
	ClassID_CFunc_LOD,
	ClassID_CFuncAreaPortalWindow,
	ClassID_CFuncBrush,
	ClassID_CFuncConveyor,
	ClassID_CFuncLadder,
	ClassID_CFuncMonitor,
	ClassID_CFuncMoveLinear,
	ClassID_CFuncOccluder,
	ClassID_CFuncReflectiveGlass,
	ClassID_CFuncRotating,
	ClassID_CFuncSmokeVolume,
	ClassID_CFuncTrackTrain,
	ClassID_CGameRulesProxy,
	ClassID_CGrassBurn,
	ClassID_CHandleTest,
	ClassID_CHEGrenade,
	ClassID_CHostage,
	ClassID_CHostageCarriableProp,
	ClassID_CIncendiaryGrenade,
	ClassID_CInferno,
	ClassID_CInfoLadderDismount,
	ClassID_CInfoMapRegion,
	ClassID_CInfoOverlayAccessor,
	ClassID_CItem_Healthshot,
	ClassID_CItemCash,
	ClassID_CItemDogtags,
	ClassID_CKnife,
	ClassID_CKnifeGG,
	ClassID_CLightGlow,
	ClassID_CMaterialModifyControl,
	ClassID_CMelee,
	ClassID_CMolotovGrenade,
	ClassID_CMolotovProjectile,
	ClassID_CMovieDisplay,
	ClassID_CParadropChopper,
	ClassID_CParticleFire,
	ClassID_CParticlePerformanceMonitor,
	ClassID_CParticleSystem,
	ClassID_CPhysBox,
	ClassID_CPhysBoxMultiplayer,
	ClassID_CPhysicsProp,
	ClassID_CPhysicsPropMultiplayer,
	ClassID_CPhysMagnet,
	ClassID_CPhysPropAmmoBox,
	ClassID_CPhysPropLootCrate,
	ClassID_CPhysPropRadarJammer,
	ClassID_CPhysPropWeaponUpgrade,
	ClassID_CPlantedC4,
	ClassID_CPlasma,
	ClassID_CPlayerPing,
	ClassID_CPlayerResource,
	ClassID_CPointCamera,
	ClassID_CPointCommentaryNode,
	ClassID_CPointWorldText,
	ClassID_CPoseController,
	ClassID_CPostProcessController,
	ClassID_CPrecipitation,
	ClassID_CPrecipitationBlocker,
	ClassID_CPredictedViewModel,
	ClassID_CProp_Hallucination,
	ClassID_CPropCounter,
	ClassID_CPropDoorRotating,
	ClassID_CPropJeep,
	ClassID_CPropVehicleDriveable,
	ClassID_CRagdollManager,
	ClassID_CRagdollProp,
	ClassID_CRagdollPropAttached,
	ClassID_CRopeKeyframe,
	ClassID_CSCAR17,
	ClassID_CSceneEntity,
	ClassID_CSensorGrenade,
	ClassID_CSensorGrenadeProjectile,
	ClassID_CShadowControl,
	ClassID_CSlideshowDisplay,
	ClassID_CSmokeGrenade,
	ClassID_CSmokeGrenadeProjectile,
	ClassID_CSmokeStack,
	ClassID_CSnowball,
	ClassID_CSnowballPile,
	ClassID_CSnowballProjectile,
	ClassID_CSpatialEntity,
	ClassID_CSpotlightEnd,
	ClassID_CSprite,
	ClassID_CSpriteOriented,
	ClassID_CSpriteTrail,
	ClassID_CStatueProp,
	ClassID_CSteamJet,
	ClassID_CSun,
	ClassID_CSunlightShadowControl,
	ClassID_CSurvivalSpawnChopper,
	ClassID_CTablet,
	ClassID_CTeam,
	ClassID_CTeamplayRoundBasedRulesProxy,
	ClassID_CTEArmorRicochet,
	ClassID_CTEBaseBeam,
	ClassID_CTEBeamEntPoint,
	ClassID_CTEBeamEnts,
	ClassID_CTEBeamFollow,
	ClassID_CTEBeamLaser,
	ClassID_CTEBeamPoints,
	ClassID_CTEBeamRing,
	ClassID_CTEBeamRingPoint,
	ClassID_CTEBeamSpline,
	ClassID_CTEBloodSprite,
	ClassID_CTEBloodStream,
	ClassID_CTEBreakModel,
	ClassID_CTEBSPDecal,
	ClassID_CTEBubbles,
	ClassID_CTEBubbleTrail,
	ClassID_CTEClientProjectile,
	ClassID_CTEDecal,
	ClassID_CTEDust,
	ClassID_CTEDynamicLight,
	ClassID_CTEEffectDispatch,
	ClassID_CTEEnergySplash,
	ClassID_CTEExplosion,
	ClassID_CTEFireBullets,
	ClassID_CTEFizz,
	ClassID_CTEFootprintDecal,
	ClassID_CTEFoundryHelpers,
	ClassID_CTEGaussExplosion,
	ClassID_CTEGlowSprite,
	ClassID_CTEImpact,
	ClassID_CTEKillPlayerAttachments,
	ClassID_CTELargeFunnel,
	ClassID_CTEMetalSparks,
	ClassID_CTEMuzzleFlash,
	ClassID_CTEParticleSystem,
	ClassID_CTEPhysicsProp,
	ClassID_CTEPlantBomb,
	ClassID_CTEPlayerAnimEvent,
	ClassID_CTEPlayerDecal,
	ClassID_CTEProjectedDecal,
	ClassID_CTERadioIcon,
	ClassID_CTEShatterSurface,
	ClassID_CTEShowLine,
	ClassID_CTesla,
	ClassID_CTESmoke,
	ClassID_CTESparks,
	ClassID_CTESprite,
	ClassID_CTESpriteSpray,
	ClassID_CTest_ProxyToggle_Networkable,
	ClassID_CTestTraceline,
	ClassID_CTEWorldDecal,
	ClassID_CTriggerPlayerMovement,
	ClassID_CTriggerSoundOperator,
	ClassID_CVGuiScreen,
	ClassID_CVoteController,
	ClassID_CWaterBullet,
	ClassID_CWaterLODControl,
	ClassID_CWeaponAug,
	ClassID_CWeaponAWP,
	ClassID_CWeaponBaseItem,
	ClassID_CWeaponBizon,
	ClassID_CWeaponCSBase,
	ClassID_CWeaponCSBaseGun,
	ClassID_CWeaponCycler,
	ClassID_CWeaponElite,
	ClassID_CWeaponFamas,
	ClassID_CWeaponFiveSeven,
	ClassID_CWeaponG3SG1,
	ClassID_CWeaponGalil,
	ClassID_CWeaponGalilAR,
	ClassID_CWeaponGlock,
	ClassID_CWeaponHKP2000,
	ClassID_CWeaponM249,
	ClassID_CWeaponM3,
	ClassID_CWeaponM4A1,
	ClassID_CWeaponMAC10,
	ClassID_CWeaponMag7,
	ClassID_CWeaponMP5Navy,
	ClassID_CWeaponMP7,
	ClassID_CWeaponMP9,
	ClassID_CWeaponNegev,
	ClassID_CWeaponNOVA,
	ClassID_CWeaponP228,
	ClassID_CWeaponP250,
	ClassID_CWeaponP90,
	ClassID_CWeaponSawedoff,
	ClassID_CWeaponSCAR20,
	ClassID_CWeaponScout,
	ClassID_CWeaponSG550,
	ClassID_CWeaponSG552,
	ClassID_CWeaponSG556,
	ClassID_CWeaponShield,
	ClassID_CWeaponSSG08,
	ClassID_CWeaponTaser,
	ClassID_CWeaponTec9,
	ClassID_CWeaponTMP,
	ClassID_CWeaponUMP45,
	ClassID_CWeaponUSP,
	ClassID_CWeaponXM1014,
	ClassID_CWorld,
	ClassID_CWorldVguiText,
	ClassID_DustTrail,
	ClassID_MovieExplosion,
	ClassID_ParticleSmokeGrenade,
	ClassID_RocketTrail,
	ClassID_SmokeTrail,
	ClassID_SporeExplosion,
	ClassID_SporeTrail,
};