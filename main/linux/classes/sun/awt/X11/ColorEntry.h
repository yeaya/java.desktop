#ifndef _sun_awt_X11_ColorEntry_h_
#define _sun_awt_X11_ColorEntry_h_
//$ class sun.awt.X11.ColorEntry
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

class ColorEntry : public ::sun::awt::X11::XWrapperBase {
	$class(ColorEntry, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	ColorEntry();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int8_t get_b();
	virtual int8_t get_flags();
	virtual int8_t get_g();
	virtual int8_t get_r();
	virtual void set_b(int8_t v);
	virtual void set_flags(int8_t v);
	virtual void set_g(int8_t v);
	virtual void set_r(int8_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_ColorEntry_h_