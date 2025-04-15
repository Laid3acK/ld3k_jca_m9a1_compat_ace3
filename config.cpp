class CfgPatches
{
    class ld3k_jca_m9a1_compat_ace3
    {
        requiredAddons[]=
        {
            "Weapons_F_JCA_M9A1",
            "Weapons_F_JCA_Pistols_M9A1"
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
        hit=5; // 580 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=380;
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
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0 m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.212}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={365,397,429}; // 365m/s (1198fps) barrel length 4", 394m/s (1293fps) barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_M9A1 magazines initSpeed
        hit=5.4; // B_9x21_Ball 5, 624 Joules, Full Metal Jacket
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=394; // JCA_15Rnd_9x19_M9A1_FMJ_Mag and JCA_15Rnd_9x19_M9A1_JHP_Mag initSpeed
        airFriction=-0.0016017; // B_9x21_Ball -0.0016, airFrictionAnalysis.txt in docs folder
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
    class JCA_B_9x19_Ball_M9A1_Tracer_Green: JCA_B_9x19_Ball_M9A1_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_M9A1_Tracer_Red: JCA_B_9x19_Ball_M9A1_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_M9A1_Tracer_Yellow: JCA_B_9x19_Ball_M9A1_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_M9A1_Tracer_IR: JCA_B_9x19_Ball_M9A1_FMJ
    {
        nvgOnly=1;
    };
    class JCA_B_9x19_Ball_M9A1_JHP: JCA_B_9x19_Ball_M9A1_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_ballisticCoefficients[]={0.181}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        hit=8.3; // B_9x21_Ball 5, 624 Joules, Jacketed Hollow Point
        airFriction=-0.00187711; // airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2, Jacketed Hollow Point
    };
    class JCA_B_9x19_Ball_M9A1_SUB: JCA_B_9x19_Ball_M9A1_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_bulletMass=9.525; // 147gr
        ACE_ballisticCoefficients[]={0.217}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_muzzleVelocities[]={300,326,353}; // 300m/s (985fps) barrel length 4", 324m/s (1063fps) barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_M9A1 magazines initSpeed
        hit=7.5; // B_9x21_Ball 5, 500 Joules, Jacketed Hollow Point
        typicalSpeed=324; // JCA_15Rnd_9x19_M9A1_SUB_Mag initSpeed
        airFriction=-0.001106; // airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2, Jacketed Hollow Point
        visibleFire=1; //  subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // subsonic, B_127x54_Ball, B_9x21_Ball 30
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
    };
    class JCA_15rnd_9x21_M9A1_Mag: CA_Magazine
    {
        author="Grave";
        scope=2;
        displayName="9 mm 15rnd M9A1 Mag";
        picture="\weapons_f_JCA_M9A1\MagazineProxies\data\UI\Icon_15rnd_9x21_M9A1_Mag_CA.paa";
        ammo="JCA_B_9x21_Ball";
        count=15;
        mass=6;
        initSpeed=410;
        tracersEvery=0;
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 17<br />Used in: M9A1";
    };*/
    class JCA_15Rnd_9x19_M9A1_FMJ_Mag: CA_Magazine // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        scope=2;
        displayName="9 mm 15rnd M9A1 FMJ Mag";
        picture="\weapons_f_JCA_M9A1\MagazineProxies\data\UI\Icon_15Rnd_9x21_M9A1_Mag_CA.paa";
        ammo="JCA_B_9x19_Ball_M9A1_FMJ";
        type=16; // 16Rnd_9x21_Mag
        count=15;
        mass=6.1; // magazine 15 rounds empty 91g + 15x 12.3g, JCA 6
        initSpeed=394; // 394m/s (1293fps) barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%), JCA 410
        tracersEvery=0;
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 15<br />Used in: M9A1";
        displaynameshort="FMJ";
    };
    class JCA_15Rnd_9x19_M9A1_Red_Mag: JCA_15Rnd_9x19_M9A1_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd M9A1 Tracer (Red) Mag";
        ammo="JCA_B_9x19_Ball_M9A1_Tracer_Red";
        displaynameshort="Tracer";
        tracersEvery=1;
    };
    class JCA_15Rnd_9x19_M9A1_Green_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd M9A1 Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_M9A1_Tracer_Green";
    };
    class JCA_15Rnd_9x19_M9A1_Yellow_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd M9A1 Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_M9A1_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_M9A1_IR_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd M9A1 Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_M9A1_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_15Rnd_9x19_M9A1_JHP_Mag: JCA_15Rnd_9x19_M9A1_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 15rnd M9A1 JHP Mag";
        ammo="JCA_B_9x19_Ball_M9A1_JHP";
        displaynameshort="JHP";
    };
    class JCA_15Rnd_9x19_M9A1_SUB_Mag: JCA_15Rnd_9x19_M9A1_FMJ_Mag // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 15rnd M9A1 Subsonic Mag";
        ammo="JCA_B_9x19_Ball_M9A1_SUB";
        mass=6.6; // magazine 15 rounds empty 91g + 15x 13.9g, JCA 6
        initSpeed=324; // 324m/s (1020fps) barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="Subsonic";
    };
};
class CfgMagazineWells
{
    /*class JCA_M9A1_9x21 // JCA default config
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x21_M9A1_Mag",
            "JCA_15Rnd_9x21_M9A1_Red_Mag",
            "JCA_15Rnd_9x21_M9A1_Green_Mag",
            "JCA_15Rnd_9x21_M9A1_Yellow_Mag",
            "JCA_15Rnd_9x21_M9A1_IR_Mag"
        };
    };*/
    class JCA_M9A1_9x19 // Weapon initSpeed -1 ACE_barrelLength 125mm (4.9"), 394, 324m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_M9A1 magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x19_M9A1_FMJ_Mag",
            "JCA_15Rnd_9x19_M9A1_Red_Mag",
            "JCA_15Rnd_9x19_M9A1_Green_Mag",
            "JCA_15Rnd_9x19_M9A1_Yellow_Mag",
            "JCA_15Rnd_9x19_M9A1_IR_Mag",
            "JCA_15Rnd_9x19_M9A1_JHP_Mag",
            "JCA_15Rnd_9x19_M9A1_SUB_Mag"
        };
    };
};
class Mode_SemiAuto;
class CfgWeapons
{
    class Pistol;
    class Pistol_Base_F: Pistol
    {
        class WeaponSlotsInfo;
    };
    class JCA_hgun_M9A1_base_F: Pistol_Base_F // US Marine Corps M9A1 https://www.beretta.com/en-us/law-enforcement-and-mil/military-and-le-products/beretta-products
    {
        ACE_barrelLength=125; // 4.9" M9A1 https://www.beretta.com/en-us/law-enforcement-and-mil/military-and-le-products/beretta-products
        ACE_barrelTwist=250; // CIP twist https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        initSpeed=-1; // ACE_barrelLength 125mm (4.9") 394, 324m/s ICAO conditions (15°C, 1013.25 hPa, 0%), JCA 380
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_15Rnd_9x19_M9A1_FMJ_Mag",
            "JCA_15Rnd_9x19_M9A1_Red_Mag",
            "JCA_15Rnd_9x19_M9A1_Green_Mag",
            "JCA_15Rnd_9x19_M9A1_Yellow_Mag",
            "JCA_15Rnd_9x19_M9A1_IR_Mag",
            "JCA_15Rnd_9x19_M9A1_JHP_Mag",
            "JCA_15Rnd_9x19_M9A1_SUB_Mag"
        };
        magazineWell[]=
        {
            "JCA_M9A1_9x19"
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
};
