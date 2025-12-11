#include <sun/awt/image/SurfaceManager$FlushableCacheData.h>

#include <sun/awt/image/SurfaceManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _SurfaceManager$FlushableCacheData_MethodInfo_[] = {
	{"flush", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SurfaceManager$FlushableCacheData_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$FlushableCacheData", "sun.awt.image.SurfaceManager", "FlushableCacheData", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SurfaceManager$FlushableCacheData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.image.SurfaceManager$FlushableCacheData",
	nullptr,
	nullptr,
	nullptr,
	_SurfaceManager$FlushableCacheData_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceManager$FlushableCacheData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.SurfaceManager"
};

$Object* allocate$SurfaceManager$FlushableCacheData($Class* clazz) {
	return $of($alloc(SurfaceManager$FlushableCacheData));
}

$Class* SurfaceManager$FlushableCacheData::load$($String* name, bool initialize) {
	$loadClass(SurfaceManager$FlushableCacheData, name, initialize, &_SurfaceManager$FlushableCacheData_ClassInfo_, allocate$SurfaceManager$FlushableCacheData);
	return class$;
}

$Class* SurfaceManager$FlushableCacheData::class$ = nullptr;

		} // image
	} // awt
} // sun