#include <java/awt/PaintContext.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _PaintContext_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PaintContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.PaintContext",
	nullptr,
	nullptr,
	nullptr,
	_PaintContext_MethodInfo_
};

$Object* allocate$PaintContext($Class* clazz) {
	return $of($alloc(PaintContext));
}

$Class* PaintContext::load$($String* name, bool initialize) {
	$loadClass(PaintContext, name, initialize, &_PaintContext_ClassInfo_, allocate$PaintContext);
	return class$;
}

$Class* PaintContext::class$ = nullptr;

	} // awt
} // java