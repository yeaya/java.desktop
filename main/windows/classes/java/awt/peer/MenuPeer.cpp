#include <java/awt/peer/MenuPeer.h>

#include <java/awt/MenuItem.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MenuItem = ::java::awt::MenuItem;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
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