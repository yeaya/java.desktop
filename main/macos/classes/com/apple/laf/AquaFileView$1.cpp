#include <com/apple/laf/AquaFileView$1.h>

#include <com/apple/laf/AquaFileView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaFileView$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaFileView$1::*)()>(&AquaFileView$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaFileView$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileView",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaFileView$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileView$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileView$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_AquaFileView$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_AquaFileView$1_EnclosingMethodInfo_,
	_AquaFileView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileView"
};

$Object* allocate$AquaFileView$1($Class* clazz) {
	return $of($alloc(AquaFileView$1));
}

void AquaFileView$1::init$() {
}

$Object* AquaFileView$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("osxui"_s);
	return $of(nullptr);
}

AquaFileView$1::AquaFileView$1() {
}

$Class* AquaFileView$1::load$($String* name, bool initialize) {
	$loadClass(AquaFileView$1, name, initialize, &_AquaFileView$1_ClassInfo_, allocate$AquaFileView$1);
	return class$;
}

$Class* AquaFileView$1::class$ = nullptr;

		} // laf
	} // apple
} // com