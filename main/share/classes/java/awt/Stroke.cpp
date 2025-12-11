#include <java/awt/Stroke.h>

#include <java/awt/Shape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Stroke_MethodInfo_[] = {
	{"createStrokedShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Stroke_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.Stroke",
	nullptr,
	nullptr,
	nullptr,
	_Stroke_MethodInfo_
};

$Object* allocate$Stroke($Class* clazz) {
	return $of($alloc(Stroke));
}

$Class* Stroke::load$($String* name, bool initialize) {
	$loadClass(Stroke, name, initialize, &_Stroke_ClassInfo_, allocate$Stroke);
	return class$;
}

$Class* Stroke::class$ = nullptr;

	} // awt
} // java