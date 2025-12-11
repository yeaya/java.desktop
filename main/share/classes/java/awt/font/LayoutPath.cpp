#include <java/awt/font/LayoutPath.h>

#include <java/awt/geom/Point2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$MethodInfo _LayoutPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LayoutPath::*)()>(&LayoutPath::init$))},
	{"pathToPoint", "(Ljava/awt/geom/Point2D;ZLjava/awt/geom/Point2D;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"pointToPath", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LayoutPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.font.LayoutPath",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LayoutPath_MethodInfo_
};

$Object* allocate$LayoutPath($Class* clazz) {
	return $of($alloc(LayoutPath));
}

void LayoutPath::init$() {
}

LayoutPath::LayoutPath() {
}

$Class* LayoutPath::load$($String* name, bool initialize) {
	$loadClass(LayoutPath, name, initialize, &_LayoutPath_ClassInfo_, allocate$LayoutPath);
	return class$;
}

$Class* LayoutPath::class$ = nullptr;

		} // font
	} // awt
} // java