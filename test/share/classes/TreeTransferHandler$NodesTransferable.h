#ifndef _TreeTransferHandler$NodesTransferable_h_
#define _TreeTransferHandler$NodesTransferable_h_
//$ class TreeTransferHandler$NodesTransferable
//$ extends java.awt.datatransfer.Transferable

#include <java/awt/datatransfer/Transferable.h>
#include <java/lang/Array.h>

class TreeTransferHandler;
namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
		}
	}
}

class TreeTransferHandler$NodesTransferable : public ::java::awt::datatransfer::Transferable {
	$class(TreeTransferHandler$NodesTransferable, $NO_CLASS_INIT, ::java::awt::datatransfer::Transferable)
public:
	TreeTransferHandler$NodesTransferable();
	void init$(::TreeTransferHandler* this$0, $Array<::javax::swing::tree::DefaultMutableTreeNode>* nodes);
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	::TreeTransferHandler* this$0 = nullptr;
	$Array<::javax::swing::tree::DefaultMutableTreeNode>* nodes = nullptr;
};

#endif // _TreeTransferHandler$NodesTransferable_h_