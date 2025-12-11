#include <sun/lwawt/PlatformComponent.h>

#include <sun/lwawt/PlatformWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {

$MethodInfo _PlatformComponent_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"initialize", "(Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PlatformComponent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.PlatformComponent",
	nullptr,
	nullptr,
	nullptr,
	_PlatformComponent_MethodInfo_
};

$Object* allocate$PlatformComponent($Class* clazz) {
	return $of($alloc(PlatformComponent));
}

$Class* PlatformComponent::load$($String* name, bool initialize) {
	$loadClass(PlatformComponent, name, initialize, &_PlatformComponent_ClassInfo_, allocate$PlatformComponent);
	return class$;
}

$Class* PlatformComponent::class$ = nullptr;

	} // lwawt
} // sun