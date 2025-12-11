#include <com/apple/laf/AquaImageFactory$3.h>

#include <com/apple/eio/FileManager.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <jcpp.h>

using $FileManager = ::com::apple::eio::FileManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaImageFactory$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaImageFactory$3::*)()>(&AquaImageFactory$3::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaImageFactory$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaImageFactory",
	"getPathToThisApplication",
	"()Ljava/lang/String;"
};

$InnerClassInfo _AquaImageFactory$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaImageFactory$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaImageFactory$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_AquaImageFactory$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_AquaImageFactory$3_EnclosingMethodInfo_,
	_AquaImageFactory$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$3($Class* clazz) {
	return $of($alloc(AquaImageFactory$3));
}

void AquaImageFactory$3::init$() {
}

$Object* AquaImageFactory$3::run() {
	return $of($FileManager::getPathToApplicationBundle());
}

AquaImageFactory$3::AquaImageFactory$3() {
}

$Class* AquaImageFactory$3::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$3, name, initialize, &_AquaImageFactory$3_ClassInfo_, allocate$AquaImageFactory$3);
	return class$;
}

$Class* AquaImageFactory$3::class$ = nullptr;

		} // laf
	} // apple
} // com