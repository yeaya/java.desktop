#ifndef _javax_swing_text_StyleContext$KeyEnumeration_h_
#define _javax_swing_text_StyleContext$KeyEnumeration_h_
//$ class javax.swing.text.StyleContext$KeyEnumeration
//$ extends java.util.Enumeration

#include <java/lang/Array.h>
#include <java/util/Enumeration.h>

namespace javax {
	namespace swing {
		namespace text {
			class StyleContext;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export StyleContext$KeyEnumeration : public ::java::util::Enumeration {
	$class(StyleContext$KeyEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	StyleContext$KeyEnumeration();
	void init$(::javax::swing::text::StyleContext* this$0, $ObjectArray* attr);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::javax::swing::text::StyleContext* this$0 = nullptr;
	$ObjectArray* attr = nullptr;
	int32_t i = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyleContext$KeyEnumeration_h_