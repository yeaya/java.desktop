#include <com/apple/laf/AquaButtonLabeledUI$RecyclableSizingIcon.h>

#include <com/apple/laf/AquaButtonLabeledUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonLabeledUI$RecyclableSizingIcon_FieldInfo_[] = {
	{"iconSize", "I", nullptr, $FINAL, $field(AquaButtonLabeledUI$RecyclableSizingIcon, iconSize)},
	{}
};

$MethodInfo _AquaButtonLabeledUI$RecyclableSizingIcon_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonLabeledUI$RecyclableSizingIcon::*)(int32_t)>(&AquaButtonLabeledUI$RecyclableSizingIcon::init$))},
	{"getInstance", "()Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaButtonLabeledUI$RecyclableSizingIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonLabeledUI$RecyclableSizingIcon", "com.apple.laf.AquaButtonLabeledUI", "RecyclableSizingIcon", $PROTECTED | $STATIC},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonLabeledUI$RecyclableSizingIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonLabeledUI$RecyclableSizingIcon",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	_AquaButtonLabeledUI$RecyclableSizingIcon_FieldInfo_,
	_AquaButtonLabeledUI$RecyclableSizingIcon_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;",
	nullptr,
	_AquaButtonLabeledUI$RecyclableSizingIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonLabeledUI"
};

$Object* allocate$AquaButtonLabeledUI$RecyclableSizingIcon($Class* clazz) {
	return $of($alloc(AquaButtonLabeledUI$RecyclableSizingIcon));
}

void AquaButtonLabeledUI$RecyclableSizingIcon::init$(int32_t iconSize) {
	$AquaUtils$RecyclableSingleton::init$();
	this->iconSize = iconSize;
}

$Object* AquaButtonLabeledUI$RecyclableSizingIcon::getInstance() {
	return $of($new($ImageIcon, static_cast<$Image*>($$new($BufferedImage, this->iconSize, this->iconSize, $BufferedImage::TYPE_INT_ARGB_PRE))));
}

AquaButtonLabeledUI$RecyclableSizingIcon::AquaButtonLabeledUI$RecyclableSizingIcon() {
}

$Class* AquaButtonLabeledUI$RecyclableSizingIcon::load$($String* name, bool initialize) {
	$loadClass(AquaButtonLabeledUI$RecyclableSizingIcon, name, initialize, &_AquaButtonLabeledUI$RecyclableSizingIcon_ClassInfo_, allocate$AquaButtonLabeledUI$RecyclableSizingIcon);
	return class$;
}

$Class* AquaButtonLabeledUI$RecyclableSizingIcon::class$ = nullptr;

		} // laf
	} // apple
} // com