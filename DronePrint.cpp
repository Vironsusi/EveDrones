#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>

using std::ios;
using std::getline;
using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::ofstream;
using std::ifstream;
using std::ceil;

string line;
ifstream myInputfile;
ofstream myOutputfile;


// Tech 1 Materials
int iTritanium{ 0 };
int iPyerite{ 0 };
int iMexallon{ 0 };
int iIsogen{ 0 };
int iNocxium{ 0 };
int iMegacyte{ 0 };
int iZydrine{ 0 };
// Tech 2 Materials
int RAMRobotics{ 0 };
int iTech1Drone{ 0 };
int iTech2Drone{ 0 };
int iGuidanceSystems{ 0 };
int iRobotics{ 0 };
int iMorphite{ 0 };
int iSuperconductorRails{ 0 };
int iParticleAcceleratorUnit{ 0 };
int iThermonuclearTriggerUnit{ 0 };
int iLaserFocusingCrystals{ 0 };
int iPhotonMicroprocessor{ 0 };
// Augmented and Intergrated Materials
int iEliteDroneAI{ 0 };
int iDroneSynapticRelayWiring{ 0 };
int iDroneCapillaryFluid{ 0 };
int iDroneCerebralFragment{ 0 };
int iDroneTacticalLimb{ 0 };
int iDroneCoronaryUnit{ 0 };
int iDroneEpidermalShieldingChunk{ 0 };
int iKorakosModifiedDroneControlUnit{ 0 };
// Excavator Materials
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

void readDataFromFile(std::ifstream& inputFile, int& variable);

void readAllDataFromFile(std::ifstream& inputFile, int& iTritanium, int& iPyerite, int& iMexallon,
    int& iIsogen, int& iNocxium, int& iMegacyte, int& iZydrine,
    int& RAMRobotics, int& iTech1Drone, int& iTech2Drone,
    int& iGuidanceSystems, int& iRobotics, int& iMorphite,
    int& iSuperconductorRails, int& iParticleAcceleratorUnit,
    int& iThermonuclearTriggerUnit, int& iLaserFocusingCrystals,
    int& iPhotonMicroprocessor, int& iEliteDroneAI,
    int& iDroneSynapticRelayWiring, int& iDroneCapillaryFluid,
    int& iDroneCerebralFragment, int& iDroneTacticalLimb,
    int& iDroneCoronaryUnit, int& iDroneEpidermalShieldingChunk,
    int& iKorakosModifiedDroneControlUnit, int& iIonThruster,
    int& iMagnetometricSensorCluster, int& iCrystallineCarbonideArmorPlate,
    int& iFusionReactorUnit, int& iOscillatorCapacitorUnit,
    int& iPulseShieldEmitter, int& iIceHarvesterII,
    int& iIceHarvesterUpgradeII, int& iModulatedStripMinerII,
    int& iMiningLaserUpgradeII);

// System, Structure and Character Data
double dSystemCostIndex;
double dStructureMaterialEffeciencyRoleBonusTimes100 = .01; // 1%
double dStructureTimeEffeciencyRoleBonusTimes100 = .20; // 20%
double dStructureCostModifier = .04; // 4%
double dCharacterManufacturingTimeEffeciencySkillBonusTimes100 = .32; // Max 32%
// This Function will take in the character name and return the character manufacturing time bonus
// Acolyte drone 38-74


int main()
{
    static string szDroneName;
    static int iDroneAmount;
    static int iDroneBPME;
    static int iDroneBPTE;

    cout << "Please input the name of the drone you wish to build: Example 'Augmented' Hornet or Hornet II" << endl;
    getline(cin, szDroneName); cout << "Complete   " << endl;

    cout << "Please input the amount of drones you wish to build, and the blueprint ME and TE:" << std::endl;
    cin >> iDroneAmount >> iDroneBPME >> iDroneBPTE; cout << "Complete   " << endl;
   



    // Read from file
 
    myInputfile.open("Dronedata.txt");
    if (myInputfile.is_open())
    {
        cout << "File is open" << endl;
        if (szDroneName == "Acolyte I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_ACOLYTE_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Acolyte II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_ACOLYTE_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Acolyte")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_ACOLYTE_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Acolyte")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_ACOLYTE_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Aralez")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_ARALEZ")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Berserker I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_BERSERKER_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Berserker II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_BERSERKER_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Berserker")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_BERSERKER_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Berserker")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_BERSERKER_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Bouncer I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_BOUNCER_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Bouncer II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_BOUNCER_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Curator I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_CURATOR_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Curator II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_CURATOR_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Garde I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_GARDE_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Garde II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_GARDE_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Gecko")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_GECKO_SPECIAL")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Hammerhead I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HAMMERHEAD_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Hammerhead II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HAMMERHEAD_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Hammerhead")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HAMMERHEAD_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Hammerhead")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HAMMERHEAD_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Hobgoblin I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HOBGOBLIN_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Hobgoblin II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HOBGOBLIN_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Hobgoblin")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HOBGOBLIN_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Hobgoblin")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HOBGOBLIN_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Hornet I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HORNET_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Hornet II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HORNET_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Hornet")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HORNET_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Hornet")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_HORNET_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Ice Harvesting Drone I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_ICEHARVESTING_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Ice Harvesting Drone II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_ICEHARVESTING_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Ice Harvesting Drone")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_ICEHARVESTING_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Excavator' Ice Harvesting Drone")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_ICEHARVESTING_EXCAVATOR")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Infiltrator I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_INFILTRATOR_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Infiltrator II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_INFILTRATOR_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Infiltrator")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_INFILTRATOR_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Infiltrator")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_INFILTRATOR_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Mining Drone I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_MINING_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Mining Drone II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_MINING_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Mining Drone")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_MINING_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Harvester' Mining Drone")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_MINING_HARVESTER")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Excavator' Mining Drone")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_MINING_EXCAVATOR")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Civilian Mining Drone")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_MINING_CIVILIAN")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Ogre I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_OGRE_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Ogre II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_OGRE_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Ogre")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_OGRE_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Ogre")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_OGRE_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Praetor I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_PRAETOR_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Praetor II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_PRAETOR_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Praetor")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_PRAETOR_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Praetor")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_PRAETOR_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Salvage I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_SALVAGE_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Salvage II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_SALVAGE_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Dunk' Salvage Drone" || "'Dunk'")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_SALVAGE_DUNK")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Subverted JVN-UC49" || "Subverted" || "'Subverted'" || "'Subverted' JVN-UC49")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_SUBVERTED_SPECIAL")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Valkyrie I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_VALKRIE_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Valkyrie II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_VALKRIE_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Valkyrie")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_VALKRIE_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Valkyrie")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_VALKRIE_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Vespa I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_VESPA_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Vespa II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_VESPA_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Vespa")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_VESPA_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Vespa")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_VESPA_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Warden I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WARDEN_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Warden II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WARDEN_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Warrior I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WARRIOR_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Warrior II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WARRIOR_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Warrior")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WARRIOR_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Warrior")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WARRIOR_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Wasp I")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WASP_I")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "Wasp II")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WASP_II")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Augmented' Wasp")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WASP_AUGMENTED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }
        if (szDroneName == "'Integrated' Wasp")
        {
            while (getline(myInputfile, line))
            {
                if (line == "DRONE_WASP_INTEGRATED")
                {
                    readAllDataFromFile(myInputfile, iTritanium, iPyerite, iMexallon,
                        iIsogen, iNocxium, iMegacyte, iZydrine,
                        RAMRobotics, iTech1Drone, iTech2Drone,
                        iGuidanceSystems, iRobotics, iMorphite,
                        iSuperconductorRails, iParticleAcceleratorUnit,
                        iThermonuclearTriggerUnit, iLaserFocusingCrystals,
                        iPhotonMicroprocessor, iEliteDroneAI,
                        iDroneSynapticRelayWiring, iDroneCapillaryFluid,
                        iDroneCerebralFragment, iDroneTacticalLimb,
                        iDroneCoronaryUnit, iDroneEpidermalShieldingChunk,
                        iKorakosModifiedDroneControlUnit, iIonThruster,
                        iMagnetometricSensorCluster, iCrystallineCarbonideArmorPlate,
                        iFusionReactorUnit, iOscillatorCapacitorUnit,
                        iPulseShieldEmitter, iIceHarvesterII,
                        iIceHarvesterUpgradeII, iModulatedStripMinerII,
                        iMiningLaserUpgradeII);
                }
            }
        }

        myInputfile.close();
        // Write to file

        myOutputfile.open("BuyOrder.txt", ios::out | ios::app);
        if (myOutputfile.is_open())
        {
            myOutputfile << "Buy Order for " << iDroneAmount << "x " << szDroneName << "--------------------------------------------------------------" << "\n";
            myOutputfile << iTritanium  << "x Tritanium \n";
            myOutputfile << iPyerite  << "x Pyerite \n";
            myOutputfile << iMexallon  << "x Mexallon \n";
            myOutputfile << iIsogen  << "x Isogen \n";
            myOutputfile << iNocxium  << "x Nocxium \n";
            myOutputfile << iMegacyte  << "x Megacyte \n";
            myOutputfile << iZydrine  << "x Zydrine \n";
            myOutputfile << RAMRobotics  << "x R.A.M.- Robotics \n";
            if (szDroneName == "Acolyte II" || szDroneName == "Acolyte I" || szDroneName == "'Augmented' Acolyte" || szDroneName == "'Integrated' Acolyte")
            {
                myOutputfile << iTech1Drone << "x Acolyte I \n";
                myOutputfile <<  iTech2Drone   << "x Acolyte II \n";
            }
            else if (szDroneName == "Aralez")
            {
                myOutputfile <<  iTech1Drone   << "x Carbon \n";
                myOutputfile <<  iTech2Drone   << "x Carbon \n";
            }
            else if (szDroneName == "Berserker II" || szDroneName == "Berserker I" || szDroneName == "'Augmented' Berserker" || szDroneName == "'Integrated' Berserker")
            {
                myOutputfile <<  iTech1Drone   << "x Berserker I \n";
                myOutputfile <<  iTech2Drone   << "x Berserker II \n";
            }
            else if (szDroneName == "Bouncer II" || szDroneName == "Bouncer I")
            {
                myOutputfile <<  iTech1Drone   << "x Bouncer I \n";
                myOutputfile <<  iTech2Drone   << "x Bouncer II \n";
            }
            else if (szDroneName == "Curator II" || szDroneName == "Curator I")
            {
                myOutputfile <<  iTech1Drone   << "x Curator I \n";
                myOutputfile <<  iTech2Drone   << "x Curator II \n";
            }
            else if (szDroneName == "Garde II" || szDroneName == "Garde I")
            {
                myOutputfile <<  iTech1Drone   << "x Garde I \n";
                myOutputfile <<  iTech2Drone   << "x Garde II \n";
            }
            else if (szDroneName == "Gecko")
            {
                myOutputfile <<  iTech1Drone   << "x Carbon \n";
                myOutputfile <<  iTech2Drone   << "x Carbon \n";
            }
            else if (szDroneName == "Hammerhead II" || szDroneName == "Hammerhead I" || szDroneName == "'Augmented' Hammerhead" || szDroneName == "'Integrated' Hammerhead")
            {
                myOutputfile <<  iTech1Drone   << "x Hammerhead I \n";
                myOutputfile <<  iTech2Drone   << "x Hammerhead II \n";
            }
            else if (szDroneName == "Hobgoblin II" || szDroneName == "Hobgoblin I" || szDroneName == "'Augmented' Hobgoblin" || szDroneName == "'Integrated' Hobgoblin")
            {
                myOutputfile <<  iTech1Drone   << "x Hobgoblin I \n";
                myOutputfile <<  iTech2Drone   << "x Hobgoblin II \n";
            }
            else if (szDroneName == "Hornet II" || szDroneName == "Hornet I" || szDroneName == "'Augmented' Hornet" || szDroneName == "'Integrated' Hornet")
            {
                myOutputfile <<  iTech1Drone   << "x Hornet I \n";
                myOutputfile <<  iTech2Drone   << "x Hornet II \n";
            }
            else if (szDroneName == "Ice Harvesting Drone II" || szDroneName == "Ice Harvesting Drone I" || szDroneName == "'Augmented' Ice Harvesting Drone" || szDroneName == "'Excavator' Ice Harvesting Drone")
            {
                myOutputfile <<  iTech1Drone   << "x Ice Harvesting Drone I \n";
                myOutputfile <<  iTech2Drone   << "x Ice Harvesting Drone II \n";
            }
            else if (szDroneName == "Infiltrator II" || szDroneName == "Infiltrator I" || szDroneName == "'Augmented' Infiltrator" || szDroneName == "'Integrated' Infiltrator")
            {
                myOutputfile <<  iTech1Drone   << "x Infiltrator I \n";
                myOutputfile <<  iTech2Drone   << "x Infiltrator II \n";
            }
            else if (szDroneName == "Mining Drone II" || szDroneName == "Mining Drone I" || szDroneName == "'Augmented' Mining Drone" || szDroneName == "'Harvester' Mining Drone" || szDroneName == "'Excavator' Mining Drone" || szDroneName == "Civilian Mining Drone")
            {
                myOutputfile <<  iTech1Drone   << "x Mining Drone I \n";
                myOutputfile <<  iTech2Drone   << "x Mining Drone II \n";
            }
            else if (szDroneName == "Ogre II" || szDroneName == "Ogre I" || szDroneName == "'Augmented' Ogre" || szDroneName == "'Integrated' Ogre")
            {
                myOutputfile <<  iTech1Drone   << "x Ogre I \n";
                myOutputfile <<  iTech2Drone   << "x Ogre II \n";
            }
            else if (szDroneName == "Praetor II" || szDroneName == "Praetor I" || szDroneName == "'Augmented' Praetor" || szDroneName == "'Integrated' Praetor")
            {
                myOutputfile <<  iTech1Drone   << "x Praetor I \n";
                myOutputfile <<  iTech2Drone   << "x Praetor II \n";
            }
            else if (szDroneName == "Salvage Drone I" || szDroneName == "Salvage Drone II" || szDroneName == "'Dunk' Salvage Drone")
            {
                myOutputfile <<  iTech1Drone   << "x Salvage Drone I \n";
                myOutputfile <<  iTech2Drone   << "x Salvage Drone I \n";
            }
            else if (szDroneName == "Subverted JVN-UC49" || szDroneName == "Subverted" || szDroneName == "'Subverted'" || szDroneName == "'Subverted' JVN-UC49")
            {
                myOutputfile <<  iTech1Drone   << "x Carbon \n";
                myOutputfile <<  iTech2Drone   << "x Carbon \n";
            }
            else if (szDroneName == "Valkyrie II" || szDroneName == "Valkyrie I" || szDroneName == "'Augmented' Valkyrie" || szDroneName == "'Integrated' Valkyrie")
            {
                myOutputfile <<  iTech1Drone   << "x Valkyrie I \n";
                myOutputfile <<  iTech2Drone   << "x Valkyrie II \n";
            }
            else if (szDroneName == "Vespa II" || szDroneName == "Vespa I" || szDroneName == "'Augmented' Vespa" || szDroneName == "'Integrated' Vespa")
            {
                myOutputfile <<  iTech1Drone   << "x Vespa I \n";
                myOutputfile <<  iTech2Drone   << "x Vespa II \n";
            }
            else if (szDroneName == "Warden II" || szDroneName == "Warden I")
            {
                myOutputfile <<  iTech1Drone   << "x Warden I \n";
                myOutputfile <<  iTech2Drone   << "x Warden II \n";
            }
            else if (szDroneName == "Warrior II" || szDroneName == "Warrior I" || szDroneName == "'Augmented' Warrior" || szDroneName == "'Integrated' Warrior")
            {
                myOutputfile <<  iTech1Drone   << "x Warrior I \n";
                myOutputfile <<  iTech2Drone   << "x Warrior II \n";
            }
            else if (szDroneName == "Wasp II" || szDroneName == "Wasp I" || szDroneName == "'Augmented' Wasp" || szDroneName == "'Integrated' Wasp")
            {
                myOutputfile <<  iTech1Drone   << "x Wasp I \n";
                myOutputfile <<  iTech2Drone   << "x Wasp II \n";
            }
            else (cout << "Invalid Drone Name" << "\n");
            myOutputfile << iGuidanceSystems  << "x Guidance Systems \n";
            myOutputfile << iRobotics  << "x Robotics \n";
            myOutputfile << iMorphite  << "x Morphite \n";
            myOutputfile << iSuperconductorRails  << "x Superconductor Rails \n";
            myOutputfile << iParticleAcceleratorUnit  << "x Particle Accelerator Unit \n";
            myOutputfile << iThermonuclearTriggerUnit  << "x Thermonuclear Trigger Unit \n";
            myOutputfile << iLaserFocusingCrystals  << "x Laser Focusing Crystals \n";
            myOutputfile << iPhotonMicroprocessor  << "x Photon Microprocessor \n";
            myOutputfile << iEliteDroneAI  << "x Elite Drone AI \n";
            myOutputfile << iDroneSynapticRelayWiring  << "x Drone Synaptic Relay Wiring \n";
            myOutputfile << iDroneCapillaryFluid  << "x Drone Capillary Fluid \n";
            myOutputfile << iDroneCerebralFragment  << "x Drone Cerebral Fragment \n";
            myOutputfile << iDroneTacticalLimb  << "x Drone Tactical Limb \n";
            myOutputfile << iDroneCoronaryUnit  << "x Drone Coronary Unit \n";
            myOutputfile << iDroneEpidermalShieldingChunk  << "x Drone Epidermal Shielding Chunk \n";
            myOutputfile << iKorakosModifiedDroneControlUnit  << "x Korako's Modified Drone Control Unit \n";
            myOutputfile << iIonThruster  << "x Ion Thruster \n";
            myOutputfile << iMagnetometricSensorCluster  << "x Magnetometric Sensor Cluster \n";
            myOutputfile << iCrystallineCarbonideArmorPlate  << "x Crystalline Carbonide Armor Plate \n";
            myOutputfile << iFusionReactorUnit  << "x Fusion Reactor Unit \n";
            myOutputfile << iOscillatorCapacitorUnit  << "x Oscillator Capacitor Unit \n";
            myOutputfile << iPulseShieldEmitter  << "x Pulse Shield Emitter \n";
            myOutputfile << iIceHarvesterII  << "x Ice Harvester II \n";
            myOutputfile << iIceHarvesterUpgradeII  << "x Ice Harvester Upgrade II \n";
            myOutputfile << iModulatedStripMinerII  << "x Modulated Strip Miner II \n";
            myOutputfile << iMiningLaserUpgradeII  << "x Mining Laser Upgrade II \n";
            myOutputfile << "Total Cost: " << "\n"; // Blank since I can't handle the ESI api yet
            myOutputfile.close();
        }

        else(std::cout << "Unable to open file" << "kek");
        return 0;
    }
}






void readDataFromFile(std::ifstream& inputFile, int& variable) {
    std::string line;
    getline(inputFile, line);
    variable = stoi(line);
}

// Function definition
void readAllDataFromFile(std::ifstream& inputFile, int& iTritanium, int& iPyerite, int& iMexallon,
    int& iIsogen, int& iNocxium, int& iMegacyte, int& iZydrine,
    int& RAMRobotics, int& iTech1Drone, int& iTech2Drone,
    int& iGuidanceSystems, int& iRobotics, int& iMorphite,
    int& iSuperconductorRails, int& iParticleAcceleratorUnit,
    int& iThermonuclearTriggerUnit, int& iLaserFocusingCrystals,
    int& iPhotonMicroprocessor, int& iEliteDroneAI,
    int& iDroneSynapticRelayWiring, int& iDroneCapillaryFluid,
    int& iDroneCerebralFragment, int& iDroneTacticalLimb,
    int& iDroneCoronaryUnit, int& iDroneEpidermalShieldingChunk,
    int& iKorakosModifiedDroneControlUnit, int& iIonThruster,
    int& iMagnetometricSensorCluster, int& iCrystallineCarbonideArmorPlate,
    int& iFusionReactorUnit, int& iOscillatorCapacitorUnit,
    int& iPulseShieldEmitter, int& iIceHarvesterII,
    int& iIceHarvesterUpgradeII, int& iModulatedStripMinerII,
    int& iMiningLaserUpgradeII) {
    // Call readDataFromFile for each variable
    readDataFromFile(inputFile, iTritanium);
    readDataFromFile(inputFile, iPyerite);
    readDataFromFile(inputFile, iMexallon);
    readDataFromFile(inputFile, iIsogen);
    readDataFromFile(inputFile, iNocxium);
    readDataFromFile(inputFile, iMegacyte);
    readDataFromFile(inputFile, iZydrine);
    readDataFromFile(inputFile, RAMRobotics);
    readDataFromFile(inputFile, iTech1Drone);
    readDataFromFile(inputFile, iTech2Drone);
    readDataFromFile(inputFile, iGuidanceSystems);
    readDataFromFile(inputFile, iRobotics);
    readDataFromFile(inputFile, iMorphite);
    readDataFromFile(inputFile, iSuperconductorRails);
    readDataFromFile(inputFile, iParticleAcceleratorUnit);
    readDataFromFile(inputFile, iThermonuclearTriggerUnit);
    readDataFromFile(inputFile, iLaserFocusingCrystals);
    readDataFromFile(inputFile, iPhotonMicroprocessor);
    readDataFromFile(inputFile, iEliteDroneAI);
    readDataFromFile(inputFile, iDroneSynapticRelayWiring);
    readDataFromFile(inputFile, iDroneCapillaryFluid);
    readDataFromFile(inputFile, iDroneCerebralFragment);
    readDataFromFile(inputFile, iDroneTacticalLimb);
    readDataFromFile(inputFile, iDroneCoronaryUnit);
    readDataFromFile(inputFile, iDroneEpidermalShieldingChunk);
    readDataFromFile(inputFile, iKorakosModifiedDroneControlUnit);
    readDataFromFile(inputFile, iIonThruster);
    readDataFromFile(inputFile, iMagnetometricSensorCluster);
    readDataFromFile(inputFile, iCrystallineCarbonideArmorPlate);
    readDataFromFile(inputFile, iFusionReactorUnit);
    readDataFromFile(inputFile, iOscillatorCapacitorUnit);
    readDataFromFile(inputFile, iPulseShieldEmitter);
    readDataFromFile(inputFile, iIceHarvesterII);
    readDataFromFile(inputFile, iIceHarvesterUpgradeII);
    readDataFromFile(inputFile, iModulatedStripMinerII);
    readDataFromFile(inputFile, iMiningLaserUpgradeII);
}


//Acolyte I
//Acolyte II
//'Augmented' Acolyte
//'Integrated' Acolyte
//Aralez
//Berserker II
//Berserker I
//'Augmented' Berserker
//'Integrated' Berserker
//Bouncer II
//Bouncer I
//Curator II
//Curator I
//Garde II
//Garde I
//Gecko
//Hammerhead II
//Hammerhead I
//'Augmented' Hammerhead
//'Integrated' Hammerhead
//Hobgoblin II
//Hobgoblin I
//'Augmented' Hobgoblin
//'Integrated' Hobgoblin
//Hornet II
//Hornet I
//'Augmented' Hornet
//'Integrated' Hornet
//Ice Harvesting Drone II
//Ice Harvesting Drone I
//'Augmented' Ice Harvesting Drone
//'Excavator' Ice Harvesting Drone
//Infiltrator II
//Infiltrator I
//'Augmented' Infiltrator
//'Integrated' Infiltrator
//Mining Drone II
//Mining Drone I
//'Augmented' Mining Drone
//'Harvester' Mining Drone
//'Excavator' Mining Drone
//Civilian Mining Drone
//Ogre II
//Ogre I
//'Augmented' Ogre
//'Integrated' Ogre
//Praetor II
//Praetor I
//'Augmented' Praetor
//'Integrated' Praetor
//Salvage Drone I
//Salvage Drone II
//'Dunk' Salvage Drone
//Subverted JVN-UC49
//Subverted
//'Subverted'
//Valkyrie II
//Valkyrie I
//'Augmented' Valkyrie
//'Integrated' Valkyrie
//Vespa II
//Vespa I
//'Augmented' Vespa
//'Integrated' Vespa
//Warden II
//Warden I
//Warrior II
//Warrior I
//'Augmented' Warrior
//'Integrated' Warrior
//Wasp II
//Wasp I
//'Augmented' Wasp
//'Integrated' Wasp


/*
Tritanium
Pyerite
Mexallon
Isogen
Nocxium
Megacyte
Zydrine
R.A.M.- Robotics
Tech 1 Version of Drone
Tech 2 Verison of Drone
Guidance Systems
Robotics
Morphite
Superconductor Rails
Particle Accelerator Unit
Thermonuclear Trigger Unit
Laser Focusing Crystals
Photon Microprocessor
Elite Drone AI
Drone Synaptic Relay Wiring
Drone Capillary Fluid
Drone Cerebral Fragment
Drone Tactical Limb
Drone Coronary Unit
Drone Epidermal Shielding Chunk
Korako's Modified Drone Control Unit
Ion Thruster
Magnetometric Sensor Cluster
Crystalline Carbonide Armor Plate
Fusion Reactor Unit
Oscillator Capacitor Unit
Pulse Shield Emitter
Ice Harvester II
Ice Harvester Upgrade II
Modulated Strip Miner II
Mining Laser Upgrade II
*/
