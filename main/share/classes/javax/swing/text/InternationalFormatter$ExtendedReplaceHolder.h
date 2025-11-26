#ifndef _javax_swing_text_InternationalFormatter$ExtendedReplaceHolder_h_
#define _javax_swing_text_InternationalFormatter$ExtendedReplaceHolder_h_
//$ class javax.swing.text.InternationalFormatter$ExtendedReplaceHolder
//$ extends javax.swing.text.DefaultFormatter$ReplaceHolder

#include <javax/swing/text/DefaultFormatter$ReplaceHolder.h>

namespace javax {
	namespace swing {
		namespace text {
			class InternationalFormatter;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export InternationalFormatter$ExtendedReplaceHolder : public ::javax::swing::text::DefaultFormatter$ReplaceHolder {
	$class(InternationalFormatter$ExtendedReplaceHolder, $NO_CLASS_INIT, ::javax::swing::text::DefaultFormatter$ReplaceHolder)
public:
	InternationalFormatter$ExtendedReplaceHolder();
	void init$();
	virtual void resetFromValue(::javax::swing::text::InternationalFormatter* formatter);
	int32_t endOffset = 0;
	int32_t endTextLength = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_InternationalFormatter$ExtendedReplaceHolder_h_