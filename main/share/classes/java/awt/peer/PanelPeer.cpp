#include <java/awt/peer/PanelPeer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace awt {
		namespace peer {

$ClassInfo _PanelPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.PanelPeer",
	nullptr,
	"java.awt.peer.ContainerPeer"
};

$Object* allocate$PanelPeer($Class* clazz) {
	return $of($alloc(PanelPeer));
}

$Class* PanelPeer::load$($String* name, bool initialize) {
	$loadClass(PanelPeer, name, initialize, &_PanelPeer_ClassInfo_, allocate$PanelPeer);
	return class$;
}

$Class* PanelPeer::class$ = nullptr;

		} // peer
	} // awt
} // java