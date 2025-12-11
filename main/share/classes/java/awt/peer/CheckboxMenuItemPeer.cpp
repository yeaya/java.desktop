#include <java/awt/peer/CheckboxMenuItemPeer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _CheckboxMenuItemPeer_MethodInfo_[] = {
	{"setState", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CheckboxMenuItemPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.CheckboxMenuItemPeer",
	nullptr,
	"java.awt.peer.MenuItemPeer",
	nullptr,
	_CheckboxMenuItemPeer_MethodInfo_
};

$Object* allocate$CheckboxMenuItemPeer($Class* clazz) {
	return $of($alloc(CheckboxMenuItemPeer));
}

$Class* CheckboxMenuItemPeer::load$($String* name, bool initialize) {
	$loadClass(CheckboxMenuItemPeer, name, initialize, &_CheckboxMenuItemPeer_ClassInfo_, allocate$CheckboxMenuItemPeer);
	return class$;
}

$Class* CheckboxMenuItemPeer::class$ = nullptr;

		} // peer
	} // awt
} // java