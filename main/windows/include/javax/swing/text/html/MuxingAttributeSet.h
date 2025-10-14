#ifndef _javax_swing_text_html_MuxingAttributeSet_h_
#define _javax_swing_text_html_MuxingAttributeSet_h_
//$ class javax.swing.text.html.MuxingAttributeSet
//$ extends javax.swing.text.AttributeSet
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/text/AttributeSet.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import MuxingAttributeSet : public ::javax::swing::text::AttributeSet, public ::java::io::Serializable {
	$class(MuxingAttributeSet, $NO_CLASS_INIT, ::javax::swing::text::AttributeSet, ::java::io::Serializable)
public:
	MuxingAttributeSet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Array<::javax::swing::text::AttributeSet>* attrs);
	void init$();
	virtual bool containsAttribute(Object$* name, Object$* value) override;
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attrs) override;
	virtual ::javax::swing::text::AttributeSet* copyAttributes() override;
	virtual $Object* getAttribute(Object$* key) override;
	virtual int32_t getAttributeCount() override;
	virtual ::java::util::Enumeration* getAttributeNames() override;
	virtual $Array<::javax::swing::text::AttributeSet>* getAttributes();
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	virtual void insertAttributeSetAt(::javax::swing::text::AttributeSet* as, int32_t index);
	virtual bool isDefined(Object$* key) override;
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) override;
	virtual void removeAttributeSetAt(int32_t index);
	virtual void setAttributes($Array<::javax::swing::text::AttributeSet>* attrs);
	virtual $String* toString() override;
	$Array<::javax::swing::text::AttributeSet>* attrs = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_MuxingAttributeSet_h_