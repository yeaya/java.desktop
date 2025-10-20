#include <java/awt/ColorPaintContext.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <jcpp.h>

using $PaintContext = ::java::awt::PaintContext;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace java {
	namespace awt {

$FieldInfo _ColorPaintContext_FieldInfo_[] = {
	{"color", "I", nullptr, 0, $field(ColorPaintContext, color)},
	{"savedTile", "Ljava/awt/image/WritableRaster;", nullptr, 0, $field(ColorPaintContext, savedTile)},
	{}
};

$MethodInfo _ColorPaintContext_MethodInfo_[] = {
	{"<init>", "(ILjava/awt/image/ColorModel;)V", nullptr, $PROTECTED, $method(static_cast<void(ColorPaintContext::*)(int32_t,$ColorModel*)>(&ColorPaintContext::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getRGB", "()I", nullptr, 0},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _ColorPaintContext_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.ColorPaintContext",
	"java.lang.Object",
	"java.awt.PaintContext",
	_ColorPaintContext_FieldInfo_,
	_ColorPaintContext_MethodInfo_
};

$Object* allocate$ColorPaintContext($Class* clazz) {
	return $of($alloc(ColorPaintContext));
}

void ColorPaintContext::init$(int32_t color, $ColorModel* cm) {
	this->color = color;
}

void ColorPaintContext::dispose() {
}

int32_t ColorPaintContext::getRGB() {
	return this->color;
}

$ColorModel* ColorPaintContext::getColorModel() {
	return $ColorModel::getRGBdefault();
}

$Raster* ColorPaintContext::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($WritableRaster, t, this->savedTile);
		bool var$0 = t == nullptr || w > $nc(t)->getWidth();
		if (var$0 || h > $nc(t)->getHeight()) {
			$assign(t, $nc($(getColorModel()))->createCompatibleWritableRaster(w, h));
			$var($IntegerComponentRaster, icr, $cast($IntegerComponentRaster, t));
			$Arrays::fill($($nc(icr)->getDataStorage()), this->color);
			$nc(icr)->markDirty();
			if (w <= 64 && h <= 64) {
				$set(this, savedTile, t);
			}
		}
		return t;
	}
}

ColorPaintContext::ColorPaintContext() {
}

$Class* ColorPaintContext::load$($String* name, bool initialize) {
	$loadClass(ColorPaintContext, name, initialize, &_ColorPaintContext_ClassInfo_, allocate$ColorPaintContext);
	return class$;
}

$Class* ColorPaintContext::class$ = nullptr;

	} // awt
} // java