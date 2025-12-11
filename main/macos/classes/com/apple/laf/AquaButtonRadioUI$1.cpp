#include <com/apple/laf/AquaButtonRadioUI$1.h>

#include <com/apple/laf/AquaNativeResources.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

using $AquaNativeResources = ::com::apple::laf::AquaNativeResources;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonRadioUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaButtonRadioUI$1::*)()>(&AquaButtonRadioUI$1::init$))},
	{"getInstance", "()Ljavax/swing/ImageIcon;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaButtonRadioUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaButtonRadioUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaButtonRadioUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonRadioUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonRadioUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonRadioUI$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaButtonRadioUI$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/ImageIcon;>;",
	&_AquaButtonRadioUI$1_EnclosingMethodInfo_,
	_AquaButtonRadioUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonRadioUI"
};

$Object* allocate$AquaButtonRadioUI$1($Class* clazz) {
	return $of($alloc(AquaButtonRadioUI$1));
}

void AquaButtonRadioUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaButtonRadioUI$1::getInstance() {
	return $of($new($ImageIcon, $(static_cast<$Image*>($AquaNativeResources::getRadioButtonSizerImage()))));
}

AquaButtonRadioUI$1::AquaButtonRadioUI$1() {
}

$Class* AquaButtonRadioUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaButtonRadioUI$1, name, initialize, &_AquaButtonRadioUI$1_ClassInfo_, allocate$AquaButtonRadioUI$1);
	return class$;
}

$Class* AquaButtonRadioUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com