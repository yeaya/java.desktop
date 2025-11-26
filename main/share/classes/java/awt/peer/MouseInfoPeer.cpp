#include <java/awt/peer/MouseInfoPeer.h>

#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _MouseInfoPeer_MethodInfo_[] = {
	{"fillPointWithCoords", "(Ljava/awt/Point;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"isWindowUnderMouse", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MouseInfoPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.MouseInfoPeer",
	nullptr,
	nullptr,
	nullptr,
	_MouseInfoPeer_MethodInfo_
};

$Object* allocate$MouseInfoPeer($Class* clazz) {
	return $of($alloc(MouseInfoPeer));
}

$Class* MouseInfoPeer::load$($String* name, bool initialize) {
	$loadClass(MouseInfoPeer, name, initialize, &_MouseInfoPeer_ClassInfo_, allocate$MouseInfoPeer);
	return class$;
}

$Class* MouseInfoPeer::class$ = nullptr;

		} // peer
	} // awt
} // java