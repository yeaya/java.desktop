#ifndef _javax_swing_text_DefaultStyledDocument$ElementBuffer$ElemChanges_h_
#define _javax_swing_text_DefaultStyledDocument$ElementBuffer$ElemChanges_h_
//$ class javax.swing.text.DefaultStyledDocument$ElementBuffer$ElemChanges
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultStyledDocument$ElementBuffer;
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultStyledDocument$ElementBuffer$ElemChanges : public ::java::lang::Object {
	$class(DefaultStyledDocument$ElementBuffer$ElemChanges, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultStyledDocument$ElementBuffer$ElemChanges();
	void init$(::javax::swing::text::DefaultStyledDocument$ElementBuffer* this$1, ::javax::swing::text::Element* parent, int32_t index, bool isFracture);
	virtual $String* toString() override;
	::javax::swing::text::DefaultStyledDocument$ElementBuffer* this$1 = nullptr;
	::javax::swing::text::Element* parent = nullptr;
	int32_t index = 0;
	::java::util::Vector* added = nullptr;
	::java::util::Vector* removed = nullptr;
	bool isFracture = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$ElementBuffer$ElemChanges_h_