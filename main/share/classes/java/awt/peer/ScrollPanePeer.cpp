#include <java/awt/peer/ScrollPanePeer.h>

#include <java/awt/Adjustable.h>
#include <jcpp.h>

using $Adjustable = ::java::awt::Adjustable;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _ScrollPanePeer_MethodInfo_[] = {
	{"childResized", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getHScrollbarHeight", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getVScrollbarWidth", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"setScrollPosition", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setUnitIncrement", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValue", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ScrollPanePeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ScrollPanePeer",
	nullptr,
	"java.awt.peer.ContainerPeer",
	nullptr,
	_ScrollPanePeer_MethodInfo_
};

$Object* allocate$ScrollPanePeer($Class* clazz) {
	return $of($alloc(ScrollPanePeer));
}

$Class* ScrollPanePeer::load$($String* name, bool initialize) {
	$loadClass(ScrollPanePeer, name, initialize, &_ScrollPanePeer_ClassInfo_, allocate$ScrollPanePeer);
	return class$;
}

$Class* ScrollPanePeer::class$ = nullptr;

		} // peer
	} // awt
} // java