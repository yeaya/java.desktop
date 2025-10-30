#include <java/beans/Visibility.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _Visibility_MethodInfo_[] = {
	{"avoidingGui", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"dontUseGui", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"needsGui", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"okToUseGui", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Visibility_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.Visibility",
	nullptr,
	nullptr,
	nullptr,
	_Visibility_MethodInfo_
};

$Object* allocate$Visibility($Class* clazz) {
	return $of($alloc(Visibility));
}

$Class* Visibility::load$($String* name, bool initialize) {
	$loadClass(Visibility, name, initialize, &_Visibility_ClassInfo_, allocate$Visibility);
	return class$;
}

$Class* Visibility::class$ = nullptr;

	} // beans
} // java