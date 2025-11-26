#include <java/awt/dnd/DropTargetContext$TransferableProxy.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DropTargetContext.h>
#include <sun/awt/datatransfer/TransferableProxy.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferableProxy = ::sun::awt::datatransfer::TransferableProxy;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DropTargetContext$TransferableProxy_FieldInfo_[] = {
	{"this$0", "Ljava/awt/dnd/DropTargetContext;", nullptr, $FINAL | $SYNTHETIC, $field(DropTargetContext$TransferableProxy, this$0)},
	{"transferable", "Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED, $field(DropTargetContext$TransferableProxy, transferable)},
	{"isLocal", "Z", nullptr, $PROTECTED, $field(DropTargetContext$TransferableProxy, isLocal)},
	{"proxy", "Lsun/awt/datatransfer/TransferableProxy;", nullptr, $PRIVATE, $field(DropTargetContext$TransferableProxy, proxy)},
	{}
};

$MethodInfo _DropTargetContext$TransferableProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DropTargetContext;Ljava/awt/datatransfer/Transferable;Z)V", nullptr, 0, $method(static_cast<void(DropTargetContext$TransferableProxy::*)($DropTargetContext*,$Transferable*,bool)>(&DropTargetContext$TransferableProxy::init$))},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DropTargetContext$TransferableProxy_InnerClassesInfo_[] = {
	{"java.awt.dnd.DropTargetContext$TransferableProxy", "java.awt.dnd.DropTargetContext", "TransferableProxy", $PROTECTED},
	{}
};

$ClassInfo _DropTargetContext$TransferableProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DropTargetContext$TransferableProxy",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable",
	_DropTargetContext$TransferableProxy_FieldInfo_,
	_DropTargetContext$TransferableProxy_MethodInfo_,
	nullptr,
	nullptr,
	_DropTargetContext$TransferableProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.dnd.DropTargetContext"
};

$Object* allocate$DropTargetContext$TransferableProxy($Class* clazz) {
	return $of($alloc(DropTargetContext$TransferableProxy));
}

void DropTargetContext$TransferableProxy::init$($DropTargetContext* this$0, $Transferable* t, bool local) {
	$set(this, this$0, this$0);
	$set(this, proxy, $new($TransferableProxy, t, local));
	$set(this, transferable, t);
	this->isLocal = local;
}

$DataFlavorArray* DropTargetContext$TransferableProxy::getTransferDataFlavors() {
	return $nc(this->proxy)->getTransferDataFlavors();
}

bool DropTargetContext$TransferableProxy::isDataFlavorSupported($DataFlavor* flavor) {
	return $nc(this->proxy)->isDataFlavorSupported(flavor);
}

$Object* DropTargetContext$TransferableProxy::getTransferData($DataFlavor* df) {
	return $of($nc(this->proxy)->getTransferData(df));
}

DropTargetContext$TransferableProxy::DropTargetContext$TransferableProxy() {
}

$Class* DropTargetContext$TransferableProxy::load$($String* name, bool initialize) {
	$loadClass(DropTargetContext$TransferableProxy, name, initialize, &_DropTargetContext$TransferableProxy_ClassInfo_, allocate$DropTargetContext$TransferableProxy);
	return class$;
}

$Class* DropTargetContext$TransferableProxy::class$ = nullptr;

		} // dnd
	} // awt
} // java