#ifndef _javax_swing_plaf_basic_BasicTransferable_h_
#define _javax_swing_plaf_basic_BasicTransferable_h_
//$ class javax.swing.plaf.basic.BasicTransferable
//$ extends java.awt.datatransfer.Transferable
//$ implements javax.swing.plaf.UIResource

#include <java/awt/datatransfer/Transferable.h>
#include <java/lang/Array.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTransferable : public ::java::awt::datatransfer::Transferable, public ::javax::swing::plaf::UIResource {
	$class(BasicTransferable, 0, ::java::awt::datatransfer::Transferable, ::javax::swing::plaf::UIResource)
public:
	BasicTransferable();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* plainData, $String* htmlData);
	::java::io::InputStream* createInputStream(::java::awt::datatransfer::DataFlavor* flavor, $String* data);
	virtual $String* getHTMLData();
	virtual $String* getPlainData();
	virtual $Object* getRicherData(::java::awt::datatransfer::DataFlavor* flavor);
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getRicherFlavors();
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual bool isHTMLFlavor(::java::awt::datatransfer::DataFlavor* flavor);
	virtual bool isHTMLSupported();
	virtual bool isPlainFlavor(::java::awt::datatransfer::DataFlavor* flavor);
	virtual bool isPlainSupported();
	virtual bool isRicherFlavor(::java::awt::datatransfer::DataFlavor* flavor);
	virtual bool isStringFlavor(::java::awt::datatransfer::DataFlavor* flavor);
	virtual $String* toString() override;
	$String* plainData = nullptr;
	$String* htmlData = nullptr;
	static $Array<::java::awt::datatransfer::DataFlavor>* htmlFlavors;
	static $Array<::java::awt::datatransfer::DataFlavor>* stringFlavors;
	static $Array<::java::awt::datatransfer::DataFlavor>* plainFlavors;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTransferable_h_