#include <javax/sound/sampled/UnsupportedAudioFileException.h>

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

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _UnsupportedAudioFileException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedAudioFileException, serialVersionUID)},
	{}
};

$MethodInfo _UnsupportedAudioFileException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedAudioFileException::*)()>(&UnsupportedAudioFileException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedAudioFileException::*)($String*)>(&UnsupportedAudioFileException::init$))},
	{}
};

$ClassInfo _UnsupportedAudioFileException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.UnsupportedAudioFileException",
	"java.lang.Exception",
	nullptr,
	_UnsupportedAudioFileException_FieldInfo_,
	_UnsupportedAudioFileException_MethodInfo_
};

$Object* allocate$UnsupportedAudioFileException($Class* clazz) {
	return $of($alloc(UnsupportedAudioFileException));
}

void UnsupportedAudioFileException::init$() {
	$Exception::init$();
}

void UnsupportedAudioFileException::init$($String* message) {
	$Exception::init$(message);
}

UnsupportedAudioFileException::UnsupportedAudioFileException() {
}

UnsupportedAudioFileException::UnsupportedAudioFileException(const UnsupportedAudioFileException& e) {
}

UnsupportedAudioFileException UnsupportedAudioFileException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnsupportedAudioFileException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnsupportedAudioFileException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedAudioFileException, name, initialize, &_UnsupportedAudioFileException_ClassInfo_, allocate$UnsupportedAudioFileException);
	return class$;
}

$Class* UnsupportedAudioFileException::class$ = nullptr;

		} // sampled
	} // sound
} // javax