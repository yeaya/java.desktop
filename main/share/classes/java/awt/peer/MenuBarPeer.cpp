#include <java/awt/peer/MenuBarPeer.h>

#include <java/awt/Menu.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _MenuBarPeer_MethodInfo_[] = {
	{"addHelpMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"delMenu", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuBarPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.MenuBarPeer",
	nullptr,
	"java.awt.peer.MenuComponentPeer",
	nullptr,
	_MenuBarPeer_MethodInfo_
};

$Object* allocate$MenuBarPeer($Class* clazz) {
	return $of($alloc(MenuBarPeer));
}

$Class* MenuBarPeer::load$($String* name, bool initialize) {
	$loadClass(MenuBarPeer, name, initialize, &_MenuBarPeer_ClassInfo_, allocate$MenuBarPeer);
	return class$;
}

$Class* MenuBarPeer::class$ = nullptr;

		} // peer
	} // awt
} // java