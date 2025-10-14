#include <sun/font/LayoutPathImpl$EmptyPath.h>

#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Point2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/LayoutPathImpl.h>
#include <jcpp.h>

using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LayoutPathImpl = ::sun::font::LayoutPathImpl;

namespace sun {
	namespace font {

$FieldInfo _LayoutPathImpl$EmptyPath_FieldInfo_[] = {
	{"tx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(LayoutPathImpl$EmptyPath, tx)},
	{}
};

$MethodInfo _LayoutPathImpl$EmptyPath_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(LayoutPathImpl$EmptyPath::*)($AffineTransform*)>(&LayoutPathImpl$EmptyPath::init$))},
	{"end", "()D", nullptr, $PUBLIC},
	{"length", "()D", nullptr, $PUBLIC},
	{"mapShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"pathToPoint", "(Ljava/awt/geom/Point2D;ZLjava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"pointToPath", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC},
	{"start", "()D", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LayoutPathImpl$EmptyPath_InnerClassesInfo_[] = {
	{"sun.font.LayoutPathImpl$EmptyPath", "sun.font.LayoutPathImpl", "EmptyPath", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _LayoutPathImpl$EmptyPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.LayoutPathImpl$EmptyPath",
	"sun.font.LayoutPathImpl",
	nullptr,
	_LayoutPathImpl$EmptyPath_FieldInfo_,
	_LayoutPathImpl$EmptyPath_MethodInfo_,
	nullptr,
	nullptr,
	_LayoutPathImpl$EmptyPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.LayoutPathImpl"
};

$Object* allocate$LayoutPathImpl$EmptyPath($Class* clazz) {
	return $of($alloc(LayoutPathImpl$EmptyPath));
}

void LayoutPathImpl$EmptyPath::init$($AffineTransform* tx) {
	$LayoutPathImpl::init$();
	$set(this, tx, tx);
}

void LayoutPathImpl$EmptyPath::pathToPoint($Point2D* location, bool preceding, $Point2D* point) {
	if (this->tx != nullptr) {
		$nc(this->tx)->transform(location, point);
	} else {
		$nc(point)->setLocation(location);
	}
}

bool LayoutPathImpl$EmptyPath::pointToPath($Point2D* pt, $Point2D* result) {
	$nc(result)->setLocation(pt);
	if (this->tx != nullptr) {
		try {
			$nc(this->tx)->inverseTransform(pt, result);
		} catch ($NoninvertibleTransformException&) {
			$catch();
		}
	}
	return result->getX() > 0;
}

double LayoutPathImpl$EmptyPath::start() {
	return (double)0;
}

double LayoutPathImpl$EmptyPath::end() {
	return (double)0;
}

double LayoutPathImpl$EmptyPath::length() {
	return (double)0;
}

$Shape* LayoutPathImpl$EmptyPath::mapShape($Shape* s) {
	if (this->tx != nullptr) {
		return $nc(this->tx)->createTransformedShape(s);
	}
	return s;
}

LayoutPathImpl$EmptyPath::LayoutPathImpl$EmptyPath() {
}

$Class* LayoutPathImpl$EmptyPath::load$($String* name, bool initialize) {
	$loadClass(LayoutPathImpl$EmptyPath, name, initialize, &_LayoutPathImpl$EmptyPath_ClassInfo_, allocate$LayoutPathImpl$EmptyPath);
	return class$;
}

$Class* LayoutPathImpl$EmptyPath::class$ = nullptr;

	} // font
} // sun