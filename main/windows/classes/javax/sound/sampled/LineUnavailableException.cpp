#include <javax/sound/sampled/LineUnavailableException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _LineUnavailableException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineUnavailableException, serialVersionUID)},
	{}
};

$MethodInfo _LineUnavailableException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LineUnavailableException::*)()>(&LineUnavailableException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LineUnavailableException::*)($String*)>(&LineUnavailableException::init$))},
	{}
};

$ClassInfo _LineUnavailableException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.LineUnavailableException",
	"java.lang.Exception",
	nullptr,
	_LineUnavailableException_FieldInfo_,
	_LineUnavailableException_MethodInfo_
};

$Object* allocate$LineUnavailableException($Class* clazz) {
	return $of($alloc(LineUnavailableException));
}

void LineUnavailableException::init$() {
	$Exception::init$();
}

void LineUnavailableException::init$($String* message) {
	$Exception::init$(message);
}

LineUnavailableException::LineUnavailableException() {
}

LineUnavailableException::LineUnavailableException(const LineUnavailableException& e) : $Exception(e) {
}

void LineUnavailableException::throw$() {
	throw *this;
}

$Class* LineUnavailableException::load$($String* name, bool initialize) {
	$loadClass(LineUnavailableException, name, initialize, &_LineUnavailableException_ClassInfo_, allocate$LineUnavailableException);
	return class$;
}

$Class* LineUnavailableException::class$ = nullptr;

		} // sampled
	} // sound
} // javax