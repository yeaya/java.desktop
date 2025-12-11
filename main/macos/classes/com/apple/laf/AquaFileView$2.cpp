#include <com/apple/laf/AquaFileView$2.h>

#include <com/apple/laf/AquaFileView.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaFileView = ::com::apple::laf::AquaFileView;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaFileView$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaFileView$2::*)()>(&AquaFileView$2::init$))},
	{"getInstance", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaFileView$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileView",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaFileView$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileView$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaFileView$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileView$2",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaFileView$2_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/lang/String;>;",
	&_AquaFileView$2_EnclosingMethodInfo_,
	_AquaFileView$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileView"
};

$Object* allocate$AquaFileView$2($Class* clazz) {
	return $of($alloc(AquaFileView$2));
}

void AquaFileView$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaFileView$2::getInstance() {
	return $of($AquaFileView::getNativeMachineName());
}

AquaFileView$2::AquaFileView$2() {
}

$Class* AquaFileView$2::load$($String* name, bool initialize) {
	$loadClass(AquaFileView$2, name, initialize, &_AquaFileView$2_ClassInfo_, allocate$AquaFileView$2);
	return class$;
}

$Class* AquaFileView$2::class$ = nullptr;

		} // laf
	} // apple
} // com