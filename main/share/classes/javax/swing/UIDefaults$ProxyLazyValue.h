#ifndef _javax_swing_UIDefaults$ProxyLazyValue_h_
#define _javax_swing_UIDefaults$ProxyLazyValue_h_
//$ class javax.swing.UIDefaults$ProxyLazyValue
//$ extends javax.swing.UIDefaults$LazyValue

#include <java/lang/Array.h>
#include <javax/swing/UIDefaults$LazyValue.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace javax {
	namespace swing {

class $export UIDefaults$ProxyLazyValue : public ::javax::swing::UIDefaults$LazyValue {
	$class(UIDefaults$ProxyLazyValue, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	UIDefaults$ProxyLazyValue();
	void init$($String* c);
	void init$($String* c, $String* m);
	void init$($String* c, $ObjectArray* o);
	void init$($String* c, $String* m, $ObjectArray* o);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	$ClassArray* getClassArray($ObjectArray* args);
	$String* printArgs($ObjectArray* array);
	::java::security::AccessControlContext* acc = nullptr;
	$String* className = nullptr;
	$String* methodName = nullptr;
	$ObjectArray* args = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_UIDefaults$ProxyLazyValue_h_