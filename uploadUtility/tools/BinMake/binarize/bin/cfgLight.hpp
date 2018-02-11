class DefaultLighting
{
  access = ReadOnlyVerified;

  // a lot of settings which were here in 1.97 were moved into CfgWorlds
  //groundReflection[]={0.05,0.04,0.02}; // dark brown - ground
  groundReflection[]={0.085,0.068,0.034}; // light brown - sand
  //groundReflection[]={0.0578,0.068,0.0442}; // green - grass

  moonObjectColorFull[]={0.9,0.9,1.0,0.7}; // color of full moon
  moonHaloObjectColorFull[]={0.9,0.9,1.0,0.01}; // color of full moon halo
  moonsetObjectColor[]={0.9,0.75,0.4}; // color of setting moon
  moonsetHaloObjectColor[]={0.9,0.5,0.2}; // color of setting moon halo

  // night effect angle - angle of sun above horizon in which night effect are gradually applied
  nightAngle=5;
  
  // angle at which Moon color change is started
  sunSunset=20;
  // used for star layer visibility
  endSunset=10;
};
