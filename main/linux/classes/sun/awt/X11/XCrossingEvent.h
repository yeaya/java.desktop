#ifndef _sun_awt_X11_XCrossingEvent_h_
#define _sun_awt_X11_XCrossingEvent_h_
//$ class sun.awt.X11.XCrossingEvent
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

class XCrossingEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XCrossingEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XCrossingEvent();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_detail();
	virtual int64_t get_display();
	virtual bool get_focus();
	virtual int32_t get_mode();
	virtual int64_t get_root();
	virtual bool get_same_screen();
	virtual bool get_send_event();
	virtual int64_t get_serial();
	virtual int32_t get_state();
	virtual int64_t get_subwindow();
	virtual int64_t get_time();
	virtual int32_t get_type();
	virtual int64_t get_window();
	virtual int32_t get_x();
	virtual int32_t get_x_root();
	virtual int32_t get_y();
	virtual int32_t get_y_root();
	virtual void set_detail(int32_t v);
	virtual void set_display(int64_t v);
	virtual void set_focus(bool v);
	virtual void set_mode(int32_t v);
	virtual void set_root(int64_t v);
	virtual void set_same_screen(bool v);
	virtual void set_send_event(bool v);
	virtual void set_serial(int64_t v);
	virtual void set_state(int32_t v);
	virtual void set_subwindow(int64_t v);
	virtual void set_time(int64_t v);
	virtual void set_type(int32_t v);
	virtual void set_window(int64_t v);
	virtual void set_x(int32_t v);
	virtual void set_x_root(int32_t v);
	virtual void set_y(int32_t v);
	virtual void set_y_root(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XCrossingEvent_h_