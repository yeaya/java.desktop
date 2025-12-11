#include <sun/awt/X11/Native$1.h>

#include <sun/awt/X11/Native.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _Native$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Native$1::*)()>(&Native$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Native$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.Native",
	nullptr,
	nullptr
};

$InnerClassInfo _Native$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.Native$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Native$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.Native$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Native$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_Native$1_EnclosingMethodInfo_,
	_Native$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.Native"
};

$Object* allocate$Native$1($Class* clazz) {
	return $of($alloc(Native$1));
}

void Native$1::init$() {
}

$Object* Native$1::run() {
	return $of($System::getProperty("sun.arch.data.model"_s));
}

Native$1::Native$1() {
}

$Class* Native$1::load$($String* name, bool initialize) {
	$loadClass(Native$1, name, initialize, &_Native$1_ClassInfo_, allocate$Native$1);
	return class$;
}

$Class* Native$1::class$ = nullptr;

		} // X11
	} // awt
} // sun