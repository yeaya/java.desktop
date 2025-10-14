#include <java/awt/peer/LightweightPeer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace awt {
		namespace peer {

$ClassInfo _LightweightPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.LightweightPeer",
	nullptr,
	"java.awt.peer.ComponentPeer"
};

$Object* allocate$LightweightPeer($Class* clazz) {
	return $of($alloc(LightweightPeer));
}

$Class* LightweightPeer::load$($String* name, bool initialize) {
	$loadClass(LightweightPeer, name, initialize, &_LightweightPeer_ClassInfo_, allocate$LightweightPeer);
	return class$;
}

$Class* LightweightPeer::class$ = nullptr;

		} // peer
	} // awt
} // java