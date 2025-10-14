#ifndef _javax_swing_colorchooser_ValueFormatter$1_h_
#define _javax_swing_colorchooser_ValueFormatter$1_h_
//$ class javax.swing.colorchooser.ValueFormatter$1
//$ extends javax.swing.text.DocumentFilter

#include <javax/swing/text/DocumentFilter.h>

namespace javax {
	namespace swing {
		namespace colorchooser {
			class ValueFormatter;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class DocumentFilter$FilterBypass;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class ValueFormatter$1 : public ::javax::swing::text::DocumentFilter {
	$class(ValueFormatter$1, $NO_CLASS_INIT, ::javax::swing::text::DocumentFilter)
public:
	ValueFormatter$1();
	void init$(::javax::swing::colorchooser::ValueFormatter* this$0);
	virtual void insertString(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, $String* text, ::javax::swing::text::AttributeSet* set) override;
	virtual void remove(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length) override;
	virtual void replace(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* set) override;
	::javax::swing::colorchooser::ValueFormatter* this$0 = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_ValueFormatter$1_h_