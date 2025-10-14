#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter.h>

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

$MethodInfo _DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter_MethodInfo_[] = {
	{"<init>", "([D)V", nullptr, 0, $method(static_cast<void(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter::*)($doubles*)>(&DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter::init$))},
	{"normCoord", "(D)D", nullptr, 0},
	{}
};

$InnerClassInfo _DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "sun.java2d.marlin.DMarlinRenderingEngine", "NormalizingPathIterator", $STATIC | $ABSTRACT},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter", "sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "NearestPixelQuarter", $STATIC | $FINAL},
	{}
};

$ClassInfo _DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter",
	"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator",
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter_MethodInfo_,
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine"
};

$Object* allocate$DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter));
}

void DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter::init$($doubles* tmp) {
	$DMarlinRenderingEngine$NormalizingPathIterator::init$(tmp);
}

double DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter::normCoord(double coord) {
	return $Math::floor(coord + 0.25) + 0.25;
}

DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter::DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter() {
}

$Class* DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter, name, initialize, &_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter_ClassInfo_, allocate$DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter);
	return class$;
}

$Class* DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter::class$ = nullptr;

		} // marlin
	} // java2d
} // sun