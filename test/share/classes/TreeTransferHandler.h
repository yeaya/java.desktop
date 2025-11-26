#ifndef _TreeTransferHandler_h_
#define _TreeTransferHandler_h_
//$ class TreeTransferHandler
//$ extends javax.swing.TransferHandler

#include <java/lang/Array.h>
#include <javax/swing/TransferHandler.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class Transferable;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JTree;
		class TransferHandler$TransferSupport;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
			class TreeNode;
		}
	}
}

class TreeTransferHandler : public ::javax::swing::TransferHandler {
	$class(TreeTransferHandler, $NO_CLASS_INIT, ::javax::swing::TransferHandler)
public:
	TreeTransferHandler();
	using ::javax::swing::TransferHandler::importData;
	using ::javax::swing::TransferHandler::canImport;
	void init$();
	virtual bool canImport(::javax::swing::TransferHandler$TransferSupport* support) override;
	::javax::swing::tree::DefaultMutableTreeNode* copy(::javax::swing::tree::TreeNode* node);
	virtual ::java::awt::datatransfer::Transferable* createTransferable(::javax::swing::JComponent* c) override;
	virtual void exportDone(::javax::swing::JComponent* source, ::java::awt::datatransfer::Transferable* data, int32_t action) override;
	virtual int32_t getSourceActions(::javax::swing::JComponent* c) override;
	bool haveCompleteNode(::javax::swing::JTree* tree);
	virtual bool importData(::javax::swing::TransferHandler$TransferSupport* support) override;
	virtual $String* toString() override;
	::java::awt::datatransfer::DataFlavor* nodesFlavor = nullptr;
	$Array<::java::awt::datatransfer::DataFlavor>* flavors = nullptr;
	$Array<::javax::swing::tree::DefaultMutableTreeNode>* nodesToRemove = nullptr;
};

#endif // _TreeTransferHandler_h_