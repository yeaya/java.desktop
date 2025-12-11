#include <apple/laf/JRSUIUtils$InternalFrame.h>

#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$MethodInfo _JRSUIUtils$InternalFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIUtils$InternalFrame::*)()>(&JRSUIUtils$InternalFrame::init$))},
	{"shouldUseLegacyBorderMetrics", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JRSUIUtils$InternalFrame::shouldUseLegacyBorderMetrics))},
	{}
};

$InnerClassInfo _JRSUIUtils$InternalFrame_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIUtils$InternalFrame", "apple.laf.JRSUIUtils", "InternalFrame", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIUtils$InternalFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIUtils$InternalFrame",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JRSUIUtils$InternalFrame_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIUtils$InternalFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIUtils"
};

$Object* allocate$JRSUIUtils$InternalFrame($Class* clazz) {
	return $of($alloc(JRSUIUtils$InternalFrame));
}

void JRSUIUtils$InternalFrame::init$() {
}

bool JRSUIUtils$InternalFrame::shouldUseLegacyBorderMetrics() {
	$init($JRSUIUtils);
	return $JRSUIUtils::isSnowLeopardOrBelow;
}

JRSUIUtils$InternalFrame::JRSUIUtils$InternalFrame() {
}

$Class* JRSUIUtils$InternalFrame::load$($String* name, bool initialize) {
	$loadClass(JRSUIUtils$InternalFrame, name, initialize, &_JRSUIUtils$InternalFrame_ClassInfo_, allocate$JRSUIUtils$InternalFrame);
	return class$;
}

$Class* JRSUIUtils$InternalFrame::class$ = nullptr;

	} // laf
} // apple