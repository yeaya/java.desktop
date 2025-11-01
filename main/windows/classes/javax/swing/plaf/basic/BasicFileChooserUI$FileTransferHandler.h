#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$FileTransferHandler_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$FileTransferHandler_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler
//$ extends javax.swing.TransferHandler
//$ implements javax.swing.plaf.UIResource

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
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicFileChooserUI$FileTransferHandler : public ::javax::swing::TransferHandler, public ::javax::swing::plaf::UIResource {
	$class(BasicFileChooserUI$FileTransferHandler, $NO_CLASS_INIT, ::javax::swing::TransferHandler, ::javax::swing::plaf::UIResource)
public:
	BasicFileChooserUI$FileTransferHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::datatransfer::Transferable* createTransferable(::javax::swing::JComponent* c) override;
	virtual int32_t getSourceActions(::javax::swing::JComponent* c) override;
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$FileTransferHandler_h_