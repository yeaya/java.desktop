#ifndef _javax_imageio_IIOParamController_h_
#define _javax_imageio_IIOParamController_h_
//$ interface javax.imageio.IIOParamController
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace imageio {
		class IIOParam;
	}
}

namespace javax {
	namespace imageio {

class $export IIOParamController : public ::java::lang::Object {
	$interface(IIOParamController, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool activate(::javax::imageio::IIOParam* param) {return false;}
};

	} // imageio
} // javax

#endif // _javax_imageio_IIOParamController_h_