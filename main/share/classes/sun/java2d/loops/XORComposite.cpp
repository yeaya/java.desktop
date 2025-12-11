#include <sun/java2d/loops/XORComposite.h>

#include <java/awt/Color.h>
#include <java/awt/CompositeContext.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SunCompositeContext.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $CompositeContext = ::java::awt::CompositeContext;
using $RenderingHints = ::java::awt::RenderingHints;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunCompositeContext = ::sun::java2d::SunCompositeContext;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _XORComposite_FieldInfo_[] = {
	{"xorColor", "Ljava/awt/Color;", nullptr, 0, $field(XORComposite, xorColor)},
	{"xorPixel", "I", nullptr, 0, $field(XORComposite, xorPixel)},
	{"alphaMask", "I", nullptr, 0, $field(XORComposite, alphaMask)},
	{}
};

$MethodInfo _XORComposite_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;Lsun/java2d/SurfaceData;)V", nullptr, $PUBLIC, $method(static_cast<void(XORComposite::*)($Color*,$SurfaceData*)>(&XORComposite::init$))},
	{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/image/ColorModel;Ljava/awt/RenderingHints;)Ljava/awt/CompositeContext;", nullptr, $PUBLIC},
	{"getAlphaMask", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(XORComposite::*)()>(&XORComposite::getAlphaMask))},
	{"getXorColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $method(static_cast<$Color*(XORComposite::*)()>(&XORComposite::getXorColor))},
	{"getXorPixel", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(XORComposite::*)()>(&XORComposite::getXorPixel))},
	{}
};

$ClassInfo _XORComposite_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.loops.XORComposite",
	"java.lang.Object",
	"java.awt.Composite",
	_XORComposite_FieldInfo_,
	_XORComposite_MethodInfo_
};

$Object* allocate$XORComposite($Class* clazz) {
	return $of($alloc(XORComposite));
}

void XORComposite::init$($Color* xorColor, $SurfaceData* sd) {
	$set(this, xorColor, xorColor);
	$var($SurfaceType, sType, $nc(sd)->getSurfaceType());
	this->xorPixel = sd->pixelFor($nc(xorColor)->getRGB());
	this->alphaMask = $nc(sType)->getAlphaMask();
}

$Color* XORComposite::getXorColor() {
	return this->xorColor;
}

int32_t XORComposite::getXorPixel() {
	return this->xorPixel;
}

int32_t XORComposite::getAlphaMask() {
	return this->alphaMask;
}

$CompositeContext* XORComposite::createContext($ColorModel* srcColorModel, $ColorModel* dstColorModel, $RenderingHints* hints) {
	return $new($SunCompositeContext, this, srcColorModel, dstColorModel);
}

XORComposite::XORComposite() {
}

$Class* XORComposite::load$($String* name, bool initialize) {
	$loadClass(XORComposite, name, initialize, &_XORComposite_ClassInfo_, allocate$XORComposite);
	return class$;
}

$Class* XORComposite::class$ = nullptr;

		} // loops
	} // java2d
} // sun