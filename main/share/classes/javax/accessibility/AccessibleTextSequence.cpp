#include <javax/accessibility/AccessibleTextSequence.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleTextSequence_FieldInfo_[] = {
	{"startIndex", "I", nullptr, $PUBLIC, $field(AccessibleTextSequence, startIndex)},
	{"endIndex", "I", nullptr, $PUBLIC, $field(AccessibleTextSequence, endIndex)},
	{"text", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AccessibleTextSequence, text)},
	{}
};

$MethodInfo _AccessibleTextSequence_MethodInfo_[] = {
	{"<init>", "(IILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleTextSequence::*)(int32_t,int32_t,$String*)>(&AccessibleTextSequence::init$))},
	{}
};

$ClassInfo _AccessibleTextSequence_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.accessibility.AccessibleTextSequence",
	"java.lang.Object",
	nullptr,
	_AccessibleTextSequence_FieldInfo_,
	_AccessibleTextSequence_MethodInfo_
};

$Object* allocate$AccessibleTextSequence($Class* clazz) {
	return $of($alloc(AccessibleTextSequence));
}

void AccessibleTextSequence::init$(int32_t start, int32_t end, $String* txt) {
	this->startIndex = start;
	this->endIndex = end;
	$set(this, text, txt);
}

AccessibleTextSequence::AccessibleTextSequence() {
}

$Class* AccessibleTextSequence::load$($String* name, bool initialize) {
	$loadClass(AccessibleTextSequence, name, initialize, &_AccessibleTextSequence_ClassInfo_, allocate$AccessibleTextSequence);
	return class$;
}

$Class* AccessibleTextSequence::class$ = nullptr;

	} // accessibility
} // javax