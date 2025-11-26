#ifndef _sun_awt_X11_PropMwmHints_h_
#define _sun_awt_X11_PropMwmHints_h_
//$ class sun.awt.X11.PropMwmHints
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

class PropMwmHints : public ::sun::awt::X11::XWrapperBase {
	$class(PropMwmHints, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	PropMwmHints();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_decorations();
	virtual int64_t get_flags();
	virtual int64_t get_functions();
	virtual int64_t get_inputMode();
	virtual int64_t get_status();
	virtual void set_decorations(int64_t v);
	virtual void set_flags(int64_t v);
	virtual void set_functions(int64_t v);
	virtual void set_inputMode(int64_t v);
	virtual void set_status(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_PropMwmHints_h_