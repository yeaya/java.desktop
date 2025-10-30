#include <sun/java2d/loops/PixelWriter.h>

#include <java/awt/image/WritableRaster.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _PixelWriter_FieldInfo_[] = {
	{"dstRast", "Ljava/awt/image/WritableRaster;", nullptr, $PROTECTED, $field(PixelWriter, dstRast)},
	{}
};

$MethodInfo _PixelWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PixelWriter::*)()>(&PixelWriter::init$))},
	{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC},
	{"writePixel", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PixelWriter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.java2d.loops.PixelWriter",
	"java.lang.Object",
	nullptr,
	_PixelWriter_FieldInfo_,
	_PixelWriter_MethodInfo_
};

$Object* allocate$PixelWriter($Class* clazz) {
	return $of($alloc(PixelWriter));
}

void PixelWriter::init$() {
}

void PixelWriter::setRaster($WritableRaster* dstRast) {
	$set(this, dstRast, dstRast);
}

PixelWriter::PixelWriter() {
}

$Class* PixelWriter::load$($String* name, bool initialize) {
	$loadClass(PixelWriter, name, initialize, &_PixelWriter_ClassInfo_, allocate$PixelWriter);
	return class$;
}

$Class* PixelWriter::class$ = nullptr;

		} // loops
	} // java2d
} // sun