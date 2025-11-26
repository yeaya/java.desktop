#ifndef _sun_awt_X11_XModifierKeymap_h_
#define _sun_awt_X11_XModifierKeymap_h_
//$ class sun.awt.X11.XModifierKeymap
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

class XModifierKeymap : public ::sun::awt::X11::XWrapperBase {
	$class(XModifierKeymap, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XModifierKeymap();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_max_keypermod();
	virtual int64_t get_modifiermap(int32_t index);
	virtual int64_t get_modifiermap();
	virtual void set_max_keypermod(int32_t v);
	virtual void set_modifiermap(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XModifierKeymap_h_