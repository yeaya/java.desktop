#include <TreeTransferHandler.h>

#include <TreeTransferHandler$NodesTransferable.h>
#include <java/awt/Component.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/io/IOException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree$DropLocation.h>
#include <javax/swing/JTree.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/TransferHandler$TransferSupport.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

#undef COPY_OR_MOVE
#undef MOVE

using $TreeTransferHandler$NodesTransferable = ::TreeTransferHandler$NodesTransferable;
using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DefaultMutableTreeNodeArray = $Array<::javax::swing::tree::DefaultMutableTreeNode>;
using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $JTree$DropLocation = ::javax::swing::JTree$DropLocation;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$TransferSupport = ::javax::swing::TransferHandler$TransferSupport;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;

$FieldInfo _TreeTransferHandler_FieldInfo_[] = {
	{"nodesFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, 0, $field(TreeTransferHandler, nodesFlavor)},
	{"flavors", "[Ljava/awt/datatransfer/DataFlavor;", nullptr, 0, $field(TreeTransferHandler, flavors)},
	{"nodesToRemove", "[Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, 0, $field(TreeTransferHandler, nodesToRemove)},
	{}
};

$MethodInfo _TreeTransferHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeTransferHandler::*)()>(&TreeTransferHandler::init$))},
	{"canImport", "(Ljavax/swing/TransferHandler$TransferSupport;)Z", nullptr, $PUBLIC},
	{"copy", "(Ljavax/swing/tree/TreeNode;)Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE, $method(static_cast<$DefaultMutableTreeNode*(TreeTransferHandler::*)($TreeNode*)>(&TreeTransferHandler::copy))},
	{"createTransferable", "(Ljavax/swing/JComponent;)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED},
	{"exportDone", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Transferable;I)V", nullptr, $PROTECTED},
	{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"haveCompleteNode", "(Ljavax/swing/JTree;)Z", nullptr, $PRIVATE, $method(static_cast<bool(TreeTransferHandler::*)($JTree*)>(&TreeTransferHandler::haveCompleteNode))},
	{"importData", "(Ljavax/swing/TransferHandler$TransferSupport;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeTransferHandler_InnerClassesInfo_[] = {
	{"TreeTransferHandler$NodesTransferable", "TreeTransferHandler", "NodesTransferable", $PUBLIC},
	{}
};

$ClassInfo _TreeTransferHandler_ClassInfo_ = {
	$ACC_SUPER,
	"TreeTransferHandler",
	"javax.swing.TransferHandler",
	nullptr,
	_TreeTransferHandler_FieldInfo_,
	_TreeTransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_TreeTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TreeTransferHandler$NodesTransferable"
};

$Object* allocate$TreeTransferHandler($Class* clazz) {
	return $of($alloc(TreeTransferHandler));
}

void TreeTransferHandler::init$() {
	$useLocalCurrentObjectStackCache();
	$TransferHandler::init$();
	$set(this, flavors, $new($DataFlavorArray, 1));
	try {
		$init($DataFlavor);
		$load($DefaultMutableTreeNodeArray);
		$var($String, mimeType, $str({$DataFlavor::javaJVMLocalObjectMimeType, ";class=\""_s, $($getClass($DefaultMutableTreeNodeArray)->getName()), "\""_s}));
		$set(this, nodesFlavor, $new($DataFlavor, mimeType));
		$nc(this->flavors)->set(0, this->nodesFlavor);
	} catch ($ClassNotFoundException& e) {
		$nc($System::out)->println($$str({"ClassNotFound: "_s, $(e->getMessage())}));
	}
}

bool TreeTransferHandler::canImport($TransferHandler$TransferSupport* support) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(support)->isDrop()) {
		return false;
	}
	$nc(support)->setShowDropLocation(true);
	if (!support->isDataFlavorSupported(this->nodesFlavor)) {
		return false;
	}
	$var($JTree$DropLocation, dl, $cast($JTree$DropLocation, support->getDropLocation()));
	$var($JTree, tree, $cast($JTree, support->getComponent()));
	int32_t dropRow = $nc(tree)->getRowForPath($($nc(dl)->getPath()));
	$var($ints, selRows, tree->getSelectionRows());
	for (int32_t i = 0; i < $nc(selRows)->length; ++i) {
		if (selRows->get(i) == dropRow) {
			return false;
		}
	}
	int32_t action = support->getDropAction();
	if (action == $TransferHandler::MOVE) {
		return haveCompleteNode(tree);
	}
	$var($TreePath, dest, $nc(dl)->getPath());
	$var($DefaultMutableTreeNode, target, $cast($DefaultMutableTreeNode, $nc(dest)->getLastPathComponent()));
	$var($TreePath, path, tree->getPathForRow($nc(selRows)->get(0)));
	$var($DefaultMutableTreeNode, firstNode, $cast($DefaultMutableTreeNode, $nc(path)->getLastPathComponent()));
	bool var$0 = $nc(firstNode)->getChildCount() > 0;
	if (var$0) {
		int32_t var$1 = $nc(target)->getLevel();
		var$0 = var$1 < firstNode->getLevel();
	}
	if (var$0) {
		return false;
	}
	return true;
}

bool TreeTransferHandler::haveCompleteNode($JTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ints, selRows, $nc(tree)->getSelectionRows());
	$var($TreePath, path, tree->getPathForRow($nc(selRows)->get(0)));
	$var($DefaultMutableTreeNode, first, $cast($DefaultMutableTreeNode, $nc(path)->getLastPathComponent()));
	int32_t childCount = $nc(first)->getChildCount();
	if (childCount > 0 && $nc(selRows)->length == 1) {
		return false;
	}
	for (int32_t i = 1; i < $nc(selRows)->length; ++i) {
		$assign(path, tree->getPathForRow(selRows->get(i)));
		$var($DefaultMutableTreeNode, next, $cast($DefaultMutableTreeNode, $nc(path)->getLastPathComponent()));
		if (first->isNodeChild(next)) {
			if (childCount > selRows->length - 1) {
				return false;
			}
		}
	}
	return true;
}

$Transferable* TreeTransferHandler::createTransferable($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JTree, tree, $cast($JTree, c));
	$var($TreePathArray, paths, $nc(tree)->getSelectionPaths());
	if (paths != nullptr) {
		$var($List, copies, $new($ArrayList));
		$var($List, toRemove, $new($ArrayList));
		$var($DefaultMutableTreeNode, node, $cast($DefaultMutableTreeNode, $nc(paths->get(0))->getLastPathComponent()));
		$var($DefaultMutableTreeNode, copy, this->copy(node));
		copies->add(copy);
		toRemove->add(node);
		for (int32_t i = 1; i < paths->length; ++i) {
			$var($DefaultMutableTreeNode, next, $cast($DefaultMutableTreeNode, $nc(paths->get(i))->getLastPathComponent()));
			int32_t var$0 = $nc(next)->getLevel();
			if (var$0 < $nc(node)->getLevel()) {
				break;
			} else {
				int32_t var$2 = next->getLevel();
				if (var$2 > node->getLevel()) {
					$nc(copy)->add($(this->copy(next)));
				} else {
					copies->add($(this->copy(next)));
					toRemove->add(next);
				}
			}
		}
		$var($DefaultMutableTreeNodeArray, nodes, $fcast($DefaultMutableTreeNodeArray, copies->toArray($$new($DefaultMutableTreeNodeArray, copies->size()))));
		$set(this, nodesToRemove, $fcast($DefaultMutableTreeNodeArray, toRemove->toArray($$new($DefaultMutableTreeNodeArray, toRemove->size()))));
		return $new($TreeTransferHandler$NodesTransferable, this, nodes);
	}
	return nullptr;
}

$DefaultMutableTreeNode* TreeTransferHandler::copy($TreeNode* node) {
	return $new($DefaultMutableTreeNode, node);
}

void TreeTransferHandler::exportDone($JComponent* source, $Transferable* data, int32_t action) {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(action & (uint32_t)$TransferHandler::MOVE)) == $TransferHandler::MOVE) {
		$var($JTree, tree, $cast($JTree, source));
		$var($DefaultTreeModel, model, $cast($DefaultTreeModel, $nc(tree)->getModel()));
		{
			$var($DefaultMutableTreeNodeArray, arr$, this->nodesToRemove);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DefaultMutableTreeNode, nodesToRemove1, arr$->get(i$));
				{
					$nc(model)->removeNodeFromParent(nodesToRemove1);
				}
			}
		}
	}
}

int32_t TreeTransferHandler::getSourceActions($JComponent* c) {
	return $TransferHandler::COPY_OR_MOVE;
}

bool TreeTransferHandler::importData($TransferHandler$TransferSupport* support) {
	$useLocalCurrentObjectStackCache();
	if (!canImport(support)) {
		return false;
	}
	$var($DefaultMutableTreeNodeArray, nodes, nullptr);
	try {
		$var($Transferable, t, $nc(support)->getTransferable());
		$assign(nodes, $cast($DefaultMutableTreeNodeArray, $nc(t)->getTransferData(this->nodesFlavor)));
	} catch ($UnsupportedFlavorException& ufe) {
		$nc($System::out)->println($$str({"UnsupportedFlavor: "_s, $(ufe->getMessage())}));
	} catch ($IOException& ioe) {
		$nc($System::out)->println($$str({"I/O error: "_s, $(ioe->getMessage())}));
	}
	$var($JTree$DropLocation, dl, $cast($JTree$DropLocation, $nc(support)->getDropLocation()));
	int32_t childIndex = $nc(dl)->getChildIndex();
	$var($TreePath, dest, dl->getPath());
	$var($DefaultMutableTreeNode, parent, $cast($DefaultMutableTreeNode, $nc(dest)->getLastPathComponent()));
	$var($JTree, tree, $cast($JTree, support->getComponent()));
	$var($DefaultTreeModel, model, $cast($DefaultTreeModel, $nc(tree)->getModel()));
	int32_t index = childIndex;
	if (childIndex == -1) {
		index = $nc(parent)->getChildCount();
	}
	{
		$var($DefaultMutableTreeNodeArray, arr$, nodes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($DefaultMutableTreeNode, node, arr$->get(i$));
			{
				$nc(model)->insertNodeInto(node, parent, index++);
			}
		}
	}
	return true;
}

$String* TreeTransferHandler::toString() {
	return $of(this)->getClass()->getName();
}

TreeTransferHandler::TreeTransferHandler() {
}

$Class* TreeTransferHandler::load$($String* name, bool initialize) {
	$loadClass(TreeTransferHandler, name, initialize, &_TreeTransferHandler_ClassInfo_, allocate$TreeTransferHandler);
	return class$;
}

$Class* TreeTransferHandler::class$ = nullptr;