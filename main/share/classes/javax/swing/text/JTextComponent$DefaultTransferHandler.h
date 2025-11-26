#ifndef _javax_swing_text_JTextComponent$DefaultTransferHandler_h_
#define _javax_swing_text_JTextComponent$DefaultTransferHandler_h_
//$ class javax.swing.text.JTextComponent$DefaultTransferHandler
//$ extends javax.swing.TransferHandler
//$ implements javax.swing.plaf.UIResource

#include <java/lang/Array.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
			class DataFlavor;
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
		namespace text {

class $export JTextComponent$DefaultTransferHandler : public ::javax::swing::TransferHandler, public ::javax::swing::plaf::UIResource {
	$class(JTextComponent$DefaultTransferHandler, $NO_CLASS_INIT, ::javax::swing::TransferHandler, ::javax::swing::plaf::UIResource)
public:
	JTextComponent$DefaultTransferHandler();
	using ::javax::swing::TransferHandler::importData;
	using ::javax::swing::TransferHandler::canImport;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool canImport(::javax::swing::JComponent* comp, $Array<::java::awt::datatransfer::DataFlavor>* transferFlavors) override;
	virtual void exportToClipboard(::javax::swing::JComponent* comp, ::java::awt::datatransfer::Clipboard* clipboard, int32_t action) override;
	::java::awt::datatransfer::DataFlavor* getFlavor($Array<::java::awt::datatransfer::DataFlavor>* flavors);
	virtual int32_t getSourceActions(::javax::swing::JComponent* c) override;
	virtual bool importData(::javax::swing::JComponent* comp, ::java::awt::datatransfer::Transferable* t) override;
	virtual $String* toString() override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$DefaultTransferHandler_h_