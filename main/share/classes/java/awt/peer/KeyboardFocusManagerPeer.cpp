#include <java/awt/peer/KeyboardFocusManagerPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _KeyboardFocusManagerPeer_MethodInfo_[] = {
	{"clearGlobalFocusOwner", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getCurrentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCurrentFocusedWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC | $ABSTRACT},
	{"setCurrentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCurrentFocusedWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _KeyboardFocusManagerPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.KeyboardFocusManagerPeer",
	nullptr,
	nullptr,
	nullptr,
	_KeyboardFocusManagerPeer_MethodInfo_
};

$Object* allocate$KeyboardFocusManagerPeer($Class* clazz) {
	return $of($alloc(KeyboardFocusManagerPeer));
}

$Class* KeyboardFocusManagerPeer::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManagerPeer, name, initialize, &_KeyboardFocusManagerPeer_ClassInfo_, allocate$KeyboardFocusManagerPeer);
	return class$;
}

$Class* KeyboardFocusManagerPeer::class$ = nullptr;

		} // peer
	} // awt
} // java