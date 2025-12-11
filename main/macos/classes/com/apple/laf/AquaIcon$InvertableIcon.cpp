#include <com/apple/laf/AquaIcon$InvertableIcon.h>

#include <com/apple/laf/AquaIcon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaIcon$InvertableIcon_MethodInfo_[] = {
	{"getInvertedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaIcon$InvertableIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$InvertableIcon", "com.apple.laf.AquaIcon", "InvertableIcon", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaIcon$InvertableIcon_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.AquaIcon$InvertableIcon",
	nullptr,
	"javax.swing.Icon",
	nullptr,
	_AquaIcon$InvertableIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaIcon$InvertableIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$InvertableIcon($Class* clazz) {
	return $of($alloc(AquaIcon$InvertableIcon));
}

$Class* AquaIcon$InvertableIcon::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$InvertableIcon, name, initialize, &_AquaIcon$InvertableIcon_ClassInfo_, allocate$AquaIcon$InvertableIcon);
	return class$;
}

$Class* AquaIcon$InvertableIcon::class$ = nullptr;

		} // laf
	} // apple
} // com