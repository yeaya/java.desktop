#ifndef _sun_awt_X11_XIMPreeditStateNotifyCallbackStruct_h_
#define _sun_awt_X11_XIMPreeditStateNotifyCallbackStruct_h_
//$ class sun.awt.X11.XIMPreeditStateNotifyCallbackStruct
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

class XIMPreeditStateNotifyCallbackStruct : public ::sun::awt::X11::XWrapperBase {
	$class(XIMPreeditStateNotifyCallbackStruct, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XIMPreeditStateNotifyCallbackStruct();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_state();
	virtual void set_state(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XIMPreeditStateNotifyCallbackStruct_h_