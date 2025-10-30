#include <sun/awt/WindowIDProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _WindowIDProvider_MethodInfo_[] = {
	{"getWindow", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WindowIDProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.WindowIDProvider",
	nullptr,
	nullptr,
	nullptr,
	_WindowIDProvider_MethodInfo_
};

$Object* allocate$WindowIDProvider($Class* clazz) {
	return $of($alloc(WindowIDProvider));
}

$Class* WindowIDProvider::load$($String* name, bool initialize) {
	$loadClass(WindowIDProvider, name, initialize, &_WindowIDProvider_ClassInfo_, allocate$WindowIDProvider);
	return class$;
}

$Class* WindowIDProvider::class$ = nullptr;

	} // awt
} // sun