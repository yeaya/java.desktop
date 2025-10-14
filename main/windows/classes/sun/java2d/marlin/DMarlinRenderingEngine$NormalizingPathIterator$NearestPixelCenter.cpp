#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DMarlinRenderingEngine$NormalizingPathIterator = ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator;

namespace sun {
	namespace java2d {
		namespace marlin {

$MethodInfo _DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter_MethodInfo_[] = {
	{"<init>", "([D)V", nullptr, 0, $method(static_cast<void(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::*)($doubles*)>(&DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::init$))},
	{"normCoord", "(D)D", nullptr, 0},
	{}
};

$InnerClassInfo _DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "sun.java2d.marlin.DMarlinRenderingEngine", "NormalizingPathIterator", $STATIC | $ABSTRACT},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter", "sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "NearestPixelCenter", $STATIC | $FINAL},
	{}
};

$ClassInfo _DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter",
	"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator",
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter_MethodInfo_,
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine"
};

$Object* allocate$DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter));
}

void DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::init$($doubles* tmp) {
	$DMarlinRenderingEngine$NormalizingPathIterator::init$(tmp);
}

double DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::normCoord(double coord) {
	return $Math::floor(coord) + 0.5;
}

DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter() {
}

$Class* DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter, name, initialize, &_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter_ClassInfo_, allocate$DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter);
	return class$;
}

$Class* DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::class$ = nullptr;

		} // marlin
	} // java2d
} // sun