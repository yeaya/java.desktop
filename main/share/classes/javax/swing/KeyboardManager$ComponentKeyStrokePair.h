#ifndef _javax_swing_KeyboardManager$ComponentKeyStrokePair_h_
#define _javax_swing_KeyboardManager$ComponentKeyStrokePair_h_
//$ class javax.swing.KeyboardManager$ComponentKeyStrokePair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class KeyboardManager;
	}
}

namespace javax {
	namespace swing {

class KeyboardManager$ComponentKeyStrokePair : public ::java::lang::Object {
	$class(KeyboardManager$ComponentKeyStrokePair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyboardManager$ComponentKeyStrokePair();
	void init$(::javax::swing::KeyboardManager* this$0, Object$* comp, Object$* key);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	::javax::swing::KeyboardManager* this$0 = nullptr;
	$Object* component = nullptr;
	$Object* keyStroke = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_KeyboardManager$ComponentKeyStrokePair_h_