#include <java/awt/peer/MenuPeer.h>

#include <java/awt/MenuItem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _MenuPeer_MethodInfo_[] = {
	{"addItem", "(Ljava/awt/MenuItem;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"delItem", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.MenuPeer",
	nullptr,
	"java.awt.peer.MenuItemPeer",
	nullptr,
	_MenuPeer_MethodInfo_
};

$Object* allocate$MenuPeer($Class* clazz) {
	return $of($alloc(MenuPeer));
}

$Class* MenuPeer::load$($String* name, bool initialize) {
	$loadClass(MenuPeer, name, initialize, &_MenuPeer_ClassInfo_, allocate$MenuPeer);
	return class$;
}

$Class* MenuPeer::class$ = nullptr;

		} // peer
	} // awt
} // java