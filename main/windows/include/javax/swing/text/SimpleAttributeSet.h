#ifndef _javax_swing_text_SimpleAttributeSet_h_
#define _javax_swing_text_SimpleAttributeSet_h_
//$ class javax.swing.text.SimpleAttributeSet
//$ extends javax.swing.text.MutableAttributeSet
//$ implements java.io.Serializable,java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>
#include <javax/swing/text/MutableAttributeSet.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class LinkedHashMap;
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

class $import SimpleAttributeSet : public ::javax::swing::text::MutableAttributeSet, public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(SimpleAttributeSet, 0, ::javax::swing::text::MutableAttributeSet, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	SimpleAttributeSet();
	virtual void finalize() override;
	void init$();
	void init$(::javax::swing::text::AttributeSet* source);
	virtual void addAttribute(Object$* name, Object$* value) override;
	virtual void addAttributes(::javax::swing::text::AttributeSet* attributes) override;
	virtual $Object* clone() override;
	virtual bool containsAttribute(Object$* name, Object$* value) override;
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attributes) override;
	virtual ::javax::swing::text::AttributeSet* copyAttributes() override;
	virtual bool equals(Object$* obj) override;
	virtual $Object* getAttribute(Object$* name) override;
	virtual int32_t getAttributeCount() override;
	virtual ::java::util::Enumeration* getAttributeNames() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	virtual int32_t hashCode() override;
	virtual bool isDefined(Object$* attrName) override;
	virtual bool isEmpty();
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeAttribute(Object$* name) override;
	virtual void removeAttributes(::java::util::Enumeration* names) override;
	virtual void removeAttributes(::javax::swing::text::AttributeSet* attributes) override;
	virtual void setResolveParent(::javax::swing::text::AttributeSet* parent) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xA3F7FD44B6E3C304;
	static ::javax::swing::text::AttributeSet* EMPTY;
	::java::util::LinkedHashMap* table = nullptr;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("EMPTY")

#endif // _javax_swing_text_SimpleAttributeSet_h_