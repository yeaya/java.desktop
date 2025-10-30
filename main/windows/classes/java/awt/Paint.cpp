#include <java/awt/Paint.h>

#include <java/awt/PaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Paint_MethodInfo_[] = {
	{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)Ljava/awt/PaintContext;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Paint_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.Paint",
	nullptr,
	"java.awt.Transparency",
	nullptr,
	_Paint_MethodInfo_
};

$Object* allocate$Paint($Class* clazz) {
	return $of($alloc(Paint));
}

$Class* Paint::load$($String* name, bool initialize) {
	$loadClass(Paint, name, initialize, &_Paint_ClassInfo_, allocate$Paint);
	return class$;
}

$Class* Paint::class$ = nullptr;

	} // awt
} // java