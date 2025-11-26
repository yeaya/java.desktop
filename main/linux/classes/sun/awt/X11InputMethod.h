#ifndef _sun_awt_X11InputMethod_h_
#define _sun_awt_X11InputMethod_h_
//$ class sun.awt.X11InputMethod
//$ extends sun.awt.X11InputMethodBase

#include <java/lang/Array.h>
#include <sun/awt/X11InputMethodBase.h>

namespace sun {
	namespace awt {

class $export X11InputMethod : public ::sun::awt::X11InputMethodBase {
	$class(X11InputMethod, $NO_CLASS_INIT, ::sun::awt::X11InputMethodBase)
public:
	X11InputMethod();
	void init$();
	virtual void activate() override;
	virtual void deactivate(bool isTemporary) override;
	virtual void dispatchComposedText($String* chgText, $ints* chgStyles, int32_t chgOffset, int32_t chgLength, int32_t caretPosition, int64_t when) override;
	virtual void disposeImpl() override;
	virtual void hideWindows() override;
	virtual void resetCompositionState() override;
	virtual void setCompositionEnabled(bool enable) override;
};

	} // awt
} // sun

#endif // _sun_awt_X11InputMethod_h_