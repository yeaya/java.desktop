#ifndef _javax_swing_plaf_basic_BasicTreeUI$TreeTransferHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$TreeTransferHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$TreeTransferHandler
//$ extends javax.swing.TransferHandler
//$ implements javax.swing.plaf.UIResource,java.util.Comparator

#include <java/lang/Array.h>
#include <java/util/Comparator.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Transferable;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTreeUI$TreeTransferHandler : public ::javax::swing::TransferHandler, public ::javax::swing::plaf::UIResource, public ::java::util::Comparator {
	$class(BasicTreeUI$TreeTransferHandler, $NO_CLASS_INIT, ::javax::swing::TransferHandler, ::javax::swing::plaf::UIResource, ::java::util::Comparator)
public:
	BasicTreeUI$TreeTransferHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t compare(::javax::swing::tree::TreePath* o1, ::javax::swing::tree::TreePath* o2);
	virtual int32_t compare(Object$* o1, Object$* o2) override;
	virtual ::java::awt::datatransfer::Transferable* createTransferable(::javax::swing::JComponent* c) override;
	virtual $Array<::javax::swing::tree::TreePath>* getDisplayOrderPaths($Array<::javax::swing::tree::TreePath>* paths);
	virtual $String* getDisplayString(::javax::swing::tree::TreePath* path, bool selected, bool leaf);
	virtual int32_t getSourceActions(::javax::swing::JComponent* c) override;
	virtual $String* toString() override;
	::javax::swing::JTree* tree = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$TreeTransferHandler_h_