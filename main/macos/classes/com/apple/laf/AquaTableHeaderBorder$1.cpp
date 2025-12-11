#include <com/apple/laf/AquaTableHeaderBorder$1.h>

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaTableHeaderBorder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaTableHeaderBorder$1::*)()>(&AquaTableHeaderBorder$1::init$))},
	{"getInstance", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaTableHeaderBorder$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTableHeaderBorder",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaTableHeaderBorder$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTableHeaderBorder$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaTableHeaderBorder$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTableHeaderBorder$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaTableHeaderBorder$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/border/Border;>;",
	&_AquaTableHeaderBorder$1_EnclosingMethodInfo_,
	_AquaTableHeaderBorder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTableHeaderBorder"
};

$Object* allocate$AquaTableHeaderBorder$1($Class* clazz) {
	return $of($alloc(AquaTableHeaderBorder$1));
}

void AquaTableHeaderBorder$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaTableHeaderBorder$1::getInstance() {
	return $of($BorderFactory::createRaisedBevelBorder());
}

AquaTableHeaderBorder$1::AquaTableHeaderBorder$1() {
}

$Class* AquaTableHeaderBorder$1::load$($String* name, bool initialize) {
	$loadClass(AquaTableHeaderBorder$1, name, initialize, &_AquaTableHeaderBorder$1_ClassInfo_, allocate$AquaTableHeaderBorder$1);
	return class$;
}

$Class* AquaTableHeaderBorder$1::class$ = nullptr;

		} // laf
	} // apple
} // com