#include <javax/swing/plaf/nimbus/NimbusDefaults$DerivedFont.h>

#include <java/awt/Font.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <jcpp.h>

#undef BOLD
#undef ITALIC

using $Font = ::java::awt::Font;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $NimbusDefaults = ::javax::swing::plaf::nimbus::NimbusDefaults;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusDefaults$DerivedFont_FieldInfo_[] = {
	{"sizeOffset", "F", nullptr, $PRIVATE, $field(NimbusDefaults$DerivedFont, sizeOffset)},
	{"bold", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(NimbusDefaults$DerivedFont, bold)},
	{"italic", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(NimbusDefaults$DerivedFont, italic)},
	{"parentKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusDefaults$DerivedFont, parentKey)},
	{}
};

$MethodInfo _NimbusDefaults$DerivedFont_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;FLjava/lang/Boolean;Ljava/lang/Boolean;)V", nullptr, $PUBLIC, $method(static_cast<void(NimbusDefaults$DerivedFont::*)($String*,float,$Boolean*,$Boolean*)>(&NimbusDefaults$DerivedFont::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusDefaults$DerivedFont_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusDefaults$DerivedFont", "javax.swing.plaf.nimbus.NimbusDefaults", "DerivedFont", $STATIC | $FINAL},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NimbusDefaults$DerivedFont_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusDefaults$DerivedFont",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_NimbusDefaults$DerivedFont_FieldInfo_,
	_NimbusDefaults$DerivedFont_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusDefaults$DerivedFont_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusDefaults"
};

$Object* allocate$NimbusDefaults$DerivedFont($Class* clazz) {
	return $of($alloc(NimbusDefaults$DerivedFont));
}

void NimbusDefaults$DerivedFont::init$($String* key, float sizeOffset, $Boolean* bold, $Boolean* italic) {
	if (key == nullptr) {
		$throwNew($IllegalArgumentException, "You must specify a key"_s);
	}
	$set(this, parentKey, key);
	this->sizeOffset = sizeOffset;
	$set(this, bold, bold);
	$set(this, italic, italic);
}

$Object* NimbusDefaults$DerivedFont::createValue($UIDefaults* defaults) {
	$var($Font, f, $nc(defaults)->getFont(this->parentKey));
	if (f != nullptr) {
		float size = (float)$Math::round(f->getSize2D() * this->sizeOffset);
		int32_t style = f->getStyle();
		if (this->bold != nullptr) {
			if ($nc(this->bold)->booleanValue()) {
				style = style | $Font::BOLD;
			} else {
				style = (int32_t)(style & (uint32_t)~$Font::BOLD);
			}
		}
		if (this->italic != nullptr) {
			if ($nc(this->italic)->booleanValue()) {
				style = style | $Font::ITALIC;
			} else {
				style = (int32_t)(style & (uint32_t)~$Font::ITALIC);
			}
		}
		return $of(f->deriveFont(style, size));
	} else {
		return $of(nullptr);
	}
}

NimbusDefaults$DerivedFont::NimbusDefaults$DerivedFont() {
}

$Class* NimbusDefaults$DerivedFont::load$($String* name, bool initialize) {
	$loadClass(NimbusDefaults$DerivedFont, name, initialize, &_NimbusDefaults$DerivedFont_ClassInfo_, allocate$NimbusDefaults$DerivedFont);
	return class$;
}

$Class* NimbusDefaults$DerivedFont::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax