class CfgPatches
{
    class ld3k_jca_m9a1_compat_ace3
    {
        requiredAddons[]=
        {
            "Weapons_F_JCA_M9A1",
            "Weapons_F_JCA_M9A1_Pistols_M9A1"
        };
        requiredversion=0.1;
        units[]={};
        weapons[]={};
    };
};
class CfgAmmo
{
    class BulletBase;
    /*class B_9x21_Ball: BulletBase // official BI tool All-in-one Config Arma3 2.17.152041 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        hit=5;
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=380; // 580 Joules
        airFriction=-0.0016;
        caliber=1.2;
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=1;
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class B_9x21_Ball_Tracer_Green: B_9x21_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0;
    };
    class B_9x21_Ball_Tracer_Red: B_9x21_Ball_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class B_9x21_Ball_Tracer_Yellow: B_9x21_Ball_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x21_Ball_Tracer_IR: B_9x21_Ball_Tracer_Green // JCA default config
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgOnly=1;
    };
    class ACE_9x19_Ball: B_9x21_Ball // ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L505
    {
        airFriction=-0.00201185;
        ACE_caliber=9.017;
        ACE_bulletLength=15.494;
        ACE_bulletMass=8.0352;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={340,370,400};
        ACE_barrelLengths[]={101.6,127.0,228.6};
    };*/
    class JCA_B_9x19_Ball_M9A1_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.212}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={365,397,429}; // 365m/s (1198fps) barrel length 4", 394m/s (1293fps) barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_M9A1 magazines initSpeed
        hit=5; // Full Metal Jacket, 624 Joules, B_9x21_Ball 5
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=394; // JCA_15Rnd_9x19_M9A1_FMJ_Mag and JCA_15Rnd_9x19_M9A1_JHP_Mag initSpeed
        airFriction=-0.00179466; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // Full Metal Jacket
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_M9A1_JHP: JCA_B_9x19_Ball_M9A1_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_ballisticCoefficients[]={0.181}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        hit=8.3; // Jacketed Hollow Point, 624 Joules, B_9x21_Ball 5
        airFriction=-0.00209318; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
    };
    class JCA_B_9x19_Ball_M9A1_SUB: JCA_B_9x19_Ball_M9A1_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_bulletMass=9.525; // 147gr
        ACE_ballisticCoefficients[]={0.217}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_muzzleVelocities[]={300,326,353}; // 300m/s (985fps) barrel length 4", 324m/s (1063fps) barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_M9A1 magazines initSpeed
        hit=7.5; // Jacketed Hollow Point, 500 Joules, B_9x21_Ball 5
        typicalSpeed=324; // JCA_15Rnd_9x19_M9A1_SUB_Mag initSpeed
        airFriction=-0.00116626; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Green: JCA_B_9x19_Ball_M9A1_FMJ
    {
        visibleFire=5; // B_9x21_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Red: JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Yellow: JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_M9A1_FMJ_Tracer_IR: JCA_B_9x19_Ball_M9A1_FMJ
    {
        nvgOnly=1;
    };
};
class CfgMagazines
{
    class CA_Magazine;
    // class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag official BI tool All-in-one Config Arma3 2.17.152041 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    /*class 30Rnd_9x21_Mag: CA_Magazine
    {
        author="$STR_A3_Bohemia_Interactive";
        scope=2;
        displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Mag0";
        picture="\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
        ammo="B_9x21_Ball";
        count=30;
        mass=10;
        initSpeed=370;
        tracersEvery=0;
        descriptionShort="$STR_A3_CfgMagazines_30Rnd_9x21_Mag1";
    };
    class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
    {
        author="$STR_A3_Bohemia_Interactive";
        displayName="$STR_A3_CfgMagazines_16Rnd_9x21_Mag0";
        picture="\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
        type=16;
        count=16;
        descriptionShort="$STR_A3_CfgMagazines_16Rnd_9x21_Mag1";
        mass=6;
        initSpeed=410;
    };*/
    class JCA_15Rnd_9x19_M9A1_Mag: CA_Magazine // JCA default config, M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        displayName="9 mm 15Rnd M9A1 FMJ Mag";
        ammo="JCA_B_9x19_Ball_M9A1_FMJ";
        mass=6.1; // magazine 15 rounds empty 91g + 15x 12.3g, JCA 6
        initSpeed=394; // according to ACE_muzzleVelocities barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%), JCA 410
        displaynameshort="FMJ";
    };
    class JCA_15Rnd_9x19_M9A1_JHP_Mag: JCA_15Rnd_9x19_M9A1_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd M9A1 JHP Mag";
        ammo="JCA_B_9x19_Ball_M9A1_JHP";
        displaynameshort="JHP";
    };
    class JCA_15Rnd_9x19_M9A1_SUB_Mag: JCA_15Rnd_9x19_M9A1_Mag // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd M9A1 Subsonic Mag";
        ammo="JCA_B_9x19_Ball_M9A1_SUB";
        mass=6.6; // magazine 15 rounds empty 91g + 15x 13.9g, JCA 6
        initSpeed=324; // according to ACE_muzzleVelocities barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_15Rnd_9x19_M9A1_Red_Mag: JCA_15Rnd_9x19_M9A1_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        ammo="JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_15Rnd_9x19_M9A1_Green_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        ammo="JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Green";
    };
    class JCA_15Rnd_9x19_M9A1_Yellow_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        ammo="JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_M9A1_IR_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        ammo="JCA_B_9x19_Ball_M9A1_FMJ_Tracer_IR";
        displaynameshort="Tracer IR";
    };
};
class CfgMagazineWells
{
    class JCA_M9A1_9x19 // Weapon initSpeed -1 ACE_barrelLength 125mm (4.9"): 394, 324m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_M9A1 magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x19_M9A1_Mag",
            "JCA_15Rnd_9x19_M9A1_JHP_Mag",
            "JCA_15Rnd_9x19_M9A1_SUB_Mag",
            "JCA_15Rnd_9x19_M9A1_Red_Mag",
            "JCA_15Rnd_9x19_M9A1_Green_Mag",
            "JCA_15Rnd_9x19_M9A1_Yellow_Mag",
            "JCA_15Rnd_9x19_M9A1_IR_Mag"
        };
    };
};
class Mode_SemiAuto;
class CfgWeapons
{
    class ItemCore;
    class Pistol;
    class Pistol_Base_F: Pistol
    {
        class WeaponSlotsInfo;
    };
    class JCA_hgun_M9A1_base_F: Pistol_Base_F // US Marine Corps M9A1 https://www.beretta.com/en-us/law-enforcement-and-mil/military-and-le-products/beretta-products
    {
        ACE_barrelLength=125; // 4.9" M9A1 https://www.beretta.com/en-us/law-enforcement-and-mil/military-and-le-products/beretta-products
        ACE_barrelTwist=250; // CIP twist https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        initSpeed=-1; // 394, 324m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 380
        magazines[]=
        {
            "JCA_15Rnd_9x19_M9A1_Mag",
            "JCA_15Rnd_9x19_M9A1_JHP_Mag",
            "JCA_15Rnd_9x19_M9A1_SUB_Mag",
            "JCA_15Rnd_9x19_M9A1_Red_Mag",
            "JCA_15Rnd_9x19_M9A1_Green_Mag",
            "JCA_15Rnd_9x19_M9A1_Yellow_Mag",
            "JCA_15Rnd_9x19_M9A1_IR_Mag"
        };
        class Single: Mode_SemiAuto // M9/92FS "10-shot group of 3” or less at 50 meters" 5.24 MOA https://www.beretta.com/en-us/law-enforcement-and-mil/military-and-le-products/beretta-products
        {
            dispersion=0.000966; // 5.91 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00435 (14.95 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=20.8; // Weight unloaded 33.3 oz, JCA 23
        };
    };
    class muzzle_snds_H: ItemCore // Sound Suppressor 6.5mm
    {
        class ItemInfo;
    };
    // official BI tool All-in-one Config Arma3 2.17.152041 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class muzzle_snds_L: muzzle_snds_H // Sound Suppressor 9mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=6;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.1;
    };
};
