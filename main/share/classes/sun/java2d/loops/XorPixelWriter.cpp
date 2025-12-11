#include <sun/java2d/loops/XorPixelWriter.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _XorPixelWriter_FieldInfo_[] = {
	{"dstCM", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(XorPixelWriter, dstCM)},
	{}
};

$MethodInfo _XorPixelWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XorPixelWriter::*)()>(&XorPixelWriter::init$))},
	{"writePixel", "(II)V", nullptr, $PUBLIC},
	{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _XorPixelWriter_InnerClassesInfo_[] = {
	{"sun.java2d.loops.XorPixelWriter$DoubleData", "sun.java2d.loops.XorPixelWriter", "DoubleData", $PUBLIC | $STATIC},
	{"sun.java2d.loops.XorPixelWriter$FloatData", "sun.java2d.loops.XorPixelWriter", "FloatData", $PUBLIC | $STATIC},
	{"sun.java2d.loops.XorPixelWriter$IntData", "sun.java2d.loops.XorPixelWriter", "IntData", $PUBLIC | $STATIC},
	{"sun.java2d.loops.XorPixelWriter$ShortData", "sun.java2d.loops.XorPixelWriter", "ShortData", $PUBLIC | $STATIC},
	{"sun.java2d.loops.XorPixelWriter$ByteData", "sun.java2d.loops.XorPixelWriter", "ByteData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XorPixelWriter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.java2d.loops.XorPixelWriter",
	"sun.java2d.loops.PixelWriter",
	nullptr,
	_XorPixelWriter_FieldInfo_,
	_XorPixelWriter_MethodInfo_,
	nullptr,
	nullptr,
	_XorPixelWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.XorPixelWriter$DoubleData,sun.java2d.loops.XorPixelWriter$FloatData,sun.java2d.loops.XorPixelWriter$IntData,sun.java2d.loops.XorPixelWriter$ShortData,sun.java2d.loops.XorPixelWriter$ByteData"
};

$Object* allocate$XorPixelWriter($Class* clazz) {
	return $of($alloc(XorPixelWriter));
}

void XorPixelWriter::init$() {
	$PixelWriter::init$();
}

void XorPixelWriter::writePixel(int32_t x, int32_t y) {
	$var($Object, dstPixel, $nc(this->dstRast)->getDataElements(x, y, nullptr));
	xorPixel(dstPixel);
	$nc(this->dstRast)->setDataElements(x, y, dstPixel);
}

XorPixelWriter::XorPixelWriter() {
}

$Class* XorPixelWriter::load$($String* name, bool initialize) {
	$loadClass(XorPixelWriter, name, initialize, &_XorPixelWriter_ClassInfo_, allocate$XorPixelWriter);
	return class$;
}

$Class* XorPixelWriter::class$ = nullptr;

		} // loops
	} // java2d
} // sun