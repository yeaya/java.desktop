#ifndef _javax_swing_plaf_basic_BasicTextUI$TextTransferHandler_h_
#define _javax_swing_plaf_basic_BasicTextUI$TextTransferHandler_h_
//$ class javax.swing.plaf.basic.BasicTextUI$TextTransferHandler
//$ extends javax.swing.TransferHandler
//$ implements javax.swing.plaf.UIResource

#include <java/lang/Array.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class Transferable;
		}
	}
}
namespace java {
	namespace io {
		class Reader;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class TransferHandler$TransferSupport;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTextUI$TextTransferHandler : public ::javax::swing::TransferHandler, public ::javax::swing::plaf::UIResource {
	$class(BasicTextUI$TextTransferHandler, $NO_CLASS_INIT, ::javax::swing::TransferHandler, ::javax::swing::plaf::UIResource)
public:
	BasicTextUI$TextTransferHandler();
	using ::javax::swing::TransferHandler::canImport;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool canImport(::javax::swing::JComponent* comp, $Array<::java::awt::datatransfer::DataFlavor>* flavors) override;
	virtual ::java::awt::datatransfer::Transferable* createTransferable(::javax::swing::JComponent* comp) override;
	virtual void exportDone(::javax::swing::JComponent* source, ::java::awt::datatransfer::Transferable* data, int32_t action) override;
	virtual ::java::awt::datatransfer::DataFlavor* getImportFlavor($Array<::java::awt::datatransfer::DataFlavor>* flavors, ::javax::swing::text::JTextComponent* c);
	virtual int32_t getSourceActions(::javax::swing::JComponent* c) override;
	virtual void handleReaderImport(::java::io::Reader* in, ::javax::swing::text::JTextComponent* c, bool useRead);
	virtual bool importData(::javax::swing::TransferHandler$TransferSupport* support) override;
	virtual bool importData(::javax::swing::JComponent* comp, ::java::awt::datatransfer::Transferable* t) override;
	virtual $String* toString() override;
	::javax::swing::text::JTextComponent* exportComp = nullptr;
	bool shouldRemove = false;
	int32_t p0 = 0;
	int32_t p1 = 0;
	bool modeBetween = false;
	bool isDrop = false;
	int32_t dropAction = 0;
	::javax::swing::text::Position$Bias* dropBias = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$TextTransferHandler_h_