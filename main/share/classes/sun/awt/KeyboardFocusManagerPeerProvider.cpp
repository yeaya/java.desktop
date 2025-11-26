#include <sun/awt/KeyboardFocusManagerPeerProvider.h>

#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <jcpp.h>

using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _KeyboardFocusManagerPeerProvider_MethodInfo_[] = {
	{"getKeyboardFocusManagerPeer", "()Ljava/awt/peer/KeyboardFocusManagerPeer;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _KeyboardFocusManagerPeerProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.KeyboardFocusManagerPeerProvider",
	nullptr,
	nullptr,
	nullptr,
	_KeyboardFocusManagerPeerProvider_MethodInfo_
};

$Object* allocate$KeyboardFocusManagerPeerProvider($Class* clazz) {
	return $of($alloc(KeyboardFocusManagerPeerProvider));
}

$Class* KeyboardFocusManagerPeerProvider::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManagerPeerProvider, name, initialize, &_KeyboardFocusManagerPeerProvider_ClassInfo_, allocate$KeyboardFocusManagerPeerProvider);
	return class$;
}

$Class* KeyboardFocusManagerPeerProvider::class$ = nullptr;

	} // awt
} // sun