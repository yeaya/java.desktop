#include <java/awt/color/ColorSpace$BuiltInSpace.h>

#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef GRAY
#undef LRGB
#undef PYCC
#undef SRGB
#undef XYZ

using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace java {
	namespace awt {
		namespace color {

$FieldInfo _ColorSpace$BuiltInSpace_FieldInfo_[] = {
	{"SRGB", "Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorSpace$BuiltInSpace, SRGB)},
	{"LRGB", "Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorSpace$BuiltInSpace, LRGB)},
	{"XYZ", "Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorSpace$BuiltInSpace, XYZ)},
	{"PYCC", "Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorSpace$BuiltInSpace, PYCC)},
	{"GRAY", "Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorSpace$BuiltInSpace, GRAY)},
	{}
};

$InnerClassInfo _ColorSpace$BuiltInSpace_InnerClassesInfo_[] = {
	{"java.awt.color.ColorSpace$BuiltInSpace", "java.awt.color.ColorSpace", "BuiltInSpace", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ColorSpace$BuiltInSpace_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.awt.color.ColorSpace$BuiltInSpace",
	nullptr,
	nullptr,
	_ColorSpace$BuiltInSpace_FieldInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ColorSpace$BuiltInSpace_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.color.ColorSpace"
};

$Object* allocate$ColorSpace$BuiltInSpace($Class* clazz) {
	return $of($alloc(ColorSpace$BuiltInSpace));
}

$ColorSpace* ColorSpace$BuiltInSpace::SRGB = nullptr;
$ColorSpace* ColorSpace$BuiltInSpace::LRGB = nullptr;
$ColorSpace* ColorSpace$BuiltInSpace::XYZ = nullptr;
$ColorSpace* ColorSpace$BuiltInSpace::PYCC = nullptr;
$ColorSpace* ColorSpace$BuiltInSpace::GRAY = nullptr;

void clinit$ColorSpace$BuiltInSpace($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ColorSpace$BuiltInSpace::SRGB, $new($ICC_ColorSpace, $($ICC_Profile::getInstance(1000))));
	$assignStatic(ColorSpace$BuiltInSpace::LRGB, $new($ICC_ColorSpace, $($ICC_Profile::getInstance(1004))));
	$assignStatic(ColorSpace$BuiltInSpace::XYZ, $new($ICC_ColorSpace, $($ICC_Profile::getInstance(1001))));
	$assignStatic(ColorSpace$BuiltInSpace::PYCC, $new($ICC_ColorSpace, $($ICC_Profile::getInstance(1002))));
	$assignStatic(ColorSpace$BuiltInSpace::GRAY, $new($ICC_ColorSpace, $($ICC_Profile::getInstance(1003))));
}

$Class* ColorSpace$BuiltInSpace::load$($String* name, bool initialize) {
	$loadClass(ColorSpace$BuiltInSpace, name, initialize, &_ColorSpace$BuiltInSpace_ClassInfo_, clinit$ColorSpace$BuiltInSpace, allocate$ColorSpace$BuiltInSpace);
	return class$;
}

$Class* ColorSpace$BuiltInSpace::class$ = nullptr;

		} // color
	} // awt
} // java