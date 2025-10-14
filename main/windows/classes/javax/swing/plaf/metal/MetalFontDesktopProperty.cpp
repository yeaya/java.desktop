#include <javax/swing/plaf/metal/MetalFontDesktopProperty.h>

#include <java/awt/Font.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <sun/swing/plaf/DesktopProperty.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $DesktopProperty = ::sun::swing::plaf::DesktopProperty;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFontDesktopProperty_FieldInfo_[] = {
	{"propertyMapping", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalFontDesktopProperty, propertyMapping)},
	{"type", "I", nullptr, $PRIVATE, $field(MetalFontDesktopProperty, type)},
	{}
};

$MethodInfo _MetalFontDesktopProperty_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(MetalFontDesktopProperty::*)(int32_t)>(&MetalFontDesktopProperty::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(MetalFontDesktopProperty::*)($String*,int32_t)>(&MetalFontDesktopProperty::init$))},
	{"configureValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getDefaultValue", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MetalFontDesktopProperty_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalFontDesktopProperty",
	"sun.swing.plaf.DesktopProperty",
	nullptr,
	_MetalFontDesktopProperty_FieldInfo_,
	_MetalFontDesktopProperty_MethodInfo_
};

$Object* allocate$MetalFontDesktopProperty($Class* clazz) {
	return $of($alloc(MetalFontDesktopProperty));
}


$StringArray* MetalFontDesktopProperty::propertyMapping = nullptr;

void MetalFontDesktopProperty::init$(int32_t type) {
	MetalFontDesktopProperty::init$($nc(MetalFontDesktopProperty::propertyMapping)->get(type), type);
}

void MetalFontDesktopProperty::init$($String* key, int32_t type) {
	$DesktopProperty::init$(key, nullptr);
	this->type = type;
}

$Object* MetalFontDesktopProperty::configureValue(Object$* value$renamed) {
	$var($Object, value, value$renamed);
	if ($instanceOf($Integer, value)) {
		$var($String, var$0, $DefaultMetalTheme::getDefaultFontName(this->type));
		int32_t var$1 = $DefaultMetalTheme::getDefaultFontStyle(this->type);
		$assign(value, $new($Font, var$0, var$1, $nc(($cast($Integer, value)))->intValue()));
	}
	return $of($DesktopProperty::configureValue(value));
}

$Object* MetalFontDesktopProperty::getDefaultValue() {
	$var($String, var$0, $DefaultMetalTheme::getDefaultFontName(this->type));
	int32_t var$1 = $DefaultMetalTheme::getDefaultFontStyle(this->type);
	return $of($new($Font, var$0, var$1, $DefaultMetalTheme::getDefaultFontSize(this->type)));
}

void clinit$MetalFontDesktopProperty($Class* class$) {
	$assignStatic(MetalFontDesktopProperty::propertyMapping, $new($StringArray, {
		"win.ansiVar.font.height"_s,
		"win.tooltip.font.height"_s,
		"win.ansiVar.font.height"_s,
		"win.menu.font.height"_s,
		"win.frame.captionFont.height"_s,
		"win.menu.font.height"_s
	}));
}

MetalFontDesktopProperty::MetalFontDesktopProperty() {
}

$Class* MetalFontDesktopProperty::load$($String* name, bool initialize) {
	$loadClass(MetalFontDesktopProperty, name, initialize, &_MetalFontDesktopProperty_ClassInfo_, clinit$MetalFontDesktopProperty, allocate$MetalFontDesktopProperty);
	return class$;
}

$Class* MetalFontDesktopProperty::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax