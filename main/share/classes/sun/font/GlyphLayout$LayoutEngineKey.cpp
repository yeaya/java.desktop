#include <sun/font/GlyphLayout$LayoutEngineKey.h>

#include <java/lang/ClassCastException.h>
#include <sun/font/Font2D.h>
#include <sun/font/GlyphLayout.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $GlyphLayout = ::sun::font::GlyphLayout;

namespace sun {
	namespace font {

$FieldInfo _GlyphLayout$LayoutEngineKey_FieldInfo_[] = {
	{"font", "Lsun/font/Font2D;", nullptr, $PRIVATE, $field(GlyphLayout$LayoutEngineKey, font$)},
	{"script", "I", nullptr, $PRIVATE, $field(GlyphLayout$LayoutEngineKey, script$)},
	{"lang", "I", nullptr, $PRIVATE, $field(GlyphLayout$LayoutEngineKey, lang$)},
	{}
};

$MethodInfo _GlyphLayout$LayoutEngineKey_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GlyphLayout$LayoutEngineKey::*)()>(&GlyphLayout$LayoutEngineKey::init$))},
	{"<init>", "(Lsun/font/Font2D;II)V", nullptr, 0, $method(static_cast<void(GlyphLayout$LayoutEngineKey::*)($Font2D*,int32_t,int32_t)>(&GlyphLayout$LayoutEngineKey::init$))},
	{"copy", "()Lsun/font/GlyphLayout$LayoutEngineKey;", nullptr, 0, $method(static_cast<GlyphLayout$LayoutEngineKey*(GlyphLayout$LayoutEngineKey::*)()>(&GlyphLayout$LayoutEngineKey::copy))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"font", "()Lsun/font/Font2D;", nullptr, 0, $method(static_cast<$Font2D*(GlyphLayout$LayoutEngineKey::*)()>(&GlyphLayout$LayoutEngineKey::font))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"init", "(Lsun/font/Font2D;II)V", nullptr, 0, $method(static_cast<void(GlyphLayout$LayoutEngineKey::*)($Font2D*,int32_t,int32_t)>(&GlyphLayout$LayoutEngineKey::init))},
	{"lang", "()I", nullptr, 0, $method(static_cast<int32_t(GlyphLayout$LayoutEngineKey::*)()>(&GlyphLayout$LayoutEngineKey::lang))},
	{"script", "()I", nullptr, 0, $method(static_cast<int32_t(GlyphLayout$LayoutEngineKey::*)()>(&GlyphLayout$LayoutEngineKey::script))},
	{}
};

$InnerClassInfo _GlyphLayout$LayoutEngineKey_InnerClassesInfo_[] = {
	{"sun.font.GlyphLayout$LayoutEngineKey", "sun.font.GlyphLayout", "LayoutEngineKey", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _GlyphLayout$LayoutEngineKey_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.GlyphLayout$LayoutEngineKey",
	"java.lang.Object",
	nullptr,
	_GlyphLayout$LayoutEngineKey_FieldInfo_,
	_GlyphLayout$LayoutEngineKey_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphLayout$LayoutEngineKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.GlyphLayout"
};

$Object* allocate$GlyphLayout$LayoutEngineKey($Class* clazz) {
	return $of($alloc(GlyphLayout$LayoutEngineKey));
}

void GlyphLayout$LayoutEngineKey::init$() {
}

void GlyphLayout$LayoutEngineKey::init$($Font2D* font, int32_t script, int32_t lang) {
	init(font, script, lang);
}

void GlyphLayout$LayoutEngineKey::init($Font2D* font, int32_t script, int32_t lang) {
	$set(this, font$, font);
	this->script$ = script;
	this->lang$ = lang;
}

GlyphLayout$LayoutEngineKey* GlyphLayout$LayoutEngineKey::copy() {
	return $new(GlyphLayout$LayoutEngineKey, this->font$, this->script$, this->lang$);
}

$Font2D* GlyphLayout$LayoutEngineKey::font() {
	return this->font$;
}

int32_t GlyphLayout$LayoutEngineKey::script() {
	return this->script$;
}

int32_t GlyphLayout$LayoutEngineKey::lang() {
	return this->lang$;
}

bool GlyphLayout$LayoutEngineKey::equals(Object$* rhs) {
	if ($equals(this, rhs)) {
		return true;
	}
	if (rhs == nullptr) {
		return false;
	}
	try {
		$var(GlyphLayout$LayoutEngineKey, that, $cast(GlyphLayout$LayoutEngineKey, rhs));
		return this->script$ == $nc(that)->script$ && this->lang$ == that->lang$ && $nc($of(this->font$))->equals(that->font$);
	} catch ($ClassCastException& e) {
		return false;
	}
	$shouldNotReachHere();
}

int32_t GlyphLayout$LayoutEngineKey::hashCode() {
	return (this->script$ ^ this->lang$) ^ $nc($of(this->font$))->hashCode();
}

GlyphLayout$LayoutEngineKey::GlyphLayout$LayoutEngineKey() {
}

$Class* GlyphLayout$LayoutEngineKey::load$($String* name, bool initialize) {
	$loadClass(GlyphLayout$LayoutEngineKey, name, initialize, &_GlyphLayout$LayoutEngineKey_ClassInfo_, allocate$GlyphLayout$LayoutEngineKey);
	return class$;
}

$Class* GlyphLayout$LayoutEngineKey::class$ = nullptr;

	} // font
} // sun