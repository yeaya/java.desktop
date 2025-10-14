#include <sun/java2d/cmm/ColorTransform.h>

#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BufferedImage = ::java::awt::image::BufferedImage;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace cmm {

$FieldInfo _ColorTransform_FieldInfo_[] = {
	{"Any", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, Any)},
	{"In", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, In)},
	{"Out", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, Out)},
	{"Gamut", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, Gamut)},
	{"Simulation", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, Simulation)},
	{}
};

$MethodInfo _ColorTransform_MethodInfo_[] = {
	{"colorConvert", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"colorConvert", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;[F[F[F[F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"colorConvert", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"colorConvert", "([S[S)[S", nullptr, $PUBLIC | $ABSTRACT},
	{"colorConvert", "([B[B)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getNumInComponents", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNumOutComponents", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ColorTransform_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.cmm.ColorTransform",
	nullptr,
	nullptr,
	_ColorTransform_FieldInfo_,
	_ColorTransform_MethodInfo_
};

$Object* allocate$ColorTransform($Class* clazz) {
	return $of($alloc(ColorTransform));
}

$Class* ColorTransform::load$($String* name, bool initialize) {
	$loadClass(ColorTransform, name, initialize, &_ColorTransform_ClassInfo_, allocate$ColorTransform);
	return class$;
}

$Class* ColorTransform::class$ = nullptr;

		} // cmm
	} // java2d
} // sun