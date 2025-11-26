#ifndef _sun_awt_X11_XKeyboardState_h_
#define _sun_awt_X11_XKeyboardState_h_
//$ class sun.awt.X11.XKeyboardState
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

class XKeyboardState : public ::sun::awt::X11::XWrapperBase {
	$class(XKeyboardState, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XKeyboardState();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int8_t get_auto_repeats(int32_t index);
	virtual int64_t get_auto_repeats();
	virtual int32_t get_bell_duration();
	virtual int32_t get_bell_percent();
	virtual int32_t get_bell_pitch();
	virtual int32_t get_global_auto_repeat();
	virtual int32_t get_key_click_percent();
	virtual int64_t get_led_mask();
	virtual void set_auto_repeats(int32_t index, int8_t v);
	virtual void set_bell_duration(int32_t v);
	virtual void set_bell_percent(int32_t v);
	virtual void set_bell_pitch(int32_t v);
	virtual void set_global_auto_repeat(int32_t v);
	virtual void set_key_click_percent(int32_t v);
	virtual void set_led_mask(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XKeyboardState_h_