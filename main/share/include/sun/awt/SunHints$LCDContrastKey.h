#ifndef _sun_awt_SunHints$LCDContrastKey_h_
#define _sun_awt_SunHints$LCDContrastKey_h_
//$ class sun.awt.SunHints$LCDContrastKey
//$ extends sun.awt.SunHints$Key

#include <sun/awt/SunHints$Key.h>

namespace sun {
	namespace awt {

class $import SunHints$LCDContrastKey : public ::sun::awt::SunHints$Key {
	$class(SunHints$LCDContrastKey, $NO_CLASS_INIT, ::sun::awt::SunHints$Key)
public:
	SunHints$LCDContrastKey();
	void init$(int32_t privatekey, $String* description);
	virtual bool isCompatibleValue(Object$* val) override;
};

	} // awt
} // sun

#endif // _sun_awt_SunHints$LCDContrastKey_h_