#include <java/awt/peer/PopupMenuPeer.h>

#include <java/awt/Event.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Event = ::java::awt::Event;
using $MenuPeer = ::java::awt::peer::MenuPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _PopupMenuPeer_MethodInfo_[] = {
	{"show", "(Ljava/awt/Event;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PopupMenuPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.PopupMenuPeer",
	nullptr,
	"java.awt.peer.MenuPeer",
	nullptr,
	_PopupMenuPeer_MethodInfo_
};

$Object* allocate$PopupMenuPeer($Class* clazz) {
	return $of($alloc(PopupMenuPeer));
}

$Class* PopupMenuPeer::load$($String* name, bool initialize) {
	$loadClass(PopupMenuPeer, name, initialize, &_PopupMenuPeer_ClassInfo_, allocate$PopupMenuPeer);
	return class$;
}

$Class* PopupMenuPeer::class$ = nullptr;

		} // peer
	} // awt
} // java