#include <com/apple/laf/AquaUtilControlSize$Sizeable.h>

#include <apple/laf/JRSUIConstants$Size.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaUtilControlSize$Sizeable_MethodInfo_[] = {
	{"applySizeFor", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaUtilControlSize$Sizeable_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtilControlSize$Sizeable", "com.apple.laf.AquaUtilControlSize", "Sizeable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtilControlSize$Sizeable_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.AquaUtilControlSize$Sizeable",
	nullptr,
	nullptr,
	nullptr,
	_AquaUtilControlSize$Sizeable_MethodInfo_,
	nullptr,
	nullptr,
	_AquaUtilControlSize$Sizeable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtilControlSize"
};

$Object* allocate$AquaUtilControlSize$Sizeable($Class* clazz) {
	return $of($alloc(AquaUtilControlSize$Sizeable));
}

$Class* AquaUtilControlSize$Sizeable::load$($String* name, bool initialize) {
	$loadClass(AquaUtilControlSize$Sizeable, name, initialize, &_AquaUtilControlSize$Sizeable_ClassInfo_, allocate$AquaUtilControlSize$Sizeable);
	return class$;
}

$Class* AquaUtilControlSize$Sizeable::class$ = nullptr;

		} // laf
	} // apple
} // com