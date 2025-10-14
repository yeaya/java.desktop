#include <sun/awt/image/ImagingLib.h>

#include <java/awt/Image.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ByteLookupTable.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ConvolveOp.h>
#include <java/awt/image/Kernel.h>
#include <java/awt/image/LookupOp.h>
#include <java/awt/image/LookupTable.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterOp.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/image/ImagingLib$1.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef AFFINE_OP
#undef CONVOLVE_OP
#undef LOOKUP_OP
#undef NUM_NATIVE_OPS

using $byteArray2 = $Array<int8_t, 2>;
using $Image = ::java::awt::Image;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ByteLookupTable = ::java::awt::image::ByteLookupTable;
using $ColorModel = ::java::awt::image::ColorModel;
using $ConvolveOp = ::java::awt::image::ConvolveOp;
using $Kernel = ::java::awt::image::Kernel;
using $LookupOp = ::java::awt::image::LookupOp;
using $LookupTable = ::java::awt::image::LookupTable;
using $Raster = ::java::awt::image::Raster;
using $RasterOp = ::java::awt::image::RasterOp;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ImagingLib$1 = ::sun::awt::image::ImagingLib$1;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImagingLib_FieldInfo_[] = {
	{"useLib", "Z", nullptr, $STATIC, $staticField(ImagingLib, useLib)},
	{"verbose", "Z", nullptr, $STATIC, $staticField(ImagingLib, verbose)},
	{"NUM_NATIVE_OPS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImagingLib, NUM_NATIVE_OPS)},
	{"LOOKUP_OP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImagingLib, LOOKUP_OP)},
	{"AFFINE_OP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImagingLib, AFFINE_OP)},
	{"CONVOLVE_OP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImagingLib, CONVOLVE_OP)},
	{"nativeOpClass", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticField(ImagingLib, nativeOpClass)},
	{}
};

$MethodInfo _ImagingLib_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImagingLib::*)()>(&ImagingLib::init$))},
	{"convolveBI", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;Ljava/awt/image/Kernel;I)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($BufferedImage*,$BufferedImage*,$Kernel*,int32_t)>(&ImagingLib::convolveBI))},
	{"convolveRaster", "(Ljava/awt/image/Raster;Ljava/awt/image/Raster;Ljava/awt/image/Kernel;I)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($Raster*,$Raster*,$Kernel*,int32_t)>(&ImagingLib::convolveRaster))},
	{"filter", "(Ljava/awt/image/RasterOp;Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)($RasterOp*,$Raster*,$WritableRaster*)>(&ImagingLib::filter))},
	{"filter", "(Ljava/awt/image/BufferedImageOp;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BufferedImage*(*)($BufferedImageOp*,$BufferedImage*,$BufferedImage*)>(&ImagingLib::filter))},
	{"getNativeOpIndex", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Class*)>(&ImagingLib::getNativeOpIndex))},
	{"init", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&ImagingLib::init))},
	{"lookupByteBI", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;[[B)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($BufferedImage*,$BufferedImage*,$byteArray2*)>(&ImagingLib::lookupByteBI))},
	{"lookupByteRaster", "(Ljava/awt/image/Raster;Ljava/awt/image/Raster;[[B)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($Raster*,$Raster*,$byteArray2*)>(&ImagingLib::lookupByteRaster))},
	{"transformBI", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;[DI)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($BufferedImage*,$BufferedImage*,$doubles*,int32_t)>(&ImagingLib::transformBI))},
	{"transformRaster", "(Ljava/awt/image/Raster;Ljava/awt/image/Raster;[DI)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($Raster*,$Raster*,$doubles*,int32_t)>(&ImagingLib::transformRaster))},
	{}
};

#define _METHOD_INDEX_convolveBI 1
#define _METHOD_INDEX_convolveRaster 2
#define _METHOD_INDEX_init 6
#define _METHOD_INDEX_lookupByteBI 7
#define _METHOD_INDEX_lookupByteRaster 8
#define _METHOD_INDEX_transformBI 9
#define _METHOD_INDEX_transformRaster 10

$InnerClassInfo _ImagingLib_InnerClassesInfo_[] = {
	{"sun.awt.image.ImagingLib$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImagingLib_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ImagingLib",
	"java.lang.Object",
	nullptr,
	_ImagingLib_FieldInfo_,
	_ImagingLib_MethodInfo_,
	nullptr,
	nullptr,
	_ImagingLib_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.ImagingLib$1"
};

$Object* allocate$ImagingLib($Class* clazz) {
	return $of($alloc(ImagingLib));
}

bool ImagingLib::useLib = false;
bool ImagingLib::verbose = false;
$ClassArray* ImagingLib::nativeOpClass = nullptr;

void ImagingLib::init$() {
}

bool ImagingLib::init() {
	$init(ImagingLib);
	bool $ret = false;
	$prepareNativeStatic(ImagingLib, init, bool);
	$ret = $invokeNativeStatic(ImagingLib, init);
	$finishNativeStatic();
	return $ret;
}

int32_t ImagingLib::transformBI($BufferedImage* src, $BufferedImage* dst, $doubles* matrix, int32_t interpType) {
	$init(ImagingLib);
	int32_t $ret = 0;
	$prepareNativeStatic(ImagingLib, transformBI, int32_t, $BufferedImage* src, $BufferedImage* dst, $doubles* matrix, int32_t interpType);
	$ret = $invokeNativeStatic(ImagingLib, transformBI, src, dst, matrix, interpType);
	$finishNativeStatic();
	return $ret;
}

int32_t ImagingLib::transformRaster($Raster* src, $Raster* dst, $doubles* matrix, int32_t interpType) {
	$init(ImagingLib);
	int32_t $ret = 0;
	$prepareNativeStatic(ImagingLib, transformRaster, int32_t, $Raster* src, $Raster* dst, $doubles* matrix, int32_t interpType);
	$ret = $invokeNativeStatic(ImagingLib, transformRaster, src, dst, matrix, interpType);
	$finishNativeStatic();
	return $ret;
}

int32_t ImagingLib::convolveBI($BufferedImage* src, $BufferedImage* dst, $Kernel* kernel, int32_t edgeHint) {
	$init(ImagingLib);
	int32_t $ret = 0;
	$prepareNativeStatic(ImagingLib, convolveBI, int32_t, $BufferedImage* src, $BufferedImage* dst, $Kernel* kernel, int32_t edgeHint);
	$ret = $invokeNativeStatic(ImagingLib, convolveBI, src, dst, kernel, edgeHint);
	$finishNativeStatic();
	return $ret;
}

int32_t ImagingLib::convolveRaster($Raster* src, $Raster* dst, $Kernel* kernel, int32_t edgeHint) {
	$init(ImagingLib);
	int32_t $ret = 0;
	$prepareNativeStatic(ImagingLib, convolveRaster, int32_t, $Raster* src, $Raster* dst, $Kernel* kernel, int32_t edgeHint);
	$ret = $invokeNativeStatic(ImagingLib, convolveRaster, src, dst, kernel, edgeHint);
	$finishNativeStatic();
	return $ret;
}

int32_t ImagingLib::lookupByteBI($BufferedImage* src, $BufferedImage* dst, $byteArray2* table) {
	$init(ImagingLib);
	int32_t $ret = 0;
	$prepareNativeStatic(ImagingLib, lookupByteBI, int32_t, $BufferedImage* src, $BufferedImage* dst, $byteArray2* table);
	$ret = $invokeNativeStatic(ImagingLib, lookupByteBI, src, dst, table);
	$finishNativeStatic();
	return $ret;
}

int32_t ImagingLib::lookupByteRaster($Raster* src, $Raster* dst, $byteArray2* table) {
	$init(ImagingLib);
	int32_t $ret = 0;
	$prepareNativeStatic(ImagingLib, lookupByteRaster, int32_t, $Raster* src, $Raster* dst, $byteArray2* table);
	$ret = $invokeNativeStatic(ImagingLib, lookupByteRaster, src, dst, table);
	$finishNativeStatic();
	return $ret;
}

int32_t ImagingLib::getNativeOpIndex($Class* opClass) {
	$init(ImagingLib);
	int32_t opIndex = -1;
	for (int32_t i = 0; i < ImagingLib::NUM_NATIVE_OPS; ++i) {
		if (opClass == $nc(ImagingLib::nativeOpClass)->get(i)) {
			opIndex = i;
			break;
		}
	}
	return opIndex;
}

$WritableRaster* ImagingLib::filter($RasterOp* op, $Raster* src, $WritableRaster* dst$renamed) {
	$init(ImagingLib);
	$var($WritableRaster, dst, dst$renamed);
	if (ImagingLib::useLib == false) {
		return nullptr;
	}
	if (dst == nullptr) {
		$assign(dst, $nc(op)->createCompatibleDestRaster(src));
	}
	$var($WritableRaster, retRaster, nullptr);
	{
		$var($LookupTable, table, nullptr)
		$var($AffineTransformOp, bOp, nullptr)
		$var($doubles, matrix, nullptr)
		$var($ConvolveOp, cOp, nullptr)
		switch (getNativeOpIndex($nc($of(op))->getClass())) {
		case ImagingLib::LOOKUP_OP:
			{
				$assign(table, $nc(($cast($LookupOp, op)))->getTable());
				if ($nc(table)->getOffset() != 0) {
					return nullptr;
				}
				if ($instanceOf($ByteLookupTable, table)) {
					$var($ByteLookupTable, bt, $cast($ByteLookupTable, table));
					if (lookupByteRaster(src, dst, $($nc(bt)->getTable())) > 0) {
						$assign(retRaster, dst);
					}
				}
				break;
			}
		case ImagingLib::AFFINE_OP:
			{
				$assign(bOp, $cast($AffineTransformOp, op));
				$assign(matrix, $new($doubles, 6));
				$nc($($nc(bOp)->getTransform()))->getMatrix(matrix);
				if (transformRaster(src, dst, matrix, $nc(bOp)->getInterpolationType()) > 0) {
					$assign(retRaster, dst);
				}
				break;
			}
		case ImagingLib::CONVOLVE_OP:
			{
				$assign(cOp, $cast($ConvolveOp, op));
				$var($Raster, var$0, src);
				$var($Raster, var$1, static_cast<$Raster*>(dst));
				$var($Kernel, var$2, $nc(cOp)->getKernel());
				if (convolveRaster(var$0, var$1, var$2, cOp->getEdgeCondition()) > 0) {
					$assign(retRaster, dst);
				}
				break;
			}
		default:
			{
				break;
			}
		}
	}
	if (retRaster != nullptr) {
		$SunWritableRaster::markDirty(retRaster);
	}
	return retRaster;
}

$BufferedImage* ImagingLib::filter($BufferedImageOp* op, $BufferedImage* src, $BufferedImage* dst$renamed) {
	$init(ImagingLib);
	$var($BufferedImage, dst, dst$renamed);
	if (ImagingLib::verbose) {
		$init($System);
		$nc($System::out)->println($$str({"in filter and op is "_s, op, "bufimage is "_s, src, " and "_s, dst}));
	}
	if (ImagingLib::useLib == false) {
		return nullptr;
	}
	if (dst == nullptr) {
		$assign(dst, $nc(op)->createCompatibleDestImage(src, nullptr));
	}
	$var($BufferedImage, retBI, nullptr);
	{
		$var($LookupTable, table, nullptr)
		$var($AffineTransformOp, bOp, nullptr)
		$var($doubles, matrix, nullptr)
		$var($AffineTransform, xform, nullptr)
		$var($ConvolveOp, cOp, nullptr)
		switch (getNativeOpIndex($nc($of(op))->getClass())) {
		case ImagingLib::LOOKUP_OP:
			{
				$assign(table, $nc(($cast($LookupOp, op)))->getTable());
				if ($nc(table)->getOffset() != 0) {
					return nullptr;
				}
				if ($instanceOf($ByteLookupTable, table)) {
					$var($ByteLookupTable, bt, $cast($ByteLookupTable, table));
					if (lookupByteBI(src, dst, $($nc(bt)->getTable())) > 0) {
						$assign(retBI, dst);
					}
				}
				break;
			}
		case ImagingLib::AFFINE_OP:
			{
				$assign(bOp, $cast($AffineTransformOp, op));
				$assign(matrix, $new($doubles, 6));
				$assign(xform, $nc(bOp)->getTransform());
				$nc($(bOp->getTransform()))->getMatrix(matrix);
				if (transformBI(src, dst, matrix, bOp->getInterpolationType()) > 0) {
					$assign(retBI, dst);
				}
				break;
			}
		case ImagingLib::CONVOLVE_OP:
			{
				$assign(cOp, $cast($ConvolveOp, op));
				$var($BufferedImage, var$0, src);
				$var($BufferedImage, var$1, dst);
				$var($Kernel, var$2, $nc(cOp)->getKernel());
				if (convolveBI(var$0, var$1, var$2, cOp->getEdgeCondition()) > 0) {
					$assign(retBI, dst);
				}
				break;
			}
		default:
			{
				break;
			}
		}
	}
	if (retBI != nullptr) {
		$SunWritableRaster::markDirty(static_cast<$Image*>(retBI));
	}
	return retBI;
}

void clinit$ImagingLib($Class* class$) {
	$beforeCallerSensitive();
	ImagingLib::useLib = true;
	ImagingLib::verbose = false;
	$assignStatic(ImagingLib::nativeOpClass, $new($ClassArray, ImagingLib::NUM_NATIVE_OPS));
	{
		$var($PrivilegedAction, doMlibInitialization, $new($ImagingLib$1));
		ImagingLib::useLib = $nc(($cast($Boolean, $($AccessController::doPrivileged(doMlibInitialization)))))->booleanValue();
		try {
			$nc(ImagingLib::nativeOpClass)->set(ImagingLib::LOOKUP_OP, $Class::forName("java.awt.image.LookupOp"_s));
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, e, $catch());
			$init($System);
			$nc($System::err)->println($$str({"Could not find class: "_s, e}));
		}
		try {
			$nc(ImagingLib::nativeOpClass)->set(ImagingLib::AFFINE_OP, $Class::forName("java.awt.image.AffineTransformOp"_s));
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, e, $catch());
			$init($System);
			$nc($System::err)->println($$str({"Could not find class: "_s, e}));
		}
		try {
			$nc(ImagingLib::nativeOpClass)->set(ImagingLib::CONVOLVE_OP, $Class::forName("java.awt.image.ConvolveOp"_s));
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, e, $catch());
			$init($System);
			$nc($System::err)->println($$str({"Could not find class: "_s, e}));
		}
	}
}

ImagingLib::ImagingLib() {
}

$Class* ImagingLib::load$($String* name, bool initialize) {
	$loadClass(ImagingLib, name, initialize, &_ImagingLib_ClassInfo_, clinit$ImagingLib, allocate$ImagingLib);
	return class$;
}

$Class* ImagingLib::class$ = nullptr;

		} // image
	} // awt
} // sun