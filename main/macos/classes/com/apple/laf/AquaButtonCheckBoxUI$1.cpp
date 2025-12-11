#include <com/apple/laf/AquaButtonCheckBoxUI$1.h>

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

$MethodInfo _AquaButtonCheckBoxUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaButtonCheckBoxUI$1::*)()>(&AquaButtonCheckBoxUI$1::init$))},
	{"getInstance", "()Ljavax/swing/ImageIcon;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaButtonCheckBoxUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaButtonCheckBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaButtonCheckBoxUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonCheckBoxUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonCheckBoxUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonCheckBoxUI$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaButtonCheckBoxUI$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/ImageIcon;>;",
	&_AquaButtonCheckBoxUI$1_EnclosingMethodInfo_,
	_AquaButtonCheckBoxUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonCheckBoxUI"
};

$Object* allocate$AquaButtonCheckBoxUI$1($Class* clazz) {
	return $of($alloc(AquaButtonCheckBoxUI$1));
}

void AquaButtonCheckBoxUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaButtonCheckBoxUI$1::getInstance() {
	return $of($new($ImageIcon, $(static_cast<$Image*>($AquaNativeResources::getRadioButtonSizerImage()))));
}

AquaButtonCheckBoxUI$1::AquaButtonCheckBoxUI$1() {
}

$Class* AquaButtonCheckBoxUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaButtonCheckBoxUI$1, name, initialize, &_AquaButtonCheckBoxUI$1_ClassInfo_, allocate$AquaButtonCheckBoxUI$1);
	return class$;
}

$Class* AquaButtonCheckBoxUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com