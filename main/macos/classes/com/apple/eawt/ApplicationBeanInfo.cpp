#include <com/apple/eawt/ApplicationBeanInfo.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/beans/SimpleBeanInfo.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $SimpleBeanInfo = ::java::beans::SimpleBeanInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$MethodInfo _ApplicationBeanInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ApplicationBeanInfo::*)()>(&ApplicationBeanInfo::init$))},
	{"getIcon", "(I)Ljava/awt/Image;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ApplicationBeanInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.eawt.ApplicationBeanInfo",
	"java.beans.SimpleBeanInfo",
	nullptr,
	nullptr,
	_ApplicationBeanInfo_MethodInfo_
};

$Object* allocate$ApplicationBeanInfo($Class* clazz) {
	return $of($alloc(ApplicationBeanInfo));
}

void ApplicationBeanInfo::init$() {
	$SimpleBeanInfo::init$();
}

$Image* ApplicationBeanInfo::getIcon(int32_t iconKind) {
	return $nc($($Toolkit::getDefaultToolkit()))->getImage("NSImage://NSGenericApplication"_s);
}

ApplicationBeanInfo::ApplicationBeanInfo() {
}

$Class* ApplicationBeanInfo::load$($String* name, bool initialize) {
	$loadClass(ApplicationBeanInfo, name, initialize, &_ApplicationBeanInfo_ClassInfo_, allocate$ApplicationBeanInfo);
	return class$;
}

$Class* ApplicationBeanInfo::class$ = nullptr;

		} // eawt
	} // apple
} // com