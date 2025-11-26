#ifndef _javax_swing_text_AttributeSet_h_
#define _javax_swing_text_AttributeSet_h_
//$ interface javax.swing.text.AttributeSet
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

class $import AttributeSet : public ::java::lang::Object {
	$interface(AttributeSet, 0, ::java::lang::Object)
public:
	virtual bool containsAttribute(Object$* name, Object$* value) {return false;}
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attributes) {return false;}
	virtual ::javax::swing::text::AttributeSet* copyAttributes() {return nullptr;}
	virtual $Object* getAttribute(Object$* key) {return nullptr;}
	virtual int32_t getAttributeCount() {return 0;}
	virtual ::java::util::Enumeration* getAttributeNames() {return nullptr;}
	virtual ::javax::swing::text::AttributeSet* getResolveParent() {return nullptr;}
	virtual bool isDefined(Object$* attrName) {return false;}
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) {return false;}
	static $Object* NameAttribute;
	static $Object* ResolveAttribute;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AttributeSet_h_