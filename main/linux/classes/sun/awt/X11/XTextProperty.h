#ifndef _sun_awt_X11_XTextProperty_h_
#define _sun_awt_X11_XTextProperty_h_
//$ class sun.awt.X11.XTextProperty
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

class XTextProperty : public ::sun::awt::X11::XWrapperBase {
	$class(XTextProperty, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XTextProperty();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_encoding();
	virtual int32_t get_format();
	virtual int64_t get_nitems();
	virtual int8_t get_value(int32_t index);
	virtual int64_t get_value();
	virtual void set_encoding(int64_t v);
	virtual void set_format(int32_t v);
	virtual void set_nitems(int64_t v);
	virtual void set_value(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextProperty_h_