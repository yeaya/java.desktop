#include <sun/swing/SwingUtilities2$LSBCacheEntry.h>

#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/lang/AssertionError.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef UNSET
#undef VALUE_TEXT_ANTIALIAS_LCD_HBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB

using $Font = ::java::awt::Font;
using $RenderingHints = ::java::awt::RenderingHints;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace sun {
	namespace swing {

$FieldInfo _SwingUtilities2$LSBCacheEntry_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SwingUtilities2$LSBCacheEntry, $assertionsDisabled)},
	{"UNSET", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingUtilities2$LSBCacheEntry, UNSET)},
	{"oneChar", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities2$LSBCacheEntry, oneChar)},
	{"lsbCache", "[B", nullptr, $PRIVATE, $field(SwingUtilities2$LSBCacheEntry, lsbCache)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(SwingUtilities2$LSBCacheEntry, font)},
	{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE, $field(SwingUtilities2$LSBCacheEntry, frc)},
	{}
};

$MethodInfo _SwingUtilities2$LSBCacheEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/font/FontRenderContext;Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(SwingUtilities2$LSBCacheEntry::*)($FontRenderContext*,$Font*)>(&SwingUtilities2$LSBCacheEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getLeftSideBearing", "(C)I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"reset", "(Ljava/awt/font/FontRenderContext;Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SwingUtilities2$LSBCacheEntry_InnerClassesInfo_[] = {
	{"sun.swing.SwingUtilities2$LSBCacheEntry", "sun.swing.SwingUtilities2", "LSBCacheEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SwingUtilities2$LSBCacheEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.SwingUtilities2$LSBCacheEntry",
	"java.lang.Object",
	nullptr,
	_SwingUtilities2$LSBCacheEntry_FieldInfo_,
	_SwingUtilities2$LSBCacheEntry_MethodInfo_,
	nullptr,
	nullptr,
	_SwingUtilities2$LSBCacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingUtilities2"
};

$Object* allocate$SwingUtilities2$LSBCacheEntry($Class* clazz) {
	return $of($alloc(SwingUtilities2$LSBCacheEntry));
}

bool SwingUtilities2$LSBCacheEntry::$assertionsDisabled = false;
$chars* SwingUtilities2$LSBCacheEntry::oneChar = nullptr;

void SwingUtilities2$LSBCacheEntry::init$($FontRenderContext* frc, $Font* font) {
	$set(this, lsbCache, $new($bytes, 88 - 87));
	reset(frc, font);
}

void SwingUtilities2$LSBCacheEntry::reset($FontRenderContext* frc, $Font* font) {
	$set(this, font, font);
	$set(this, frc, frc);
	for (int32_t counter = $nc(this->lsbCache)->length - 1; counter >= 0; --counter) {
		$nc(this->lsbCache)->set(counter, SwingUtilities2$LSBCacheEntry::UNSET);
	}
}

int32_t SwingUtilities2$LSBCacheEntry::getLeftSideBearing(char16_t aChar) {
	$useLocalCurrentObjectStackCache();
	int32_t index = aChar - 87;
	if (!SwingUtilities2$LSBCacheEntry::$assertionsDisabled && !(index >= 0 && index < (88 - 87))) {
		$throwNew($AssertionError);
	}
	int8_t lsb = $nc(this->lsbCache)->get(index);
	if (lsb == SwingUtilities2$LSBCacheEntry::UNSET) {
		$nc(SwingUtilities2$LSBCacheEntry::oneChar)->set(0, aChar);
		$var($GlyphVector, gv, $nc(this->font)->createGlyphVector(this->frc, SwingUtilities2$LSBCacheEntry::oneChar));
		lsb = (int8_t)$nc($($nc(gv)->getGlyphPixelBounds(0, this->frc, 0.0f, 0.0f)))->x;
		if (lsb < 0) {
			$var($Object, aaHint, $nc(this->frc)->getAntiAliasingHint());
			$init($RenderingHints);
			if ($equals(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB) || $equals(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR)) {
				++lsb;
			}
		}
		$nc(this->lsbCache)->set(index, lsb);
	}
	return lsb;
}

bool SwingUtilities2$LSBCacheEntry::equals(Object$* entry) {
	if ($equals(entry, this)) {
		return true;
	}
	if (!($instanceOf(SwingUtilities2$LSBCacheEntry, entry))) {
		return false;
	}
	$var(SwingUtilities2$LSBCacheEntry, oEntry, $cast(SwingUtilities2$LSBCacheEntry, entry));
	bool var$0 = $nc(this->font)->equals($nc(oEntry)->font);
	return (var$0 && $nc(this->frc)->equals($nc(oEntry)->frc));
}

int32_t SwingUtilities2$LSBCacheEntry::hashCode() {
	int32_t result = 17;
	if (this->font != nullptr) {
		result = 37 * result + $nc(this->font)->hashCode();
	}
	if (this->frc != nullptr) {
		result = 37 * result + $nc(this->frc)->hashCode();
	}
	return result;
}

void clinit$SwingUtilities2$LSBCacheEntry($Class* class$) {
	$load($SwingUtilities2);
	SwingUtilities2$LSBCacheEntry::$assertionsDisabled = !$SwingUtilities2::class$->desiredAssertionStatus();
	$assignStatic(SwingUtilities2$LSBCacheEntry::oneChar, $new($chars, 1));
}

SwingUtilities2$LSBCacheEntry::SwingUtilities2$LSBCacheEntry() {
}

$Class* SwingUtilities2$LSBCacheEntry::load$($String* name, bool initialize) {
	$loadClass(SwingUtilities2$LSBCacheEntry, name, initialize, &_SwingUtilities2$LSBCacheEntry_ClassInfo_, clinit$SwingUtilities2$LSBCacheEntry, allocate$SwingUtilities2$LSBCacheEntry);
	return class$;
}

$Class* SwingUtilities2$LSBCacheEntry::class$ = nullptr;

	} // swing
} // sun