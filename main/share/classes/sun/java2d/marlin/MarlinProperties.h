#ifndef _sun_java2d_marlin_MarlinProperties_h_
#define _sun_java2d_marlin_MarlinProperties_h_
//$ class sun.java2d.marlin.MarlinProperties
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class MarlinProperties : public ::java::lang::Object {
	$class(MarlinProperties, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MarlinProperties();
	void init$();
	static int32_t align(int32_t val, int32_t norm);
	static int32_t getBlockSize_Log2();
	static bool getBoolean($String* key, $String* def);
	static float getCubicDecD2();
	static float getCubicIncD1();
	static float getCurveLengthError();
	static double getDouble($String* key, double def, double min, double max);
	static float getFloat($String* key, float def, float min, float max);
	static int32_t getInitialEdges();
	static int32_t getInitialPixelHeight();
	static int32_t getInitialPixelWidth();
	static int32_t getInteger($String* key, int32_t def, int32_t min, int32_t max);
	static float getPathSimplifierPixelTolerance();
	static float getQuadDecD2();
	static int32_t getRLEMinWidth();
	static int32_t getSubPixel_Log2_X();
	static int32_t getSubPixel_Log2_Y();
	static float getSubdividerMinLength();
	static int32_t getTileSize_Log2();
	static int32_t getTileWidth_Log2();
	static bool isDoChecks();
	static bool isDoClip();
	static bool isDoClipAtRuntime();
	static bool isDoClipRuntimeFlag();
	static bool isDoClipSubdivider();
	static bool isDoMonitors();
	static bool isDoStats();
	static bool isForceNoRLE();
	static bool isForceRLE();
	static bool isLogCreateContext();
	static bool isLogUnsafeMalloc();
	static bool isLoggingEnabled();
	static bool isUseLogger();
	static bool isUsePathSimplifier();
	static bool isUseSimplifier();
	static bool isUseThreadLocal();
	static bool isUseTileFlags();
	static bool isUseTileFlagsWithHeuristics();
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_MarlinProperties_h_