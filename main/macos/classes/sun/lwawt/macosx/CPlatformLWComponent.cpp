#include <sun/lwawt/macosx/CPlatformLWComponent.h>

#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CPlatformComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $CPlatformComponent = ::sun::lwawt::macosx::CPlatformComponent;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CPlatformLWComponent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CPlatformLWComponent::*)()>(&CPlatformLWComponent::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getPointer", "()J", nullptr, $PUBLIC},
	{"initialize", "(Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CPlatformLWComponent_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformLWComponent",
	"sun.lwawt.macosx.CPlatformComponent",
	nullptr,
	nullptr,
	_CPlatformLWComponent_MethodInfo_
};

$Object* allocate$CPlatformLWComponent($Class* clazz) {
	return $of($alloc(CPlatformLWComponent));
}

void CPlatformLWComponent::init$() {
	$CPlatformComponent::init$();
}

int64_t CPlatformLWComponent::getPointer() {
	return 0;
}

void CPlatformLWComponent::initialize($PlatformWindow* platformWindow) {
}

void CPlatformLWComponent::setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
}

void CPlatformLWComponent::dispose() {
}

CPlatformLWComponent::CPlatformLWComponent() {
}

$Class* CPlatformLWComponent::load$($String* name, bool initialize) {
	$loadClass(CPlatformLWComponent, name, initialize, &_CPlatformLWComponent_ClassInfo_, allocate$CPlatformLWComponent);
	return class$;
}

$Class* CPlatformLWComponent::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun