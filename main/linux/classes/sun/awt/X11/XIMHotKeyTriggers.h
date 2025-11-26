#ifndef _sun_awt_X11_XIMHotKeyTriggers_h_
#define _sun_awt_X11_XIMHotKeyTriggers_h_
//$ class sun.awt.X11.XIMHotKeyTriggers
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
			class XIMHotKeyTrigger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XIMHotKeyTriggers : public ::sun::awt::X11::XWrapperBase {
	$class(XIMHotKeyTriggers, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XIMHotKeyTriggers();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual ::sun::awt::X11::XIMHotKeyTrigger* get_key(int32_t index);
	virtual int64_t get_key();
	virtual int32_t get_num_hot_key();
	virtual void set_key(int64_t v);
	virtual void set_num_hot_key(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XIMHotKeyTriggers_h_