#include <java/awt/dnd/peer/DropTargetContextPeer.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DropTarget.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {

$MethodInfo _DropTargetContextPeer_MethodInfo_[] = {
	{"acceptDrag", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"acceptDrop", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dropComplete", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getDropTarget", "()Ljava/awt/dnd/DropTarget;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTargetActions", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTransferable", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"isTransferableJVMLocal", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"rejectDrag", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"rejectDrop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTargetActions", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DropTargetContextPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.dnd.peer.DropTargetContextPeer",
	nullptr,
	nullptr,
	nullptr,
	_DropTargetContextPeer_MethodInfo_
};

$Object* allocate$DropTargetContextPeer($Class* clazz) {
	return $of($alloc(DropTargetContextPeer));
}

$Class* DropTargetContextPeer::load$($String* name, bool initialize) {
	$loadClass(DropTargetContextPeer, name, initialize, &_DropTargetContextPeer_ClassInfo_, allocate$DropTargetContextPeer);
	return class$;
}

$Class* DropTargetContextPeer::class$ = nullptr;

			} // peer
		} // dnd
	} // awt
} // java