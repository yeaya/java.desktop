#ifndef _sun_awt_X11_XWrapperBase_h_
#define _sun_awt_X11_XWrapperBase_h_
//$ class sun.awt.X11.XWrapperBase
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWrapperBase : public ::java::lang::Object {
	$class(XWrapperBase, 0, ::java::lang::Object)
public:
	XWrapperBase();
	void init$();
	virtual $Object* clone() override;
	virtual int32_t getDataSize() {return 0;}
	virtual $String* getFieldsAsString();
	virtual $String* getName();
	virtual int64_t getPData() {return 0;}
	virtual $String* getWindow(int64_t window);
	virtual $String* toString() override;
	virtual void zero();
	static ::sun::util::logging::PlatformLogger* log;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XWrapperBase_h_