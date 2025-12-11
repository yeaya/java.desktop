#include <sun/lwawt/macosx/LWCToolkit$2.h>

#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _LWCToolkit$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LWCToolkit$2::*)()>(&LWCToolkit$2::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LWCToolkit$2_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.LWCToolkit",
	nullptr,
	nullptr
};

$InnerClassInfo _LWCToolkit$2_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.LWCToolkit$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWCToolkit$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.LWCToolkit$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_LWCToolkit$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_LWCToolkit$2_EnclosingMethodInfo_,
	_LWCToolkit$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.LWCToolkit"
};

$Object* allocate$LWCToolkit$2($Class* clazz) {
	return $of($alloc(LWCToolkit$2));
}

void LWCToolkit$2::init$() {
}

$Object* LWCToolkit$2::run() {
	return $of($Boolean::valueOf(!$Boolean::parseBoolean($($System::getProperty("javafx.embed.singleThread"_s, "false"_s)))));
}

LWCToolkit$2::LWCToolkit$2() {
}

$Class* LWCToolkit$2::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$2, name, initialize, &_LWCToolkit$2_ClassInfo_, allocate$LWCToolkit$2);
	return class$;
}

$Class* LWCToolkit$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun