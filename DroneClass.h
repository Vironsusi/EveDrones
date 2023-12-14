#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::ofstream;


class Dronedata
{
public:
    Dronedata(const char* szDroneName, int iBlueprintMaterialEffeciency, int iBlueprintTimeEffeciency, int iBaseTimeToBuild);

    const char* szDroneName{ NULL };
    const char* szDroneRace{ NULL };
    const char* iDroneSize{ NULL };
    int iBlueprintMaterialEffeciency{ 0 };
    int iBlueprintTimeEffeciency{ 0 };
    int iBaseTimeToBuild{ 0 }; // in minutes
private:
    //Unmodified Build Materials
    // Tech 1
    int iTritanium{ 0 };
    int iPyerite{ 0 };
    int iMexallon{ 0 };
    int iIsogen{ 0 };
    int iNocxium{ 0 };
    int iZydrine{ 0 };
    int iMegacyte{ 0 };
    // Tech 2
    int iMorphite{ 0 };
    int iRAM_Robotics{ 0 };
    int iTechOneDrone{ 0 };
    int iGuidanceSystems{ 0 };
    int iRobotics{ 0 };
    int iSuperconductorRails{ 0 };
    int iParticleAcceleratorUnit{ 0 };
    int iThermonuclearTriggerUnit{ 0 };
    int iLaserFocusingCrystals{ 0 };
    int iPhotonMicroprocessor{ 0 };
    // Augmented/Integrated/Gecko-Subverted
    int iTechTwoDrone{ 0 };
    int iEliteDroneAI{ 0 };
    int iDroneSynapticRelayWiring{ 0 };
    int iDroneCapillaryFluid{ 0 };
    int iDroneCerebralFragment{ 0 };
    int iDroneTacticalLimb{ 0 };
    int iDroneCoronaryUnit{ 0 };
    int iDroneEpidermalShieldingChunk{ 0 };
    int iKorakosModifiedDroneControlUnit{ 0 }; // Gecko Only
    // Excavator
    int iIonThruster{ 0 };
    int iMagnetometricSensorCluster{ 0 };
    int iCrystallineCarbonideArmorPlate{ 0 };
    int iFusionReactorUnit{ 0 };
    int iOscillatorCapacitorUnit{ 0 };
    int iPulseShieldEmitter{ 0 };
    int iIceHarvesterII{ 0 };
    int iIceHarvesterUpgradeII{ 0 };
    int iModulatedStripMinerII{ 0 };
    int iMiningLaserUpgradeII{ 0 };

};
Dronedata::Dronedata(const char* szDroneName, int iBlueprintMaterialEffeciency, int iBlueprintTimeEffeciency, int iBaseTimeToBuild)
{
    this->szDroneName = szDroneName;
    this->iBlueprintMaterialEffeciency = iBlueprintMaterialEffeciency;
    this->iBlueprintTimeEffeciency = iBlueprintTimeEffeciency;
    this->iBaseTimeToBuild = iBaseTimeToBuild;
}
