#include <sun/awt/OverrideNativeWindowHandle.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _OverrideNativeWindowHandle_MethodInfo_[] = {
	{"overrideWindowHandle", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OverrideNativeWindowHandle_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.OverrideNativeWindowHandle",
	nullptr,
	nullptr,
	nullptr,
	_OverrideNativeWindowHandle_MethodInfo_
};

$Object* allocate$OverrideNativeWindowHandle($Class* clazz) {
	return $of($alloc(OverrideNativeWindowHandle));
}

$Class* OverrideNativeWindowHandle::load$($String* name, bool initialize) {
	$loadClass(OverrideNativeWindowHandle, name, initialize, &_OverrideNativeWindowHandle_ClassInfo_, allocate$OverrideNativeWindowHandle);
	return class$;
}

$Class* OverrideNativeWindowHandle::class$ = nullptr;

	} // awt
} // sun