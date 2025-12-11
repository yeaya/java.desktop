#include <com/apple/laf/AquaTabbedPaneUI$1.h>

#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Image.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $AquaIcon = ::com::apple::laf::AquaIcon;
using $AquaIcon$CachingScalingIcon = ::com::apple::laf::AquaIcon$CachingScalingIcon;
using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$1, this$0)},
	{"val$mainIcon", "Ljavax/swing/Icon;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$1, val$mainIcon)},
	{}
};

$MethodInfo _AquaTabbedPaneUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;IILjavax/swing/Icon;)V", nullptr, 0, $method(static_cast<void(AquaTabbedPaneUI$1::*)($AquaTabbedPaneUI*,int32_t,int32_t,$Icon*)>(&AquaTabbedPaneUI$1::init$))},
	{"createImage", "()Ljava/awt/Image;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaTabbedPaneUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTabbedPaneUI",
	"getIconForTab",
	"(I)Ljavax/swing/Icon;"
};

$InnerClassInfo _AquaTabbedPaneUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaTabbedPaneUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI$1",
	"com.apple.laf.AquaIcon$CachingScalingIcon",
	nullptr,
	_AquaTabbedPaneUI$1_FieldInfo_,
	_AquaTabbedPaneUI$1_MethodInfo_,
	nullptr,
	&_AquaTabbedPaneUI$1_EnclosingMethodInfo_,
	_AquaTabbedPaneUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI"
};

$Object* allocate$AquaTabbedPaneUI$1($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI$1));
}

void AquaTabbedPaneUI$1::init$($AquaTabbedPaneUI* this$0, int32_t width, int32_t height, $Icon* val$mainIcon) {
	$set(this, this$0, this$0);
	$set(this, val$mainIcon, val$mainIcon);
	$AquaIcon$CachingScalingIcon::init$(width, height);
}

$Image* AquaTabbedPaneUI$1::createImage() {
	return $AquaIcon::getImageForIcon(this->val$mainIcon);
}

AquaTabbedPaneUI$1::AquaTabbedPaneUI$1() {
}

$Class* AquaTabbedPaneUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI$1, name, initialize, &_AquaTabbedPaneUI$1_ClassInfo_, allocate$AquaTabbedPaneUI$1);
	return class$;
}

$Class* AquaTabbedPaneUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com