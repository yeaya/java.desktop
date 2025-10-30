#include <javax/swing/text/BadLocationException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _BadLocationException_FieldInfo_[] = {
	{"offs", "I", nullptr, $PRIVATE, $field(BadLocationException, offs)},
	{}
};

$MethodInfo _BadLocationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(BadLocationException::*)($String*,int32_t)>(&BadLocationException::init$))},
	{"offsetRequested", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BadLocationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.BadLocationException",
	"java.lang.Exception",
	nullptr,
	_BadLocationException_FieldInfo_,
	_BadLocationException_MethodInfo_
};

$Object* allocate$BadLocationException($Class* clazz) {
	return $of($alloc(BadLocationException));
}

void BadLocationException::init$($String* s, int32_t offs) {
	$Exception::init$(s);
	this->offs = offs;
}

int32_t BadLocationException::offsetRequested() {
	return this->offs;
}

BadLocationException::BadLocationException() {
}

BadLocationException::BadLocationException(const BadLocationException& e) : $Exception(e) {
}

void BadLocationException::throw$() {
	throw *this;
}

$Class* BadLocationException::load$($String* name, bool initialize) {
	$loadClass(BadLocationException, name, initialize, &_BadLocationException_ClassInfo_, allocate$BadLocationException);
	return class$;
}

$Class* BadLocationException::class$ = nullptr;

		} // text
	} // swing
} // javax