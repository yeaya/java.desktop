#ifndef _javax_swing_JSpinner$ListEditor$ListFormatter$Filter_h_
#define _javax_swing_JSpinner$ListEditor$ListFormatter$Filter_h_
//$ class javax.swing.JSpinner$ListEditor$ListFormatter$Filter
//$ extends javax.swing.text.DocumentFilter

#include <javax/swing/text/DocumentFilter.h>

namespace javax {
	namespace swing {
		class JSpinner$ListEditor$ListFormatter;
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

class JSpinner$ListEditor$ListFormatter$Filter : public ::javax::swing::text::DocumentFilter {
	$class(JSpinner$ListEditor$ListFormatter$Filter, $NO_CLASS_INIT, ::javax::swing::text::DocumentFilter)
public:
	JSpinner$ListEditor$ListFormatter$Filter();
	void init$(::javax::swing::JSpinner$ListEditor$ListFormatter* this$1);
	virtual void insertString(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, $String* string, ::javax::swing::text::AttributeSet* attr) override;
	virtual void replace(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* string, ::javax::swing::text::AttributeSet* attrs) override;
	::javax::swing::JSpinner$ListEditor$ListFormatter* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$ListEditor$ListFormatter$Filter_h_