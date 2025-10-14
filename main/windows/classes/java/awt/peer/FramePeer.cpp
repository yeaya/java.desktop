#include <java/awt/peer/FramePeer.h>

#include <java/awt/MenuBar.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MenuBar = ::java::awt::MenuBar;
using $Rectangle = ::java::awt::Rectangle;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _FramePeer_MethodInfo_[] = {
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getState", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setResizable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setState", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FramePeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.FramePeer",
	nullptr,
	"java.awt.peer.WindowPeer",
	nullptr,
	_FramePeer_MethodInfo_
};

$Object* allocate$FramePeer($Class* clazz) {
	return $of($alloc(FramePeer));
}

$Class* FramePeer::load$($String* name, bool initialize) {
	$loadClass(FramePeer, name, initialize, &_FramePeer_ClassInfo_, allocate$FramePeer);
	return class$;
}

$Class* FramePeer::class$ = nullptr;

		} // peer
	} // awt
} // java