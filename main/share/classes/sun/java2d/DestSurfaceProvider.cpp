#include <sun/java2d/DestSurfaceProvider.h>

#include <sun/java2d/Surface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$MethodInfo _DestSurfaceProvider_MethodInfo_[] = {
	{"getDestSurface", "()Lsun/java2d/Surface;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DestSurfaceProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.DestSurfaceProvider",
	nullptr,
	nullptr,
	nullptr,
	_DestSurfaceProvider_MethodInfo_
};

$Object* allocate$DestSurfaceProvider($Class* clazz) {
	return $of($alloc(DestSurfaceProvider));
}

$Class* DestSurfaceProvider::load$($String* name, bool initialize) {
	$loadClass(DestSurfaceProvider, name, initialize, &_DestSurfaceProvider_ClassInfo_, allocate$DestSurfaceProvider);
	return class$;
}

$Class* DestSurfaceProvider::class$ = nullptr;

	} // java2d
} // sun