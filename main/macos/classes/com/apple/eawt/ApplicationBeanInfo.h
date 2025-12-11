#ifndef _com_apple_eawt_ApplicationBeanInfo_h_
#define _com_apple_eawt_ApplicationBeanInfo_h_
//$ class com.apple.eawt.ApplicationBeanInfo
//$ extends java.beans.SimpleBeanInfo

#include <java/beans/SimpleBeanInfo.h>

namespace java {
	namespace awt {
		class Image;
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class ApplicationBeanInfo : public ::java::beans::SimpleBeanInfo {
	$class(ApplicationBeanInfo, $NO_CLASS_INIT, ::java::beans::SimpleBeanInfo)
public:
	ApplicationBeanInfo();
	void init$();
	virtual ::java::awt::Image* getIcon(int32_t iconKind) override;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_ApplicationBeanInfo_h_