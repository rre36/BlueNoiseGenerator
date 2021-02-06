#include "blue_noise_generator_parameters.h"

BlueNoiseGeneratorParameters::BlueNoiseGeneratorParameters()
{
	chosenMethod = Method_SolidAngle;
	N_dimensions						= 2u;
	dimensionSize[0] = 256;
	dimensionSize[1] = 256;
	dimensionSize[2] = 256;
	dimensionSize[3] = 9;
	N_valuesPerItem						= 1u;
	useMultithreading					= true;
	useIncrementalUpdate				= true;
	numIterationsToFindDistribution		= 256 * 1024;
	refineSpecificSlice = -1;
}

