#include <java/awt/peer/ScrollbarPeer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _ScrollbarPeer_MethodInfo_[] = {
	{"setLineIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPageIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValues", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ScrollbarPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ScrollbarPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_ScrollbarPeer_MethodInfo_
};

$Object* allocate$ScrollbarPeer($Class* clazz) {
	return $of($alloc(ScrollbarPeer));
}

$Class* ScrollbarPeer::load$($String* name, bool initialize) {
	$loadClass(ScrollbarPeer, name, initialize, &_ScrollbarPeer_ClassInfo_, allocate$ScrollbarPeer);
	return class$;
}

$Class* ScrollbarPeer::class$ = nullptr;

		} // peer
	} // awt
} // java