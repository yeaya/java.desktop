#include <javax/swing/text/ChangedCharSetException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ChangedCharSetException_FieldInfo_[] = {
	{"charSetSpec", "Ljava/lang/String;", nullptr, 0, $field(ChangedCharSetException, charSetSpec)},
	{"charSetKey", "Z", nullptr, 0, $field(ChangedCharSetException, charSetKey)},
	{}
};

$MethodInfo _ChangedCharSetException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ChangedCharSetException::*)($String*,bool)>(&ChangedCharSetException::init$))},
	{"getCharSetSpec", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"keyEqualsCharSet", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ChangedCharSetException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.ChangedCharSetException",
	"java.io.IOException",
	nullptr,
	_ChangedCharSetException_FieldInfo_,
	_ChangedCharSetException_MethodInfo_
};

$Object* allocate$ChangedCharSetException($Class* clazz) {
	return $of($alloc(ChangedCharSetException));
}

void ChangedCharSetException::init$($String* charSetSpec, bool charSetKey) {
	$IOException::init$();
	$set(this, charSetSpec, charSetSpec);
	this->charSetKey = charSetKey;
}

$String* ChangedCharSetException::getCharSetSpec() {
	return this->charSetSpec;
}

bool ChangedCharSetException::keyEqualsCharSet() {
	return this->charSetKey;
}

ChangedCharSetException::ChangedCharSetException() {
}

ChangedCharSetException::ChangedCharSetException(const ChangedCharSetException& e) : $IOException(e) {
}

void ChangedCharSetException::throw$() {
	throw *this;
}

$Class* ChangedCharSetException::load$($String* name, bool initialize) {
	$loadClass(ChangedCharSetException, name, initialize, &_ChangedCharSetException_ClassInfo_, allocate$ChangedCharSetException);
	return class$;
}

$Class* ChangedCharSetException::class$ = nullptr;

		} // text
	} // swing
} // javax