#include <java/awt/dnd/peer/DropTargetPeer.h>

#include <java/awt/dnd/DropTarget.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {

$MethodInfo _DropTargetPeer_MethodInfo_[] = {
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DropTargetPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.dnd.peer.DropTargetPeer",
	nullptr,
	nullptr,
	nullptr,
	_DropTargetPeer_MethodInfo_
};

$Object* allocate$DropTargetPeer($Class* clazz) {
	return $of($alloc(DropTargetPeer));
}

$Class* DropTargetPeer::load$($String* name, bool initialize) {
	$loadClass(DropTargetPeer, name, initialize, &_DropTargetPeer_ClassInfo_, allocate$DropTargetPeer);
	return class$;
}

$Class* DropTargetPeer::class$ = nullptr;

			} // peer
		} // dnd
	} // awt
} // java