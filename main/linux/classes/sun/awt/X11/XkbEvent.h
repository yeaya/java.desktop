#ifndef _sun_awt_X11_XkbEvent_h_
#define _sun_awt_X11_XkbEvent_h_
//$ class sun.awt.X11.XkbEvent
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
			class XEvent;
			class XkbAccessXNotifyEvent;
			class XkbActionMessageEvent;
			class XkbAnyEvent;
			class XkbBellNotifyEvent;
			class XkbCompatMapNotifyEvent;
			class XkbControlsNotifyEvent;
			class XkbExtensionDeviceNotifyEvent;
			class XkbIndicatorNotifyEvent;
			class XkbMapNotifyEvent;
			class XkbNamesNotifyEvent;
			class XkbNewKeyboardNotifyEvent;
			class XkbStateNotifyEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XkbEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XkbEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XkbEvent();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual ::sun::awt::X11::XkbAccessXNotifyEvent* get_accessx();
	virtual ::sun::awt::X11::XkbAnyEvent* get_any();
	virtual ::sun::awt::X11::XkbBellNotifyEvent* get_bell();
	virtual ::sun::awt::X11::XkbCompatMapNotifyEvent* get_compat();
	virtual ::sun::awt::X11::XEvent* get_core();
	virtual ::sun::awt::X11::XkbControlsNotifyEvent* get_ctrls();
	virtual ::sun::awt::X11::XkbExtensionDeviceNotifyEvent* get_device();
	virtual ::sun::awt::X11::XkbIndicatorNotifyEvent* get_indicators();
	virtual ::sun::awt::X11::XkbMapNotifyEvent* get_map();
	virtual ::sun::awt::X11::XkbActionMessageEvent* get_message();
	virtual ::sun::awt::X11::XkbNamesNotifyEvent* get_names();
	virtual ::sun::awt::X11::XkbNewKeyboardNotifyEvent* get_new_kbd();
	virtual ::sun::awt::X11::XkbStateNotifyEvent* get_state();
	virtual int32_t get_type();
	virtual void set_type(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XkbEvent_h_