#include <java/awt/peer/SystemTrayPeer.h>

#include <java/awt/Dimension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _SystemTrayPeer_MethodInfo_[] = {
	{"getTrayIconSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SystemTrayPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.SystemTrayPeer",
	nullptr,
	nullptr,
	nullptr,
	_SystemTrayPeer_MethodInfo_
};

$Object* allocate$SystemTrayPeer($Class* clazz) {
	return $of($alloc(SystemTrayPeer));
}

$Class* SystemTrayPeer::load$($String* name, bool initialize) {
	$loadClass(SystemTrayPeer, name, initialize, &_SystemTrayPeer_ClassInfo_, allocate$SystemTrayPeer);
	return class$;
}

$Class* SystemTrayPeer::class$ = nullptr;

		} // peer
	} // awt
} // java