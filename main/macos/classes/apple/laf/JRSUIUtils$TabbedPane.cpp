#include <apple/laf/JRSUIUtils$TabbedPane.h>

#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$MethodInfo _JRSUIUtils$TabbedPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIUtils$TabbedPane::*)()>(&JRSUIUtils$TabbedPane::init$))},
	{"shouldUseTabbedPaneContrastUI", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JRSUIUtils$TabbedPane::shouldUseTabbedPaneContrastUI))},
	{"useLegacyTabs", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JRSUIUtils$TabbedPane::useLegacyTabs))},
	{}
};

$InnerClassInfo _JRSUIUtils$TabbedPane_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIUtils$TabbedPane", "apple.laf.JRSUIUtils", "TabbedPane", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIUtils$TabbedPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIUtils$TabbedPane",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JRSUIUtils$TabbedPane_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIUtils$TabbedPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIUtils"
};

$Object* allocate$JRSUIUtils$TabbedPane($Class* clazz) {
	return $of($alloc(JRSUIUtils$TabbedPane));
}

void JRSUIUtils$TabbedPane::init$() {
}

bool JRSUIUtils$TabbedPane::useLegacyTabs() {
	$init($JRSUIUtils);
	return $JRSUIUtils::isLeopard;
}

bool JRSUIUtils$TabbedPane::shouldUseTabbedPaneContrastUI() {
	$init($JRSUIUtils);
	return !$JRSUIUtils::isSnowLeopardOrBelow;
}

JRSUIUtils$TabbedPane::JRSUIUtils$TabbedPane() {
}

$Class* JRSUIUtils$TabbedPane::load$($String* name, bool initialize) {
	$loadClass(JRSUIUtils$TabbedPane, name, initialize, &_JRSUIUtils$TabbedPane_ClassInfo_, allocate$JRSUIUtils$TabbedPane);
	return class$;
}

$Class* JRSUIUtils$TabbedPane::class$ = nullptr;

	} // laf
} // apple