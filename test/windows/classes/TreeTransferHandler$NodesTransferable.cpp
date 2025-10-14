#include <TreeTransferHandler$NodesTransferable.h>

#include <TreeTransferHandler.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <jcpp.h>

using $TreeTransferHandler = ::TreeTransferHandler;
using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DefaultMutableTreeNodeArray = $Array<::javax::swing::tree::DefaultMutableTreeNode>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;

$FieldInfo _TreeTransferHandler$NodesTransferable_FieldInfo_[] = {
	{"this$0", "LTreeTransferHandler;", nullptr, $FINAL | $SYNTHETIC, $field(TreeTransferHandler$NodesTransferable, this$0)},
	{"nodes", "[Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, 0, $field(TreeTransferHandler$NodesTransferable, nodes)},
	{}
};

$MethodInfo _TreeTransferHandler$NodesTransferable_MethodInfo_[] = {
	{"<init>", "(LTreeTransferHandler;[Ljavax/swing/tree/DefaultMutableTreeNode;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeTransferHandler$NodesTransferable::*)($TreeTransferHandler*,$DefaultMutableTreeNodeArray*)>(&TreeTransferHandler$NodesTransferable::init$))},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeTransferHandler$NodesTransferable_InnerClassesInfo_[] = {
	{"TreeTransferHandler$NodesTransferable", "TreeTransferHandler", "NodesTransferable", $PUBLIC},
	{}
};

$ClassInfo _TreeTransferHandler$NodesTransferable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TreeTransferHandler$NodesTransferable",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable",
	_TreeTransferHandler$NodesTransferable_FieldInfo_,
	_TreeTransferHandler$NodesTransferable_MethodInfo_,
	nullptr,
	nullptr,
	_TreeTransferHandler$NodesTransferable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TreeTransferHandler"
};

$Object* allocate$TreeTransferHandler$NodesTransferable($Class* clazz) {
	return $of($alloc(TreeTransferHandler$NodesTransferable));
}

void TreeTransferHandler$NodesTransferable::init$($TreeTransferHandler* this$0, $DefaultMutableTreeNodeArray* nodes) {
	$set(this, this$0, this$0);
	$set(this, nodes, nodes);
}

$Object* TreeTransferHandler$NodesTransferable::getTransferData($DataFlavor* flavor) {
	if (!isDataFlavorSupported(flavor)) {
		$throwNew($UnsupportedFlavorException, flavor);
	}
	return $of(this->nodes);
}

$DataFlavorArray* TreeTransferHandler$NodesTransferable::getTransferDataFlavors() {
	return this->this$0->flavors;
}

bool TreeTransferHandler$NodesTransferable::isDataFlavorSupported($DataFlavor* flavor) {
	return $nc(this->this$0->nodesFlavor)->equals(flavor);
}

TreeTransferHandler$NodesTransferable::TreeTransferHandler$NodesTransferable() {
}

$Class* TreeTransferHandler$NodesTransferable::load$($String* name, bool initialize) {
	$loadClass(TreeTransferHandler$NodesTransferable, name, initialize, &_TreeTransferHandler$NodesTransferable_ClassInfo_, allocate$TreeTransferHandler$NodesTransferable);
	return class$;
}

$Class* TreeTransferHandler$NodesTransferable::class$ = nullptr;