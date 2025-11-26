#include <java/awt/color/ProfileDataException.h>

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

ProfileDataException::ProfileDataException(const ProfileDataException& e) : $RuntimeException(e) {
}

void ProfileDataException::throw$() {
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