#ifndef _javax_swing_text_AbstractDocument$2_h_
#define _javax_swing_text_AbstractDocument$2_h_
//$ class javax.swing.text.AbstractDocument$2
//$ extends java.io.ObjectInputValidation

#include <java/io/ObjectInputValidation.h>

namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class AbstractDocument$2 : public ::java::io::ObjectInputValidation {
	$class(AbstractDocument$2, $NO_CLASS_INIT, ::java::io::ObjectInputValidation)
public:
	AbstractDocument$2();
	void init$(::javax::swing::text::AbstractDocument* this$0);
	virtual void validateObject() override;
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$2_h_