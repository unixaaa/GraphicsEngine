/*
 * PerlinNoise1D.h
 *
 *  Created on: 17.04.2013
 *      Author: nopper
 */

#ifndef PERLINNOISE1D_H_
#define PERLINNOISE1D_H_

#include "PerlinNoise.h"

class PerlinNoise1D : public PerlinNoise
{

	private:

		boost::int32_t width;

	public:

		PerlinNoise1D(boost::int32_t width, boost::int32_t seed, float frequency, float amplitude, float persistence, boost::int32_t octaves);
		virtual ~PerlinNoise1D();

		boost::int32_t getWidth() const;

};

#endif /* PERLINNOISE1D_H_ */
