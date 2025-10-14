#ifndef _javax_swing_text_AbstractDocument$AttributeContext_h_
#define _javax_swing_text_AbstractDocument$AttributeContext_h_
//$ interface javax.swing.text.AbstractDocument$AttributeContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AbstractDocument$AttributeContext : public ::java::lang::Object {
	$interface(AbstractDocument$AttributeContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::text::AttributeSet* addAttribute(::javax::swing::text::AttributeSet* old, Object$* name, Object$* value) {return nullptr;}
	virtual ::javax::swing::text::AttributeSet* addAttributes(::javax::swing::text::AttributeSet* old, ::javax::swing::text::AttributeSet* attr) {return nullptr;}
	virtual ::javax::swing::text::AttributeSet* getEmptySet() {return nullptr;}
	virtual void reclaim(::javax::swing::text::AttributeSet* a) {}
	virtual ::javax::swing::text::AttributeSet* removeAttribute(::javax::swing::text::AttributeSet* old, Object$* name) {return nullptr;}
	virtual ::javax::swing::text::AttributeSet* removeAttributes(::javax::swing::text::AttributeSet* old, ::java::util::Enumeration* names) {return nullptr;}
	virtual ::javax::swing::text::AttributeSet* removeAttributes(::javax::swing::text::AttributeSet* old, ::javax::swing::text::AttributeSet* attrs) {return nullptr;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$AttributeContext_h_