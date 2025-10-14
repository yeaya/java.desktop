#ifndef _sun_awt_SunHints$Key_h_
#define _sun_awt_SunHints$Key_h_
//$ class sun.awt.SunHints$Key
//$ extends java.awt.RenderingHints$Key

#include <java/awt/RenderingHints$Key.h>

namespace sun {
	namespace awt {

class $import SunHints$Key : public ::java::awt::RenderingHints$Key {
	$class(SunHints$Key, $NO_CLASS_INIT, ::java::awt::RenderingHints$Key)
public:
	SunHints$Key();
	void init$(int32_t privatekey, $String* description);
	int32_t getIndex();
	virtual bool isCompatibleValue(Object$* val) override;
	virtual $String* toString() override;
	$String* description = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_SunHints$Key_h_