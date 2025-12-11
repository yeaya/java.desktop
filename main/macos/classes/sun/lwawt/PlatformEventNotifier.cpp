#include <sun/lwawt/PlatformEventNotifier.h>

#include <java/awt/Rectangle.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {

$MethodInfo _PlatformEventNotifier_MethodInfo_[] = {
	{"notifyActivation", "(ZLsun/lwawt/LWWindowPeer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyExpose", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyIconify", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyKeyEvent", "(IJIICI)V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyMouseEvent", "(IJIIIIIIIZ[B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyMouseWheelEvent", "(JIIIIIIIID[B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyNCMouseDown", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyReshape", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyUpdateCursor", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyZoom", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PlatformEventNotifier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.PlatformEventNotifier",
	nullptr,
	nullptr,
	nullptr,
	_PlatformEventNotifier_MethodInfo_
};

$Object* allocate$PlatformEventNotifier($Class* clazz) {
	return $of($alloc(PlatformEventNotifier));
}

$Class* PlatformEventNotifier::load$($String* name, bool initialize) {
	$loadClass(PlatformEventNotifier, name, initialize, &_PlatformEventNotifier_ClassInfo_, allocate$PlatformEventNotifier);
	return class$;
}

$Class* PlatformEventNotifier::class$ = nullptr;

	} // lwawt
} // sun