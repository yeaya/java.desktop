#include <sun/font/FontScalerException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$MethodInfo _FontScalerException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontScalerException::*)()>(&FontScalerException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FontScalerException::*)($String*)>(&FontScalerException::init$))},
	{}
};

$ClassInfo _FontScalerException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FontScalerException",
	"java.lang.Exception",
	nullptr,
	nullptr,
	_FontScalerException_MethodInfo_
};

$Object* allocate$FontScalerException($Class* clazz) {
	return $of($alloc(FontScalerException));
}

void FontScalerException::init$() {
	$Exception::init$("Font scaler encountered runtime problem."_s);
}

void FontScalerException::init$($String* reason) {
	$Exception::init$(reason);
}

FontScalerException::FontScalerException() {
}

FontScalerException::FontScalerException(const FontScalerException& e) {
}

FontScalerException FontScalerException::wrapper$() {
	$pendingException(this);
	return *this;
}

void FontScalerException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* FontScalerException::load$($String* name, bool initialize) {
	$loadClass(FontScalerException, name, initialize, &_FontScalerException_ClassInfo_, allocate$FontScalerException);
	return class$;
}

$Class* FontScalerException::class$ = nullptr;

	} // font
} // sun