#ifndef _javax_swing_text_SimpleAttributeSet$EmptyAttributeSet_h_
#define _javax_swing_text_SimpleAttributeSet$EmptyAttributeSet_h_
//$ class javax.swing.text.SimpleAttributeSet$EmptyAttributeSet
//$ extends javax.swing.text.AttributeSet
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/text/AttributeSet.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export SimpleAttributeSet$EmptyAttributeSet : public ::javax::swing::text::AttributeSet, public ::java::io::Serializable {
	$class(SimpleAttributeSet$EmptyAttributeSet, $NO_CLASS_INIT, ::javax::swing::text::AttributeSet, ::java::io::Serializable)
public:
	SimpleAttributeSet$EmptyAttributeSet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	virtual bool containsAttribute(Object$* name, Object$* value) override;
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attributes) override;
	virtual ::javax::swing::text::AttributeSet* copyAttributes() override;
	virtual bool equals(Object$* obj) override;
	virtual $Object* getAttribute(Object$* key) override;
	virtual int32_t getAttributeCount() override;
	virtual ::java::util::Enumeration* getAttributeNames() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	virtual int32_t hashCode() override;
	virtual bool isDefined(Object$* attrName) override;
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x870ECC53C335AD9C;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_SimpleAttributeSet$EmptyAttributeSet_h_