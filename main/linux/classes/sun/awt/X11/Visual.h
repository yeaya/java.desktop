#ifndef _sun_awt_X11_Visual_h_
#define _sun_awt_X11_Visual_h_
//$ class sun.awt.X11.Visual
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
			class XExtData;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class Visual : public ::sun::awt::X11::XWrapperBase {
	$class(Visual, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	Visual();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_bits_per_rgb();
	virtual int64_t get_blue_mask();
	virtual int32_t get_class();
	virtual ::sun::awt::X11::XExtData* get_ext_data(int32_t index);
	virtual int64_t get_ext_data();
	virtual int64_t get_green_mask();
	virtual int32_t get_map_entries();
	virtual int64_t get_red_mask();
	virtual int64_t get_visualid();
	virtual void set_bits_per_rgb(int32_t v);
	virtual void set_blue_mask(int64_t v);
	virtual void set_class(int32_t v);
	virtual void set_ext_data(int64_t v);
	virtual void set_green_mask(int64_t v);
	virtual void set_map_entries(int32_t v);
	virtual void set_red_mask(int64_t v);
	virtual void set_visualid(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_Visual_h_