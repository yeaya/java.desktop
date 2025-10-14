#include <sun/awt/SunToolkit$IllegalThreadException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$MethodInfo _SunToolkit$IllegalThreadException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SunToolkit$IllegalThreadException::*)($String*)>(&SunToolkit$IllegalThreadException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunToolkit$IllegalThreadException::*)()>(&SunToolkit$IllegalThreadException::init$))},
	{}
};

$InnerClassInfo _SunToolkit$IllegalThreadException_InnerClassesInfo_[] = {
	{"sun.awt.SunToolkit$IllegalThreadException", "sun.awt.SunToolkit", "IllegalThreadException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SunToolkit$IllegalThreadException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.SunToolkit$IllegalThreadException",
	"java.lang.RuntimeException",
	nullptr,
	nullptr,
	_SunToolkit$IllegalThreadException_MethodInfo_,
	nullptr,
	nullptr,
	_SunToolkit$IllegalThreadException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunToolkit"
};

$Object* allocate$SunToolkit$IllegalThreadException($Class* clazz) {
	return $of($alloc(SunToolkit$IllegalThreadException));
}

void SunToolkit$IllegalThreadException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

void SunToolkit$IllegalThreadException::init$() {
	$RuntimeException::init$();
}

SunToolkit$IllegalThreadException::SunToolkit$IllegalThreadException() {
}

SunToolkit$IllegalThreadException::SunToolkit$IllegalThreadException(const SunToolkit$IllegalThreadException& e) {
}

SunToolkit$IllegalThreadException SunToolkit$IllegalThreadException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SunToolkit$IllegalThreadException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SunToolkit$IllegalThreadException::load$($String* name, bool initialize) {
	$loadClass(SunToolkit$IllegalThreadException, name, initialize, &_SunToolkit$IllegalThreadException_ClassInfo_, allocate$SunToolkit$IllegalThreadException);
	return class$;
}

$Class* SunToolkit$IllegalThreadException::class$ = nullptr;

	} // awt
} // sun