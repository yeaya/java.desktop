#ifndef _javax_swing_text_rtf_MockAttributeSet_h_
#define _javax_swing_text_rtf_MockAttributeSet_h_
//$ class javax.swing.text.rtf.MockAttributeSet
//$ extends javax.swing.text.MutableAttributeSet

#include <javax/swing/text/MutableAttributeSet.h>

namespace java {
	namespace util {
		class Dictionary;
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
			namespace rtf {

class MockAttributeSet : public ::javax::swing::text::MutableAttributeSet {
	$class(MockAttributeSet, $NO_CLASS_INIT, ::javax::swing::text::MutableAttributeSet)
public:
	MockAttributeSet();
	void init$();
	virtual void addAttribute(Object$* name, Object$* value) override;
	virtual void addAttributes(::javax::swing::text::AttributeSet* attr) override;
	virtual bool containsAttribute(Object$* name, Object$* value) override;
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attr) override;
	virtual ::javax::swing::text::AttributeSet* copyAttributes() override;
	virtual $Object* getAttribute(Object$* name) override;
	virtual int32_t getAttributeCount() override;
	virtual ::java::util::Enumeration* getAttributeNames() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	virtual bool isDefined(Object$* name) override;
	virtual bool isEmpty();
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) override;
	virtual void removeAttribute(Object$* name) override;
	virtual void removeAttributes(::javax::swing::text::AttributeSet* attr) override;
	virtual void removeAttributes(::java::util::Enumeration* en) override;
	virtual void setResolveParent(::javax::swing::text::AttributeSet* pp) override;
	::java::util::Dictionary* backing = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_MockAttributeSet_h_