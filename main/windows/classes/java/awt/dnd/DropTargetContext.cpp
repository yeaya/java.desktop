#include <java/awt/dnd/DropTargetContext.h>

#include <java/awt/Component.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/DropTargetContext$1.h>
#include <java/awt/dnd/DropTargetContext$TransferableProxy.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/awt/dnd/peer/DropTargetContextPeer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$DropTargetContextAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $Component = ::java::awt::Component;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $DropTargetContext$1 = ::java::awt::dnd::DropTargetContext$1;
using $DropTargetContext$TransferableProxy = ::java::awt::dnd::DropTargetContext$TransferableProxy;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $DropTargetContextPeer = ::java::awt::dnd::peer::DropTargetContextPeer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$DropTargetContextAccessor = ::sun::awt::AWTAccessor$DropTargetContextAccessor;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DropTargetContext_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DropTargetContext, serialVersionUID)},
	{"dropTarget", "Ljava/awt/dnd/DropTarget;", nullptr, $PRIVATE | $FINAL, $field(DropTargetContext, dropTarget)},
	{"dropTargetContextPeer", "Ljava/awt/dnd/peer/DropTargetContextPeer;", nullptr, $PRIVATE | $TRANSIENT, $field(DropTargetContext, dropTargetContextPeer)},
	{"transferable", "Ljava/awt/datatransfer/Transferable;", nullptr, $PRIVATE | $TRANSIENT, $field(DropTargetContext, transferable)},
	{}
};

$MethodInfo _DropTargetContext_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DropTarget;)V", nullptr, 0, $method(static_cast<void(DropTargetContext::*)($DropTarget*)>(&DropTargetContext::init$))},
	{"acceptDrag", "(I)V", nullptr, $PROTECTED},
	{"acceptDrop", "(I)V", nullptr, $PROTECTED},
	{"createTransferableProxy", "(Ljava/awt/datatransfer/Transferable;Z)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED},
	{"dropComplete", "(Z)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getCurrentDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PROTECTED},
	{"getCurrentDataFlavorsAsList", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/datatransfer/DataFlavor;>;", $PROTECTED},
	{"getDropTarget", "()Ljava/awt/dnd/DropTarget;", nullptr, $PUBLIC},
	{"getDropTargetContextPeer", "()Ljava/awt/dnd/peer/DropTargetContextPeer;", nullptr, 0},
	{"getTargetActions", "()I", nullptr, $PROTECTED},
	{"getTransferable", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PROTECTED},
	{"rejectDrag", "()V", nullptr, $PROTECTED},
	{"rejectDrop", "()V", nullptr, $PROTECTED},
	{"reset", "()V", nullptr, 0},
	{"setDropTargetContextPeer", "(Ljava/awt/dnd/peer/DropTargetContextPeer;)V", nullptr, 0},
	{"setTargetActions", "(I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DropTargetContext_InnerClassesInfo_[] = {
	{"java.awt.dnd.DropTargetContext$TransferableProxy", "java.awt.dnd.DropTargetContext", "TransferableProxy", $PROTECTED},
	{"java.awt.dnd.DropTargetContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DropTargetContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DropTargetContext",
	"java.lang.Object",
	"java.io.Serializable",
	_DropTargetContext_FieldInfo_,
	_DropTargetContext_MethodInfo_,
	nullptr,
	nullptr,
	_DropTargetContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.dnd.DropTargetContext$TransferableProxy,java.awt.dnd.DropTargetContext$1"
};

$Object* allocate$DropTargetContext($Class* clazz) {
	return $of($alloc(DropTargetContext));
}

void DropTargetContext::init$($DropTarget* dt) {
	$set(this, dropTarget, dt);
}

$DropTarget* DropTargetContext::getDropTarget() {
	return this->dropTarget;
}

$Component* DropTargetContext::getComponent() {
	return $nc(this->dropTarget)->getComponent();
}

void DropTargetContext::reset() {
	$set(this, dropTargetContextPeer, nullptr);
	$set(this, transferable, nullptr);
}

void DropTargetContext::setTargetActions(int32_t actions) {
	$var($DropTargetContextPeer, peer, getDropTargetContextPeer());
	if (peer != nullptr) {
		$synchronized(peer) {
			peer->setTargetActions(actions);
			$nc($(getDropTarget()))->doSetDefaultActions(actions);
		}
	} else {
		$nc($(getDropTarget()))->doSetDefaultActions(actions);
	}
}

int32_t DropTargetContext::getTargetActions() {
	$var($DropTargetContextPeer, peer, getDropTargetContextPeer());
	return ((peer != nullptr) ? $nc(peer)->getTargetActions() : $nc(this->dropTarget)->getDefaultActions());
}

void DropTargetContext::dropComplete(bool success) {
	$var($DropTargetContextPeer, peer, getDropTargetContextPeer());
	if (peer != nullptr) {
		peer->dropComplete(success);
	}
}

void DropTargetContext::acceptDrag(int32_t dragOperation) {
	$var($DropTargetContextPeer, peer, getDropTargetContextPeer());
	if (peer != nullptr) {
		peer->acceptDrag(dragOperation);
	}
}

void DropTargetContext::rejectDrag() {
	$var($DropTargetContextPeer, peer, getDropTargetContextPeer());
	if (peer != nullptr) {
		peer->rejectDrag();
	}
}

void DropTargetContext::acceptDrop(int32_t dropOperation) {
	$var($DropTargetContextPeer, peer, getDropTargetContextPeer());
	if (peer != nullptr) {
		peer->acceptDrop(dropOperation);
	}
}

void DropTargetContext::rejectDrop() {
	$var($DropTargetContextPeer, peer, getDropTargetContextPeer());
	if (peer != nullptr) {
		peer->rejectDrop();
	}
}

$DataFlavorArray* DropTargetContext::getCurrentDataFlavors() {
	$var($DropTargetContextPeer, peer, getDropTargetContextPeer());
	return peer != nullptr ? $nc(peer)->getTransferDataFlavors() : $new($DataFlavorArray, 0);
}

$List* DropTargetContext::getCurrentDataFlavorsAsList() {
	return $Arrays::asList($(getCurrentDataFlavors()));
}

bool DropTargetContext::isDataFlavorSupported($DataFlavor* df) {
	return $nc($(getCurrentDataFlavorsAsList()))->contains(df);
}

$Transferable* DropTargetContext::getTransferable() {
	$var($DropTargetContextPeer, peer, getDropTargetContextPeer());
	if (peer == nullptr) {
		$throwNew($InvalidDnDOperationException);
	} else {
		if (this->transferable == nullptr) {
			$var($Transferable, t, $nc(peer)->getTransferable());
			bool isLocal = peer->isTransferableJVMLocal();
			$synchronized(this) {
				if (this->transferable == nullptr) {
					$set(this, transferable, createTransferableProxy(t, isLocal));
				}
			}
		}
		return this->transferable;
	}
}

$DropTargetContextPeer* DropTargetContext::getDropTargetContextPeer() {
	return this->dropTargetContextPeer;
}

void DropTargetContext::setDropTargetContextPeer($DropTargetContextPeer* dtcp) {
	$set(this, dropTargetContextPeer, dtcp);
}

$Transferable* DropTargetContext::createTransferableProxy($Transferable* t, bool local) {
	return $new($DropTargetContext$TransferableProxy, this, t, local);
}

void clinit$DropTargetContext($Class* class$) {
	{
		$AWTAccessor::setDropTargetContextAccessor($$new($DropTargetContext$1));
	}
}

DropTargetContext::DropTargetContext() {
}

$Class* DropTargetContext::load$($String* name, bool initialize) {
	$loadClass(DropTargetContext, name, initialize, &_DropTargetContext_ClassInfo_, clinit$DropTargetContext, allocate$DropTargetContext);
	return class$;
}

$Class* DropTargetContext::class$ = nullptr;

		} // dnd
	} // awt
} // java