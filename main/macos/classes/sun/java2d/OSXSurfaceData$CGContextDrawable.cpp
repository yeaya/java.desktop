#include <sun/java2d/OSXSurfaceData$CGContextDrawable.h>

#include <sun/java2d/OSXSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$MethodInfo _OSXSurfaceData$CGContextDrawable_MethodInfo_[] = {
	{"drawIntoCGContext", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _OSXSurfaceData$CGContextDrawable_InnerClassesInfo_[] = {
	{"sun.java2d.OSXSurfaceData$CGContextDrawable", "sun.java2d.OSXSurfaceData", "CGContextDrawable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _OSXSurfaceData$CGContextDrawable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.OSXSurfaceData$CGContextDrawable",
	nullptr,
	nullptr,
	nullptr,
	_OSXSurfaceData$CGContextDrawable_MethodInfo_,
	nullptr,
	nullptr,
	_OSXSurfaceData$CGContextDrawable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.OSXSurfaceData"
};

$Object* allocate$OSXSurfaceData$CGContextDrawable($Class* clazz) {
	return $of($alloc(OSXSurfaceData$CGContextDrawable));
}

$Class* OSXSurfaceData$CGContextDrawable::load$($String* name, bool initialize) {
	$loadClass(OSXSurfaceData$CGContextDrawable, name, initialize, &_OSXSurfaceData$CGContextDrawable_ClassInfo_, allocate$OSXSurfaceData$CGContextDrawable);
	return class$;
}

$Class* OSXSurfaceData$CGContextDrawable::class$ = nullptr;

	} // java2d
} // sun