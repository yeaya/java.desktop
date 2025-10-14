#ifndef _sun_java2d_marlin_Dasher$LengthIterator_h_
#define _sun_java2d_marlin_Dasher$LengthIterator_h_
//$ class sun.java2d.marlin.Dasher$LengthIterator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class Dasher$LengthIterator : public ::java::lang::Object {
	$class(Dasher$LengthIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Dasher$LengthIterator();
	void init$();
	void goLeft();
	void goToNextLeaf();
	bool haveLowAcceleration(double err);
	void initializeIterationOnCurve($doubles* pts, int32_t type);
	double lastSegLen();
	double next(double len);
	double onLeaf();
	void reset();
	double totalLength();
	$Array<double, 2>* recCurveStack = nullptr;
	$booleans* sidesRight = nullptr;
	int32_t curveType = 0;
	double nextT = 0.0;
	double lenAtNextT = 0.0;
	double lastT = 0.0;
	double lenAtLastT = 0.0;
	double lenAtLastSplit = 0.0;
	double lastSegLen$ = 0.0;
	int32_t recLevel = 0;
	bool done = false;
	$doubles* curLeafCtrlPolyLengths = nullptr;
	int32_t cachedHaveLowAcceleration = 0;
	$doubles* nextRoots = nullptr;
	$doubles* flatLeafCoefCache = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_Dasher$LengthIterator_h_