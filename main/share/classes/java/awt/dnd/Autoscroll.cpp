#include <java/awt/dnd/Autoscroll.h>

#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _Autoscroll_MethodInfo_[] = {
	{"autoscroll", "(Ljava/awt/Point;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAutoscrollInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Autoscroll_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.dnd.Autoscroll",
	nullptr,
	nullptr,
	nullptr,
	_Autoscroll_MethodInfo_
};

$Object* allocate$Autoscroll($Class* clazz) {
	return $of($alloc(Autoscroll));
}

$Class* Autoscroll::load$($String* name, bool initialize) {
	$loadClass(Autoscroll, name, initialize, &_Autoscroll_ClassInfo_, allocate$Autoscroll);
	return class$;
}

$Class* Autoscroll::class$ = nullptr;

		} // dnd
	} // awt
} // java