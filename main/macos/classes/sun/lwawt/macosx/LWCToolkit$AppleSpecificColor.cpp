#include <sun/lwawt/macosx/LWCToolkit$AppleSpecificColor.h>

#include <java/awt/Color.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _LWCToolkit$AppleSpecificColor_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(LWCToolkit$AppleSpecificColor, index)},
	{}
};

$MethodInfo _LWCToolkit$AppleSpecificColor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(LWCToolkit$AppleSpecificColor::*)(int32_t)>(&LWCToolkit$AppleSpecificColor::init$))},
	{"getRGB", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWCToolkit$AppleSpecificColor_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.LWCToolkit$AppleSpecificColor", "sun.lwawt.macosx.LWCToolkit", "AppleSpecificColor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LWCToolkit$AppleSpecificColor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.LWCToolkit$AppleSpecificColor",
	"java.awt.Color",
	nullptr,
	_LWCToolkit$AppleSpecificColor_FieldInfo_,
	_LWCToolkit$AppleSpecificColor_MethodInfo_,
	nullptr,
	nullptr,
	_LWCToolkit$AppleSpecificColor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.LWCToolkit"
};

$Object* allocate$LWCToolkit$AppleSpecificColor($Class* clazz) {
	return $of($alloc(LWCToolkit$AppleSpecificColor));
}

void LWCToolkit$AppleSpecificColor::init$(int32_t index) {
	$init($LWCToolkit);
	$Color::init$($nc($LWCToolkit::appleColors)->get(index));
	this->index = index;
}

int32_t LWCToolkit$AppleSpecificColor::getRGB() {
	$init($LWCToolkit);
	return $nc($LWCToolkit::appleColors)->get(this->index);
}

LWCToolkit$AppleSpecificColor::LWCToolkit$AppleSpecificColor() {
}

$Class* LWCToolkit$AppleSpecificColor::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$AppleSpecificColor, name, initialize, &_LWCToolkit$AppleSpecificColor_ClassInfo_, allocate$LWCToolkit$AppleSpecificColor);
	return class$;
}

$Class* LWCToolkit$AppleSpecificColor::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun