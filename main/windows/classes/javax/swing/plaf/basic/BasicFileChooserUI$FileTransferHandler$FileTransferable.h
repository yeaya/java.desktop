#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$FileTransferHandler$FileTransferable_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$FileTransferHandler$FileTransferable_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler$FileTransferable
//$ extends javax.swing.plaf.basic.BasicTransferable

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicFileChooserUI$FileTransferHandler$FileTransferable : public ::javax::swing::plaf::basic::BasicTransferable {
	$class(BasicFileChooserUI$FileTransferHandler$FileTransferable, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTransferable)
public:
	BasicFileChooserUI$FileTransferHandler$FileTransferable();
	void init$($String* plainData, $String* htmlData, $ObjectArray* fileData);
	virtual $Object* getRicherData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getRicherFlavors() override;
	$ObjectArray* fileData = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$FileTransferHandler$FileTransferable_h_