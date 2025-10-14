#include <java/awt/color/ProfileDataException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace awt {
		namespace color {

$FieldInfo _ProfileDataException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProfileDataException, serialVersionUID)},
	{}
};

$MethodInfo _ProfileDataException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProfileDataException::*)($String*)>(&ProfileDataException::init$))},
	{}
};

$ClassInfo _ProfileDataException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.color.ProfileDataException",
	"java.lang.RuntimeException",
	nullptr,
	_ProfileDataException_FieldInfo_,
	_ProfileDataException_MethodInfo_
};

$Object* allocate$ProfileDataException($Class* clazz) {
	return $of($alloc(ProfileDataException));
}

void ProfileDataException::init$($String* s) {
	$RuntimeException::init$(s);
}

ProfileDataException::ProfileDataException() {
}

ProfileDataException::ProfileDataException(const ProfileDataException& e) {
}

ProfileDataException ProfileDataException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ProfileDataException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ProfileDataException::load$($String* name, bool initialize) {
	$loadClass(ProfileDataException, name, initialize, &_ProfileDataException_ClassInfo_, allocate$ProfileDataException);
	return class$;
}

$Class* ProfileDataException::class$ = nullptr;

		} // color
	} // awt
} // java