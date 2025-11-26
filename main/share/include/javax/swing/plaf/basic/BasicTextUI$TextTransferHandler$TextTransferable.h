#ifndef _javax_swing_plaf_basic_BasicTextUI$TextTransferHandler$TextTransferable_h_
#define _javax_swing_plaf_basic_BasicTextUI$TextTransferHandler$TextTransferable_h_
//$ class javax.swing.plaf.basic.BasicTextUI$TextTransferHandler$TextTransferable
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
		namespace text {
			class JTextComponent;
			class Position;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTextUI$TextTransferHandler$TextTransferable : public ::javax::swing::plaf::basic::BasicTransferable {
	$class(BasicTextUI$TextTransferHandler$TextTransferable, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTransferable)
public:
	BasicTextUI$TextTransferHandler$TextTransferable();
	void init$(::javax::swing::text::JTextComponent* c, int32_t start, int32_t end);
	virtual $Object* getRicherData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getRicherFlavors() override;
	virtual void removeText();
	::javax::swing::text::Position* p0 = nullptr;
	::javax::swing::text::Position* p1 = nullptr;
	$String* mimeType = nullptr;
	$String* richText = nullptr;
	::javax::swing::text::JTextComponent* c = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$TextTransferHandler$TextTransferable_h_