#include <com/apple/laf/AquaMenuPainter$RecyclableBorder.h>

#include <com/apple/laf/AquaMenuPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaMenuPainter$RecyclableBorder_FieldInfo_[] = {
	{"borderName", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaMenuPainter$RecyclableBorder, borderName)},
	{}
};

$MethodInfo _AquaMenuPainter$RecyclableBorder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AquaMenuPainter$RecyclableBorder::*)($String*)>(&AquaMenuPainter$RecyclableBorder::init$))},
	{"getInstance", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaMenuPainter$RecyclableBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMenuPainter$RecyclableBorder", "com.apple.laf.AquaMenuPainter", "RecyclableBorder", $STATIC},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaMenuPainter$RecyclableBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaMenuPainter$RecyclableBorder",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	_AquaMenuPainter$RecyclableBorder_FieldInfo_,
	_AquaMenuPainter$RecyclableBorder_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/border/Border;>;",
	nullptr,
	_AquaMenuPainter$RecyclableBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMenuPainter"
};

$Object* allocate$AquaMenuPainter$RecyclableBorder($Class* clazz) {
	return $of($alloc(AquaMenuPainter$RecyclableBorder));
}

void AquaMenuPainter$RecyclableBorder::init$($String* borderName) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, borderName, borderName);
}

$Object* AquaMenuPainter$RecyclableBorder::getInstance() {
	return $of($UIManager::getBorder(this->borderName));
}

AquaMenuPainter$RecyclableBorder::AquaMenuPainter$RecyclableBorder() {
}

$Class* AquaMenuPainter$RecyclableBorder::load$($String* name, bool initialize) {
	$loadClass(AquaMenuPainter$RecyclableBorder, name, initialize, &_AquaMenuPainter$RecyclableBorder_ClassInfo_, allocate$AquaMenuPainter$RecyclableBorder);
	return class$;
}

$Class* AquaMenuPainter$RecyclableBorder::class$ = nullptr;

		} // laf
	} // apple
} // com