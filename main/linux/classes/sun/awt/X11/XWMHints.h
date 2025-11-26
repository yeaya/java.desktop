#ifndef _sun_awt_X11_XWMHints_h_
#define _sun_awt_X11_XWMHints_h_
//$ class sun.awt.X11.XWMHints
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

class XWMHints : public ::sun::awt::X11::XWrapperBase {
	$class(XWMHints, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XWMHints();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_flags();
	virtual int64_t get_icon_mask();
	virtual int64_t get_icon_pixmap(int32_t index);
	virtual int64_t get_icon_pixmap();
	virtual int64_t get_icon_window();
	virtual int32_t get_icon_x();
	virtual int32_t get_icon_y();
	virtual int32_t get_initial_state();
	virtual bool get_input();
	virtual int64_t get_window_group();
	virtual void set_flags(int64_t v);
	virtual void set_icon_mask(int64_t v);
	virtual void set_icon_pixmap(int64_t v);
	virtual void set_icon_window(int64_t v);
	virtual void set_icon_x(int32_t v);
	virtual void set_icon_y(int32_t v);
	virtual void set_initial_state(int32_t v);
	virtual void set_input(bool v);
	virtual void set_window_group(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XWMHints_h_