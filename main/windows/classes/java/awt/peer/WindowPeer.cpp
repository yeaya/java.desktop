#include <java/awt/peer/WindowPeer.h>

#include <java/awt/Dialog.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _WindowPeer_MethodInfo_[] = {
	{"repositionSecurityWarning", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOpacity", "(F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"toBack", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"toFront", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateIconImages", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateWindow", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WindowPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.WindowPeer",
	nullptr,
	"java.awt.peer.ContainerPeer",
	nullptr,
	_WindowPeer_MethodInfo_
};

$Object* allocate$WindowPeer($Class* clazz) {
	return $of($alloc(WindowPeer));
}

$Class* WindowPeer::load$($String* name, bool initialize) {
	$loadClass(WindowPeer, name, initialize, &_WindowPeer_ClassInfo_, allocate$WindowPeer);
	return class$;
}

$Class* WindowPeer::class$ = nullptr;

		} // peer
	} // awt
} // java