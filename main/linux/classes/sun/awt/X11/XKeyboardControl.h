#ifndef _sun_awt_X11_XKeyboardControl_h_
#define _sun_awt_X11_XKeyboardControl_h_
//$ class sun.awt.X11.XKeyboardControl
//$ extends sun.awt.X11.XWrapperBase

#include <sun/awt/X11/XWrapperBase.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XKeyboardControl : public ::sun::awt::X11::XWrapperBase {
	$class(XKeyboardControl, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XKeyboardControl();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_auto_repeat_mode();
	virtual int32_t get_bell_duration();
	virtual int32_t get_bell_percent();
	virtual int32_t get_bell_pitch();
	virtual int32_t get_key();
	virtual int32_t get_key_click_percent();
	virtual int32_t get_led();
	virtual int32_t get_led_mode();
	virtual void set_auto_repeat_mode(int32_t v);
	virtual void set_bell_duration(int32_t v);
	virtual void set_bell_percent(int32_t v);
	virtual void set_bell_pitch(int32_t v);
	virtual void set_key(int32_t v);
	virtual void set_key_click_percent(int32_t v);
	virtual void set_led(int32_t v);
	virtual void set_led_mode(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XKeyboardControl_h_