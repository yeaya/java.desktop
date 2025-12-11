#include <com/apple/laf/AquaUtils$Selectable.h>

#include <com/apple/laf/AquaUtils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaUtils$Selectable_MethodInfo_[] = {
	{"paintSelected", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaUtils$Selectable_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$Selectable", "com.apple.laf.AquaUtils", "Selectable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$Selectable_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.AquaUtils$Selectable",
	nullptr,
	nullptr,
	nullptr,
	_AquaUtils$Selectable_MethodInfo_,
	nullptr,
	nullptr,
	_AquaUtils$Selectable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$Selectable($Class* clazz) {
	return $of($alloc(AquaUtils$Selectable));
}

$Class* AquaUtils$Selectable::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$Selectable, name, initialize, &_AquaUtils$Selectable_ClassInfo_, allocate$AquaUtils$Selectable);
	return class$;
}

$Class* AquaUtils$Selectable::class$ = nullptr;

		} // laf
	} // apple
} // com