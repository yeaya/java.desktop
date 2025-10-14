#include <sun/java2d/loops/SolidPixelWriter.h>

#include <java/awt/image/WritableRaster.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _SolidPixelWriter_FieldInfo_[] = {
	{"srcData", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(SolidPixelWriter, srcData)},
	{}
};

$MethodInfo _SolidPixelWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(SolidPixelWriter::*)(Object$*)>(&SolidPixelWriter::init$))},
	{"writePixel", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SolidPixelWriter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.SolidPixelWriter",
	"sun.java2d.loops.PixelWriter",
	nullptr,
	_SolidPixelWriter_FieldInfo_,
	_SolidPixelWriter_MethodInfo_
};

$Object* allocate$SolidPixelWriter($Class* clazz) {
	return $of($alloc(SolidPixelWriter));
}

void SolidPixelWriter::init$(Object$* srcPixel) {
	$PixelWriter::init$();
	$set(this, srcData, srcPixel);
}

void SolidPixelWriter::writePixel(int32_t x, int32_t y) {
	$nc(this->dstRast)->setDataElements(x, y, this->srcData);
}

SolidPixelWriter::SolidPixelWriter() {
}

$Class* SolidPixelWriter::load$($String* name, bool initialize) {
	$loadClass(SolidPixelWriter, name, initialize, &_SolidPixelWriter_ClassInfo_, allocate$SolidPixelWriter);
	return class$;
}

$Class* SolidPixelWriter::class$ = nullptr;

		} // loops
	} // java2d
} // sun