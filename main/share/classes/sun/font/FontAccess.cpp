#include <sun/font/FontAccess.h>

#include <java/awt/Font.h>
#include <java/awt/peer/FontPeer.h>
#include <java/lang/InternalError.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontPeer = ::java::awt::peer::FontPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;

namespace sun {
	namespace font {

$FieldInfo _FontAccess_FieldInfo_[] = {
	{"access", "Lsun/font/FontAccess;", nullptr, $PRIVATE | $STATIC, $staticField(FontAccess, access)},
	{}
};

$MethodInfo _FontAccess_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontAccess::*)()>(&FontAccess::init$))},
	{"getFont2D", "(Ljava/awt/Font;)Lsun/font/Font2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontAccess", "()Lsun/font/FontAccess;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<FontAccess*(*)()>(&FontAccess::getFontAccess))},
	{"getFontPeer", "(Ljava/awt/Font;)Ljava/awt/peer/FontPeer;", nullptr, $PUBLIC | $ABSTRACT},
	{"isCreatedFont", "(Ljava/awt/Font;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setCreatedFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFont2D", "(Ljava/awt/Font;Lsun/font/Font2DHandle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFontAccess", "(Lsun/font/FontAccess;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(FontAccess*)>(&FontAccess::setFontAccess))},
	{}
};

$ClassInfo _FontAccess_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.FontAccess",
	"java.lang.Object",
	nullptr,
	_FontAccess_FieldInfo_,
	_FontAccess_MethodInfo_
};

$Object* allocate$FontAccess($Class* clazz) {
	return $of($alloc(FontAccess));
}

FontAccess* FontAccess::access = nullptr;

void FontAccess::init$() {
}

void FontAccess::setFontAccess(FontAccess* acc) {
	$load(FontAccess);
	$synchronized(class$) {
		$init(FontAccess);
		if (FontAccess::access != nullptr) {
			$throwNew($InternalError, "Attempt to set FontAccessor twice"_s);
		}
		$assignStatic(FontAccess::access, acc);
	}
}

FontAccess* FontAccess::getFontAccess() {
	$load(FontAccess);
	$synchronized(class$) {
		$init(FontAccess);
		return FontAccess::access;
	}
}

FontAccess::FontAccess() {
}

$Class* FontAccess::load$($String* name, bool initialize) {
	$loadClass(FontAccess, name, initialize, &_FontAccess_ClassInfo_, allocate$FontAccess);
	return class$;
}

$Class* FontAccess::class$ = nullptr;

	} // font
} // sun