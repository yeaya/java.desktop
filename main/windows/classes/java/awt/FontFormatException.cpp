#include <java/awt/FontFormatException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _FontFormatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontFormatException, serialVersionUID)},
	{}
};

$MethodInfo _FontFormatException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FontFormatException::*)($String*)>(&FontFormatException::init$))},
	{}
};

$ClassInfo _FontFormatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.FontFormatException",
	"java.lang.Exception",
	nullptr,
	_FontFormatException_FieldInfo_,
	_FontFormatException_MethodInfo_
};

$Object* allocate$FontFormatException($Class* clazz) {
	return $of($alloc(FontFormatException));
}

void FontFormatException::init$($String* reason) {
	$Exception::init$(reason);
}

FontFormatException::FontFormatException() {
}

FontFormatException::FontFormatException(const FontFormatException& e) {
}

FontFormatException FontFormatException::wrapper$() {
	$pendingException(this);
	return *this;
}

void FontFormatException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* FontFormatException::load$($String* name, bool initialize) {
	$loadClass(FontFormatException, name, initialize, &_FontFormatException_ClassInfo_, allocate$FontFormatException);
	return class$;
}

$Class* FontFormatException::class$ = nullptr;

	} // awt
} // java