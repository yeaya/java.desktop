#include <sun/font/FontDesignMetrics$MetricsKey.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <sun/font/FontDesignMetrics.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _FontDesignMetrics$MetricsKey_FieldInfo_[] = {
	{"font", "Ljava/awt/Font;", nullptr, 0, $field(FontDesignMetrics$MetricsKey, font)},
	{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, 0, $field(FontDesignMetrics$MetricsKey, frc)},
	{"hash", "I", nullptr, 0, $field(FontDesignMetrics$MetricsKey, hash)},
	{"key", "Lsun/font/FontDesignMetrics$MetricsKey;", nullptr, $STATIC | $FINAL, $staticField(FontDesignMetrics$MetricsKey, key)},
	{}
};

$MethodInfo _FontDesignMetrics$MetricsKey_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FontDesignMetrics$MetricsKey::*)()>(&FontDesignMetrics$MetricsKey::init$))},
	{"<init>", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)V", nullptr, 0, $method(static_cast<void(FontDesignMetrics$MetricsKey::*)($Font*,$FontRenderContext*)>(&FontDesignMetrics$MetricsKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"init", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)V", nullptr, 0},
	{}
};

$InnerClassInfo _FontDesignMetrics$MetricsKey_InnerClassesInfo_[] = {
	{"sun.font.FontDesignMetrics$MetricsKey", "sun.font.FontDesignMetrics", "MetricsKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FontDesignMetrics$MetricsKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FontDesignMetrics$MetricsKey",
	"java.lang.Object",
	nullptr,
	_FontDesignMetrics$MetricsKey_FieldInfo_,
	_FontDesignMetrics$MetricsKey_MethodInfo_,
	nullptr,
	nullptr,
	_FontDesignMetrics$MetricsKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FontDesignMetrics"
};

$Object* allocate$FontDesignMetrics$MetricsKey($Class* clazz) {
	return $of($alloc(FontDesignMetrics$MetricsKey));
}

FontDesignMetrics$MetricsKey* FontDesignMetrics$MetricsKey::key = nullptr;

void FontDesignMetrics$MetricsKey::init$() {
}

void FontDesignMetrics$MetricsKey::init$($Font* font, $FontRenderContext* frc) {
	init(font, frc);
}

void FontDesignMetrics$MetricsKey::init($Font* font, $FontRenderContext* frc) {
	$set(this, font, font);
	$set(this, frc, frc);
	int32_t var$0 = $nc(font)->hashCode();
	this->hash = var$0 + $nc(frc)->hashCode();
}

bool FontDesignMetrics$MetricsKey::equals(Object$* key) {
	if (!($instanceOf(FontDesignMetrics$MetricsKey, key))) {
		return false;
	}
	bool var$0 = $nc(this->font)->equals($nc(($cast(FontDesignMetrics$MetricsKey, key)))->font);
	return var$0 && $nc(this->frc)->equals($nc(($cast(FontDesignMetrics$MetricsKey, key)))->frc);
}

int32_t FontDesignMetrics$MetricsKey::hashCode() {
	return this->hash;
}

void clinit$FontDesignMetrics$MetricsKey($Class* class$) {
	$assignStatic(FontDesignMetrics$MetricsKey::key, $new(FontDesignMetrics$MetricsKey));
}

FontDesignMetrics$MetricsKey::FontDesignMetrics$MetricsKey() {
}

$Class* FontDesignMetrics$MetricsKey::load$($String* name, bool initialize) {
	$loadClass(FontDesignMetrics$MetricsKey, name, initialize, &_FontDesignMetrics$MetricsKey_ClassInfo_, clinit$FontDesignMetrics$MetricsKey, allocate$FontDesignMetrics$MetricsKey);
	return class$;
}

$Class* FontDesignMetrics$MetricsKey::class$ = nullptr;

	} // font
} // sun