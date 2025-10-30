#include <java/awt/Conditional.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Conditional_MethodInfo_[] = {
	{"evaluate", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Conditional_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.awt.Conditional",
	nullptr,
	nullptr,
	nullptr,
	_Conditional_MethodInfo_
};

$Object* allocate$Conditional($Class* clazz) {
	return $of($alloc(Conditional));
}

$Class* Conditional::load$($String* name, bool initialize) {
	$loadClass(Conditional, name, initialize, &_Conditional_ClassInfo_, allocate$Conditional);
	return class$;
}

$Class* Conditional::class$ = nullptr;

	} // awt
} // java