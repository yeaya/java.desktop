#include <apple/laf/JRSUIUtils$Tree.h>

#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$MethodInfo _JRSUIUtils$Tree_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIUtils$Tree::*)()>(&JRSUIUtils$Tree::init$))},
	{"useLegacyTreeKnobs", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JRSUIUtils$Tree::useLegacyTreeKnobs))},
	{}
};

$InnerClassInfo _JRSUIUtils$Tree_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIUtils$Tree", "apple.laf.JRSUIUtils", "Tree", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIUtils$Tree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIUtils$Tree",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JRSUIUtils$Tree_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIUtils$Tree_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIUtils"
};

$Object* allocate$JRSUIUtils$Tree($Class* clazz) {
	return $of($alloc(JRSUIUtils$Tree));
}

void JRSUIUtils$Tree::init$() {
}

bool JRSUIUtils$Tree::useLegacyTreeKnobs() {
	$init($JRSUIUtils);
	return $JRSUIUtils::isLeopard;
}

JRSUIUtils$Tree::JRSUIUtils$Tree() {
}

$Class* JRSUIUtils$Tree::load$($String* name, bool initialize) {
	$loadClass(JRSUIUtils$Tree, name, initialize, &_JRSUIUtils$Tree_ClassInfo_, allocate$JRSUIUtils$Tree);
	return class$;
}

$Class* JRSUIUtils$Tree::class$ = nullptr;

	} // laf
} // apple