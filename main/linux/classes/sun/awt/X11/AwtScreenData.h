#ifndef _sun_awt_X11_AwtScreenData_h_
#define _sun_awt_X11_AwtScreenData_h_
//$ class sun.awt.X11.AwtScreenData
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
			class AwtGraphicsConfigData;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class AwtScreenData : public ::sun::awt::X11::XWrapperBase {
	$class(AwtScreenData, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	AwtScreenData();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_blackpixel();
	virtual int64_t get_configs(int32_t index);
	virtual int64_t get_configs();
	virtual ::sun::awt::X11::AwtGraphicsConfigData* get_defaultConfig(int32_t index);
	virtual int64_t get_defaultConfig();
	virtual int32_t get_numConfigs();
	virtual int64_t get_root();
	virtual int64_t get_whitepixel();
	virtual void set_blackpixel(int64_t v);
	virtual void set_configs(int64_t v);
	virtual void set_defaultConfig(int64_t v);
	virtual void set_numConfigs(int32_t v);
	virtual void set_root(int64_t v);
	virtual void set_whitepixel(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_AwtScreenData_h_