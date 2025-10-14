#include <sun/font/GlyphLayout$SDCache$SDKey.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/GlyphLayout$SDCache.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphLayout$SDCache = ::sun::font::GlyphLayout$SDCache;

namespace sun {
	namespace font {

$FieldInfo _GlyphLayout$SDCache$SDKey_FieldInfo_[] = {
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE | $FINAL, $field(GlyphLayout$SDCache$SDKey, font)},
	{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $FINAL, $field(GlyphLayout$SDCache$SDKey, frc)},
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(GlyphLayout$SDCache$SDKey, hash)},
	{}
};

$MethodInfo _GlyphLayout$SDCache$SDKey_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)V", nullptr, 0, $method(static_cast<void(GlyphLayout$SDCache$SDKey::*)($Font*,$FontRenderContext*)>(&GlyphLayout$SDCache$SDKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GlyphLayout$SDCache$SDKey_InnerClassesInfo_[] = {
	{"sun.font.GlyphLayout$SDCache", "sun.font.GlyphLayout", "SDCache", $PRIVATE | $STATIC | $FINAL},
	{"sun.font.GlyphLayout$SDCache$SDKey", "sun.font.GlyphLayout$SDCache", "SDKey", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _GlyphLayout$SDCache$SDKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.GlyphLayout$SDCache$SDKey",
	"java.lang.Object",
	nullptr,
	_GlyphLayout$SDCache$SDKey_FieldInfo_,
	_GlyphLayout$SDCache$SDKey_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphLayout$SDCache$SDKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.GlyphLayout"
};

$Object* allocate$GlyphLayout$SDCache$SDKey($Class* clazz) {
	return $of($alloc(GlyphLayout$SDCache$SDKey));
}

void GlyphLayout$SDCache$SDKey::init$($Font* font, $FontRenderContext* frc) {
	$set(this, font, font);
	$set(this, frc, frc);
	int32_t var$0 = $nc(font)->hashCode();
	this->hash = var$0 ^ $nc(frc)->hashCode();
}

int32_t GlyphLayout$SDCache$SDKey::hashCode() {
	return this->hash;
}

bool GlyphLayout$SDCache$SDKey::equals(Object$* o) {
	try {
		$var(GlyphLayout$SDCache$SDKey, rhs, $cast(GlyphLayout$SDCache$SDKey, o));
		bool var$0 = this->hash == $nc(rhs)->hash && $nc(this->font)->equals(rhs->font);
		return var$0 && $nc(this->frc)->equals(rhs->frc);
	} catch ($ClassCastException&) {
		$catch();
	}
	return false;
}

GlyphLayout$SDCache$SDKey::GlyphLayout$SDCache$SDKey() {
}

$Class* GlyphLayout$SDCache$SDKey::load$($String* name, bool initialize) {
	$loadClass(GlyphLayout$SDCache$SDKey, name, initialize, &_GlyphLayout$SDCache$SDKey_ClassInfo_, allocate$GlyphLayout$SDCache$SDKey);
	return class$;
}

$Class* GlyphLayout$SDCache$SDKey::class$ = nullptr;

	} // font
} // sun