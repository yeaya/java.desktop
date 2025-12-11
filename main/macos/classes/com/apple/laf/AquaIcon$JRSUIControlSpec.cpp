#include <com/apple/laf/AquaIcon$JRSUIControlSpec.h>

#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaIcon$JRSUIControlSpec_MethodInfo_[] = {
	{"initIconPainter", "(Lcom/apple/laf/AquaPainter;)V", "(Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaIcon$JRSUIControlSpec_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$JRSUIControlSpec", "com.apple.laf.AquaIcon", "JRSUIControlSpec", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaIcon$JRSUIControlSpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.apple.laf.AquaIcon$JRSUIControlSpec",
	nullptr,
	nullptr,
	nullptr,
	_AquaIcon$JRSUIControlSpec_MethodInfo_,
	nullptr,
	nullptr,
	_AquaIcon$JRSUIControlSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$JRSUIControlSpec($Class* clazz) {
	return $of($alloc(AquaIcon$JRSUIControlSpec));
}

$Class* AquaIcon$JRSUIControlSpec::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$JRSUIControlSpec, name, initialize, &_AquaIcon$JRSUIControlSpec_ClassInfo_, allocate$AquaIcon$JRSUIControlSpec);
	return class$;
}

$Class* AquaIcon$JRSUIControlSpec::class$ = nullptr;

		} // laf
	} // apple
} // com