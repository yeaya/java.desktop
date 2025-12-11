#include <sun/awt/FontConfiguration$3.h>

#include <sun/awt/FontConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _FontConfiguration$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FontConfiguration$3::*)()>(&FontConfiguration$3::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FontConfiguration$3_EnclosingMethodInfo_ = {
	"sun.awt.FontConfiguration",
	"sanityCheck",
	"()V"
};

$InnerClassInfo _FontConfiguration$3_InnerClassesInfo_[] = {
	{"sun.awt.FontConfiguration$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontConfiguration$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.FontConfiguration$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FontConfiguration$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_FontConfiguration$3_EnclosingMethodInfo_,
	_FontConfiguration$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.FontConfiguration"
};

$Object* allocate$FontConfiguration$3($Class* clazz) {
	return $of($alloc(FontConfiguration$3));
}

void FontConfiguration$3::init$() {
}

$Object* FontConfiguration$3::run() {
	return $of($System::getProperty("os.name"_s));
}

FontConfiguration$3::FontConfiguration$3() {
}

$Class* FontConfiguration$3::load$($String* name, bool initialize) {
	$loadClass(FontConfiguration$3, name, initialize, &_FontConfiguration$3_ClassInfo_, allocate$FontConfiguration$3);
	return class$;
}

$Class* FontConfiguration$3::class$ = nullptr;

	} // awt
} // sun