#include <sun/awt/image/PNGImageDecoder$Chromaticities.h>

#include <sun/awt/image/PNGImageDecoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PNGImageDecoder = ::sun::awt::image::PNGImageDecoder;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _PNGImageDecoder$Chromaticities_FieldInfo_[] = {
	{"whiteX", "F", nullptr, $PUBLIC, $field(PNGImageDecoder$Chromaticities, whiteX)},
	{"whiteY", "F", nullptr, $PUBLIC, $field(PNGImageDecoder$Chromaticities, whiteY)},
	{"redX", "F", nullptr, $PUBLIC, $field(PNGImageDecoder$Chromaticities, redX)},
	{"redY", "F", nullptr, $PUBLIC, $field(PNGImageDecoder$Chromaticities, redY)},
	{"greenX", "F", nullptr, $PUBLIC, $field(PNGImageDecoder$Chromaticities, greenX)},
	{"greenY", "F", nullptr, $PUBLIC, $field(PNGImageDecoder$Chromaticities, greenY)},
	{"blueX", "F", nullptr, $PUBLIC, $field(PNGImageDecoder$Chromaticities, blueX)},
	{"blueY", "F", nullptr, $PUBLIC, $field(PNGImageDecoder$Chromaticities, blueY)},
	{}
};

$MethodInfo _PNGImageDecoder$Chromaticities_MethodInfo_[] = {
	{"<init>", "(IIIIIIII)V", nullptr, 0, $method(static_cast<void(PNGImageDecoder$Chromaticities::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&PNGImageDecoder$Chromaticities::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PNGImageDecoder$Chromaticities_InnerClassesInfo_[] = {
	{"sun.awt.image.PNGImageDecoder$Chromaticities", "sun.awt.image.PNGImageDecoder", "Chromaticities", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PNGImageDecoder$Chromaticities_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PNGImageDecoder$Chromaticities",
	"java.lang.Object",
	nullptr,
	_PNGImageDecoder$Chromaticities_FieldInfo_,
	_PNGImageDecoder$Chromaticities_MethodInfo_,
	nullptr,
	nullptr,
	_PNGImageDecoder$Chromaticities_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PNGImageDecoder"
};

$Object* allocate$PNGImageDecoder$Chromaticities($Class* clazz) {
	return $of($alloc(PNGImageDecoder$Chromaticities));
}

void PNGImageDecoder$Chromaticities::init$(int32_t wx, int32_t wy, int32_t rx, int32_t ry, int32_t gx, int32_t gy, int32_t bx, int32_t by) {
	this->whiteX = wx / 100000.0f;
	this->whiteY = wy / 100000.0f;
	this->redX = rx / 100000.0f;
	this->redY = ry / 100000.0f;
	this->greenX = gx / 100000.0f;
	this->greenY = gy / 100000.0f;
	this->blueX = bx / 100000.0f;
	this->blueY = by / 100000.0f;
}

$String* PNGImageDecoder$Chromaticities::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"Chromaticities(white="_s, $$str(this->whiteX), ","_s, $$str(this->whiteY), ";red="_s, $$str(this->redX), ","_s, $$str(this->redY), ";green="_s, $$str(this->greenX), ","_s, $$str(this->greenY), ";blue="_s, $$str(this->blueX), ","_s, $$str(this->blueY), 
	")"_s});
}

PNGImageDecoder$Chromaticities::PNGImageDecoder$Chromaticities() {
}

$Class* PNGImageDecoder$Chromaticities::load$($String* name, bool initialize) {
	$loadClass(PNGImageDecoder$Chromaticities, name, initialize, &_PNGImageDecoder$Chromaticities_ClassInfo_, allocate$PNGImageDecoder$Chromaticities);
	return class$;
}

$Class* PNGImageDecoder$Chromaticities::class$ = nullptr;

		} // image
	} // awt
} // sun