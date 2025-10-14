#include <java/awt/peer/MenuItemPeer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _MenuItemPeer_MethodInfo_[] = {
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuItemPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.MenuItemPeer",
	nullptr,
	"java.awt.peer.MenuComponentPeer",
	nullptr,
	_MenuItemPeer_MethodInfo_
};

$Object* allocate$MenuItemPeer($Class* clazz) {
	return $of($alloc(MenuItemPeer));
}

$Class* MenuItemPeer::load$($String* name, bool initialize) {
	$loadClass(MenuItemPeer, name, initialize, &_MenuItemPeer_ClassInfo_, allocate$MenuItemPeer);
	return class$;
}

$Class* MenuItemPeer::class$ = nullptr;

		} // peer
	} // awt
} // java