#ifndef _javax_swing_text_PlainView$FPMethodItem_h_
#define _javax_swing_text_PlainView$FPMethodItem_h_
//$ class javax.swing.text.PlainView$FPMethodItem
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {

class PlainView$FPMethodItem : public ::java::lang::Object {
	$class(PlainView$FPMethodItem, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PlainView$FPMethodItem();
	void init$($Class* className, $String* methodName);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	$Class* className = nullptr;
	$String* methodName = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_PlainView$FPMethodItem_h_