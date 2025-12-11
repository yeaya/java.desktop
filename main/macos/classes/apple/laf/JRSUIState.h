#ifndef _apple_laf_JRSUIState_h_
#define _apple_laf_JRSUIState_h_
//$ class apple.laf.JRSUIState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Property;
		class JRSUIConstants$Widget;
		class JRSUIControl;
	}
}

namespace apple {
	namespace laf {

class JRSUIState : public ::java::lang::Object {
	$class(JRSUIState, 0, ::java::lang::Object)
public:
	JRSUIState();
	void init$(::apple::laf::JRSUIConstants$Widget* widget);
	void init$(int64_t encodedState);
	virtual void apply(::apple::laf::JRSUIControl* control);
	virtual ::apple::laf::JRSUIState* createDerivation();
	virtual ::apple::laf::JRSUIState* derive();
	virtual bool equals(Object$* obj) override;
	static ::apple::laf::JRSUIState* getInstance();
	virtual int32_t hashCode() override;
	virtual bool is(::apple::laf::JRSUIConstants$Property* property);
	virtual bool isDerivationSame();
	virtual void reset();
	virtual void set(::apple::laf::JRSUIConstants$Property* property);
	int64_t encodedState = 0;
	int64_t derivedEncodedState = 0;
	static ::apple::laf::JRSUIState* prototype;
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIState_h_