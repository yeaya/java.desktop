#include <apple/laf/JRSUIUtils$Images.h>

#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$MethodInfo _JRSUIUtils$Images_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIUtils$Images::*)()>(&JRSUIUtils$Images::init$))},
	{"shouldUseLegacySecurityUIPath", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JRSUIUtils$Images::shouldUseLegacySecurityUIPath))},
	{}
};

$InnerClassInfo _JRSUIUtils$Images_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIUtils$Images", "apple.laf.JRSUIUtils", "Images", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIUtils$Images_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIUtils$Images",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JRSUIUtils$Images_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIUtils$Images_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIUtils"
};

$Object* allocate$JRSUIUtils$Images($Class* clazz) {
	return $of($alloc(JRSUIUtils$Images));
}

void JRSUIUtils$Images::init$() {
}

bool JRSUIUtils$Images::shouldUseLegacySecurityUIPath() {
	$init($JRSUIUtils);
	return $JRSUIUtils::isSnowLeopardOrBelow;
}

JRSUIUtils$Images::JRSUIUtils$Images() {
}

$Class* JRSUIUtils$Images::load$($String* name, bool initialize) {
	$loadClass(JRSUIUtils$Images, name, initialize, &_JRSUIUtils$Images_ClassInfo_, allocate$JRSUIUtils$Images);
	return class$;
}

$Class* JRSUIUtils$Images::class$ = nullptr;

	} // laf
} // apple