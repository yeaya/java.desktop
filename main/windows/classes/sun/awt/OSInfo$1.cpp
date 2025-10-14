#include <sun/awt/OSInfo$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;

namespace sun {
	namespace awt {

$MethodInfo _OSInfo$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OSInfo$1::*)()>(&OSInfo$1::init$))},
	{"run", "()Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OSInfo$1_EnclosingMethodInfo_ = {
	"sun.awt.OSInfo",
	nullptr,
	nullptr
};

$InnerClassInfo _OSInfo$1_InnerClassesInfo_[] = {
	{"sun.awt.OSInfo$1", nullptr, nullptr, 0},
	{"sun.awt.OSInfo$OSType", "sun.awt.OSInfo", "OSType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _OSInfo$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.OSInfo$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_OSInfo$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/awt/OSInfo$OSType;>;",
	&_OSInfo$1_EnclosingMethodInfo_,
	_OSInfo$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.OSInfo"
};

$Object* allocate$OSInfo$1($Class* clazz) {
	return $of($alloc(OSInfo$1));
}

void OSInfo$1::init$() {
}

$Object* OSInfo$1::run() {
	return $of($OSInfo::getOSType());
}

OSInfo$1::OSInfo$1() {
}

$Class* OSInfo$1::load$($String* name, bool initialize) {
	$loadClass(OSInfo$1, name, initialize, &_OSInfo$1_ClassInfo_, allocate$OSInfo$1);
	return class$;
}

$Class* OSInfo$1::class$ = nullptr;

	} // awt
} // sun