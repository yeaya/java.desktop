#include <sun/font/FontManager.h>

#include <java/awt/Font.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <jcpp.h>

#undef LOGICAL_FALLBACK
#undef NO_FALLBACK
#undef PHYSICAL_FALLBACK

using $Font2DArray = $Array<::sun::font::Font2D>;
using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;

namespace sun {
	namespace font {

$FieldInfo _FontManager_FieldInfo_[] = {
	{"NO_FALLBACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FontManager, NO_FALLBACK)},
	{"PHYSICAL_FALLBACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FontManager, PHYSICAL_FALLBACK)},
	{"LOGICAL_FALLBACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FontManager, LOGICAL_FALLBACK)},
	{}
};

$MethodInfo _FontManager_MethodInfo_[] = {
	{"createFont2D", "(Ljava/io/File;IZZLsun/font/CreatedFontTracker;)[Lsun/font/Font2D;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.FontFormatException"},
	{"deRegisterBadFont", "(Lsun/font/Font2D;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"findFont2D", "(Ljava/lang/String;II)Lsun/font/Font2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNewComposite", "(Ljava/lang/String;ILsun/font/Font2DHandle;)Lsun/font/Font2DHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"preferLocaleFonts", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"preferProportionalFonts", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"registerFont", "(Ljava/awt/Font;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FontManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.font.FontManager",
	nullptr,
	nullptr,
	_FontManager_FieldInfo_,
	_FontManager_MethodInfo_
};

$Object* allocate$FontManager($Class* clazz) {
	return $of($alloc(FontManager));
}

$Class* FontManager::load$($String* name, bool initialize) {
	$loadClass(FontManager, name, initialize, &_FontManager_ClassInfo_, allocate$FontManager);
	return class$;
}

$Class* FontManager::class$ = nullptr;

	} // font
} // sun