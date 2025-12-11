#include <com/apple/laf/AquaTextFieldSearch$2.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon.h>
#include <com/apple/laf/AquaIcon$JRSUIIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <jcpp.h>

#undef BUTTON_SEARCH_FIELD_FIND

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaIcon$DynamicallySizingJRSUIIcon = ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaTextFieldSearch$2_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, 0, $method(static_cast<void(AquaTextFieldSearch$2::*)($AquaUtilControlSize$SizeDescriptor*)>(&AquaTextFieldSearch$2::init$))},
	{"initJRSUIState", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch",
	"getFindIcon",
	"(Ljavax/swing/text/JTextComponent;)Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;"
};

$InnerClassInfo _AquaTextFieldSearch$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon", "com.apple.laf.AquaIcon", "DynamicallySizingJRSUIIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaTextFieldSearch$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$2",
	"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon",
	nullptr,
	nullptr,
	_AquaTextFieldSearch$2_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$2_EnclosingMethodInfo_,
	_AquaTextFieldSearch$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$2($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$2));
}

void AquaTextFieldSearch$2::init$($AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaIcon$DynamicallySizingJRSUIIcon::init$(sizeDescriptor);
}

void AquaTextFieldSearch$2::initJRSUIState() {
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_SEARCH_FIELD_FIND);
}

AquaTextFieldSearch$2::AquaTextFieldSearch$2() {
}

$Class* AquaTextFieldSearch$2::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$2, name, initialize, &_AquaTextFieldSearch$2_ClassInfo_, allocate$AquaTextFieldSearch$2);
	return class$;
}

$Class* AquaTextFieldSearch$2::class$ = nullptr;

		} // laf
	} // apple
} // com