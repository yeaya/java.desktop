#include <java/awt/PaintContext.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <jcpp.h>

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