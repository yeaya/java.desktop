#include <com/apple/laf/AquaImageFactory$2.h>

#include <com/apple/eawt/Application.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <java/awt/Image.h>
#include <jcpp.h>

using $Application = ::com::apple::eawt::Application;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaImageFactory$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaImageFactory$2::*)()>(&AquaImageFactory$2::init$))},
	{"run", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaImageFactory$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaImageFactory",
	"getGenericJavaIcon",
	"()Ljava/awt/Image;"
};

$InnerClassInfo _AquaImageFactory$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaImageFactory$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaImageFactory$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_AquaImageFactory$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Image;>;",
	&_AquaImageFactory$2_EnclosingMethodInfo_,
	_AquaImageFactory$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$2($Class* clazz) {
	return $of($alloc(AquaImageFactory$2));
}

void AquaImageFactory$2::init$() {
}

$Object* AquaImageFactory$2::run() {
	return $of($nc($($Application::getApplication()))->getDockIconImage());
}

AquaImageFactory$2::AquaImageFactory$2() {
}

$Class* AquaImageFactory$2::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$2, name, initialize, &_AquaImageFactory$2_ClassInfo_, allocate$AquaImageFactory$2);
	return class$;
}

$Class* AquaImageFactory$2::class$ = nullptr;

		} // laf
	} // apple
} // com