#ifndef _javax_swing_text_StyleContext$KeyBuilder_h_
#define _javax_swing_text_StyleContext$KeyBuilder_h_
//$ class javax.swing.text.StyleContext$KeyBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Enumeration;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class StyleContext;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import StyleContext$KeyBuilder : public ::java::lang::Object {
	$class(StyleContext$KeyBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StyleContext$KeyBuilder();
	void init$(::javax::swing::text::StyleContext* this$0);
	virtual void addAttribute(Object$* key, Object$* value);
	virtual void addAttributes(::javax::swing::text::AttributeSet* attr);
	virtual $ObjectArray* createTable();
	virtual int32_t getCount();
	virtual void initialize(::javax::swing::text::AttributeSet* a);
	void initialize($ObjectArray* sorted);
	virtual void removeAttribute(Object$* key);
	virtual void removeAttributes(::java::util::Enumeration* names);
	virtual void removeAttributes(::javax::swing::text::AttributeSet* attr);
	void removeSearchAttribute(Object$* ikey, Object$* value);
	::javax::swing::text::StyleContext* this$0 = nullptr;
	::java::util::Vector* keys = nullptr;
	::java::util::Vector* data = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyleContext$KeyBuilder_h_