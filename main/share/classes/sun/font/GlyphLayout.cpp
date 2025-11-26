#include <sun/font/GlyphLayout.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/ArrayList.h>
#include <java/util/Map.h>
#include <sun/font/AttributeMap.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontRunIterator.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontSubstitution.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/GlyphLayout$EngineRecord.h>
#include <sun/font/GlyphLayout$GVData.h>
#include <sun/font/GlyphLayout$LayoutEngineFactory.h>
#include <sun/font/GlyphLayout$SDCache.h>
#include <sun/font/NativeFont.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/ScriptRun.h>
#include <sun/font/StandardGlyphVector.h>
#include <sun/font/SunLayoutEngine.h>
#include <sun/font/TextRecord.h>
#include <jcpp.h>

#undef LAYOUT_NO_LIMIT_CONTEXT
#undef LAYOUT_NO_START_CONTEXT
#undef LAYOUT_RIGHT_TO_LEFT

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Map = ::java::util::Map;
using $AttributeMap = ::sun::font::AttributeMap;
using $AttributeValues = ::sun::font::AttributeValues;
using $CompositeFont = ::sun::font::CompositeFont;
using $Font2D = ::sun::font::Font2D;
using $FontRunIterator = ::sun::font::FontRunIterator;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontSubstitution = ::sun::font::FontSubstitution;
using $FontUtilities = ::sun::font::FontUtilities;
using $GlyphLayout$EngineRecord = ::sun::font::GlyphLayout$EngineRecord;
using $GlyphLayout$GVData = ::sun::font::GlyphLayout$GVData;
using $GlyphLayout$LayoutEngineFactory = ::sun::font::GlyphLayout$LayoutEngineFactory;
using $GlyphLayout$SDCache = ::sun::font::GlyphLayout$SDCache;
using $NativeFont = ::sun::font::NativeFont;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $ScriptRun = ::sun::font::ScriptRun;
using $StandardGlyphVector = ::sun::font::StandardGlyphVector;
using $SunLayoutEngine = ::sun::font::SunLayoutEngine;
using $TextRecord = ::sun::font::TextRecord;

namespace sun {
	namespace font {

$FieldInfo _GlyphLayout_FieldInfo_[] = {
	{"_gvdata", "Lsun/font/GlyphLayout$GVData;", nullptr, $PRIVATE, $field(GlyphLayout, _gvdata)},
	{"cache", "Lsun/font/GlyphLayout;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(GlyphLayout, cache)},
	{"_lef", "Lsun/font/GlyphLayout$LayoutEngineFactory;", nullptr, $PRIVATE, $field(GlyphLayout, _lef)},
	{"_textRecord", "Lsun/font/TextRecord;", nullptr, $PRIVATE, $field(GlyphLayout, _textRecord)},
	{"_scriptRuns", "Lsun/font/ScriptRun;", nullptr, $PRIVATE, $field(GlyphLayout, _scriptRuns)},
	{"_fontRuns", "Lsun/font/FontRunIterator;", nullptr, $PRIVATE, $field(GlyphLayout, _fontRuns)},
	{"_ercount", "I", nullptr, $PRIVATE, $field(GlyphLayout, _ercount)},
	{"_erecords", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/font/GlyphLayout$EngineRecord;>;", $PRIVATE, $field(GlyphLayout, _erecords)},
	{"_pt", "Ljava/awt/geom/Point2D$Float;", nullptr, $PRIVATE, $field(GlyphLayout, _pt)},
	{"_sd", "Lsun/font/FontStrikeDesc;", nullptr, $PRIVATE, $field(GlyphLayout, _sd)},
	{"_mat", "[F", nullptr, $PRIVATE, $field(GlyphLayout, _mat)},
	{"ptSize", "F", nullptr, $PRIVATE, $field(GlyphLayout, ptSize)},
	{"_typo_flags", "I", nullptr, $PRIVATE, $field(GlyphLayout, _typo_flags)},
	{"_offset", "I", nullptr, $PRIVATE, $field(GlyphLayout, _offset)},
	{}
};

$MethodInfo _GlyphLayout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GlyphLayout::*)()>(&GlyphLayout::init$))},
	{"done", "(Lsun/font/GlyphLayout;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(GlyphLayout*)>(&GlyphLayout::done))},
	{"get", "(Lsun/font/GlyphLayout$LayoutEngineFactory;)Lsun/font/GlyphLayout;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GlyphLayout*(*)($GlyphLayout$LayoutEngineFactory*)>(&GlyphLayout::get))},
	{"init", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GlyphLayout::*)(int32_t)>(&GlyphLayout::init))},
	{"layout", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;[CIIILsun/font/StandardGlyphVector;)Lsun/font/StandardGlyphVector;", nullptr, $PUBLIC, $method(static_cast<$StandardGlyphVector*(GlyphLayout::*)($Font*,$FontRenderContext*,$chars*,int32_t,int32_t,int32_t,$StandardGlyphVector*)>(&GlyphLayout::layout))},
	{"nextEngineRecord", "(IIIILsun/font/Font2D;I)V", nullptr, $PRIVATE, $method(static_cast<void(GlyphLayout::*)(int32_t,int32_t,int32_t,int32_t,$Font2D*,int32_t)>(&GlyphLayout::nextEngineRecord))},
	{}
};

$InnerClassInfo _GlyphLayout_InnerClassesInfo_[] = {
	{"sun.font.GlyphLayout$EngineRecord", "sun.font.GlyphLayout", "EngineRecord", $PRIVATE | $FINAL},
	{"sun.font.GlyphLayout$GVData", "sun.font.GlyphLayout", "GVData", $PUBLIC | $STATIC | $FINAL},
	{"sun.font.GlyphLayout$SDCache", "sun.font.GlyphLayout", "SDCache", $PRIVATE | $STATIC | $FINAL},
	{"sun.font.GlyphLayout$LayoutEngine", "sun.font.GlyphLayout", "LayoutEngine", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.font.GlyphLayout$LayoutEngineFactory", "sun.font.GlyphLayout", "LayoutEngineFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.font.GlyphLayout$LayoutEngineKey", "sun.font.GlyphLayout", "LayoutEngineKey", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _GlyphLayout_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.GlyphLayout",
	"java.lang.Object",
	nullptr,
	_GlyphLayout_FieldInfo_,
	_GlyphLayout_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.GlyphLayout$EngineRecord,sun.font.GlyphLayout$GVData,sun.font.GlyphLayout$SDCache,sun.font.GlyphLayout$SDCache$SDKey,sun.font.GlyphLayout$LayoutEngine,sun.font.GlyphLayout$LayoutEngineFactory,sun.font.GlyphLayout$LayoutEngineKey"
};

$Object* allocate$GlyphLayout($Class* clazz) {
	return $of($alloc(GlyphLayout));
}

$volatile(GlyphLayout*) GlyphLayout::cache = nullptr;

GlyphLayout* GlyphLayout::get($GlyphLayout$LayoutEngineFactory* lef$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($GlyphLayout$LayoutEngineFactory, lef, lef$renamed);
	if (lef == nullptr) {
		$assign(lef, $SunLayoutEngine::instance());
	}
	$var(GlyphLayout, result, nullptr);
	$load(GlyphLayout);
	$synchronized(GlyphLayout::class$) {
		$init(GlyphLayout);
		if (GlyphLayout::cache != nullptr) {
			$assign(result, GlyphLayout::cache);
			$assignStatic(GlyphLayout::cache, nullptr);
		}
	}
	if (result == nullptr) {
		$assign(result, $new(GlyphLayout));
	}
	$set($nc(result), _lef, lef);
	return result;
}

void GlyphLayout::done(GlyphLayout* gl) {
	$set($nc(gl), _lef, nullptr);
	$init(GlyphLayout);
	$assignStatic(GlyphLayout::cache, gl);
}

$StandardGlyphVector* GlyphLayout::layout($Font* font, $FontRenderContext* frc, $chars* text, int32_t offset, int32_t count, int32_t flags, $StandardGlyphVector* result) {
	$useLocalCurrentObjectStackCache();
	if (text == nullptr || offset < 0 || count < 0 || (count > $nc(text)->length - offset)) {
		$throwNew($IllegalArgumentException);
	}
	init(count);
	if ($nc(font)->hasLayoutAttributes()) {
		$var($AttributeValues, values, $nc(($cast($AttributeMap, $(font->getAttributes()))))->getValues());
		if ($nc(values)->getKerning() != 0) {
			this->_typo_flags |= 1;
		}
		if ($nc(values)->getLigatures() != 0) {
			this->_typo_flags |= 2;
		}
	}
	this->_offset = offset;
	$var($GlyphLayout$SDCache, txinfo, $GlyphLayout$SDCache::get(font, frc));
	$nc(this->_mat)->set(0, (float)$nc($nc(txinfo)->gtx)->getScaleX());
	$nc(this->_mat)->set(1, (float)$nc(txinfo->gtx)->getShearY());
	$nc(this->_mat)->set(2, (float)$nc(txinfo->gtx)->getShearX());
	$nc(this->_mat)->set(3, (float)$nc(txinfo->gtx)->getScaleY());
	$nc(this->_pt)->setLocation(txinfo->delta);
	this->ptSize = $nc(font)->getSize2D();
	int32_t lim = offset + count;
	int32_t min = 0;
	int32_t max = $nc(text)->length;
	if (flags != 0) {
		if (((int32_t)(flags & (uint32_t)$Font::LAYOUT_RIGHT_TO_LEFT)) != 0) {
			this->_typo_flags |= (int32_t)0x80000000;
		}
		if (((int32_t)(flags & (uint32_t)$Font::LAYOUT_NO_START_CONTEXT)) != 0) {
			min = offset;
		}
		if (((int32_t)(flags & (uint32_t)$Font::LAYOUT_NO_LIMIT_CONTEXT)) != 0) {
			max = lim;
		}
	}
	int32_t lang = -1;
	$var($Font2D, font2D, $FontUtilities::getFont2D(font));
	if ($instanceOf($FontSubstitution, font2D)) {
		$assign(font2D, $nc(($cast($FontSubstitution, font2D)))->getCompositeFont2D());
	}
	$nc(this->_textRecord)->init(text, offset, lim, min, max);
	int32_t start = offset;
	if ($instanceOf($CompositeFont, font2D)) {
		$nc(this->_scriptRuns)->init(text, offset, count);
		$nc(this->_fontRuns)->init($cast($CompositeFont, font2D), text, offset, lim);
		while ($nc(this->_scriptRuns)->next()) {
			int32_t limit = $nc(this->_scriptRuns)->getScriptLimit();
			int32_t script = $nc(this->_scriptRuns)->getScriptCode();
			while ($nc(this->_fontRuns)->next(script, limit)) {
				$var($Font2D, pfont, $nc(this->_fontRuns)->getFont());
				if ($instanceOf($NativeFont, pfont)) {
					$assign(pfont, $nc(($cast($NativeFont, pfont)))->getDelegateFont());
				}
				int32_t gmask = $nc(this->_fontRuns)->getGlyphMask();
				int32_t pos = $nc(this->_fontRuns)->getPos();
				nextEngineRecord(start, pos, script, lang, pfont, gmask);
				start = pos;
			}
		}
	} else {
		$nc(this->_scriptRuns)->init(text, offset, count);
		while ($nc(this->_scriptRuns)->next()) {
			int32_t limit = $nc(this->_scriptRuns)->getScriptLimit();
			int32_t script = $nc(this->_scriptRuns)->getScriptCode();
			nextEngineRecord(start, limit, script, lang, font2D, 0);
			start = limit;
		}
	}
	int32_t ix = 0;
	int32_t stop = this->_ercount;
	int32_t dir = 1;
	if (this->_typo_flags < 0) {
		ix = stop - 1;
		stop = -1;
		dir = -1;
	}
	$set(this, _sd, txinfo->sd);
	for (; ix != stop; ix += dir) {
		$var($GlyphLayout$EngineRecord, er, $cast($GlyphLayout$EngineRecord, $nc(this->_erecords)->get(ix)));
		for (;;) {
			try {
				$nc(er)->layout();
				break;
			} catch ($IndexOutOfBoundsException& e) {
				if ($nc(this->_gvdata)->_count >= 0) {
					$nc(this->_gvdata)->grow();
				}
			}
		}
		if ($nc(this->_gvdata)->_count < 0) {
			break;
		}
	}
	$var($StandardGlyphVector, gv, nullptr);
	if ($nc(this->_gvdata)->_count < 0) {
		$assign(gv, $new($StandardGlyphVector, font, text, offset, count, frc));
		if ($FontUtilities::debugFonts()) {
			$FontUtilities::logWarning($$str({"OpenType layout failed on font: "_s, font}));
		}
	} else {
		$assign(gv, $nc(this->_gvdata)->createGlyphVector(font, frc, result));
	}
	return gv;
}

void GlyphLayout::init$() {
	$set(this, _gvdata, $new($GlyphLayout$GVData));
	$set(this, _textRecord, $new($TextRecord));
	$set(this, _scriptRuns, $new($ScriptRun));
	$set(this, _fontRuns, $new($FontRunIterator));
	$set(this, _erecords, $new($ArrayList, 10));
	$set(this, _pt, $new($Point2D$Float));
	$set(this, _sd, $new($FontStrikeDesc));
	$set(this, _mat, $new($floats, 4));
}

void GlyphLayout::init(int32_t capacity) {
	this->_typo_flags = 0;
	this->_ercount = 0;
	$nc(this->_gvdata)->init(capacity);
}

void GlyphLayout::nextEngineRecord(int32_t start, int32_t limit, int32_t script, int32_t lang, $Font2D* font, int32_t gmask) {
	$var($GlyphLayout$EngineRecord, er, nullptr);
	if (this->_ercount == $nc(this->_erecords)->size()) {
		$assign(er, $new($GlyphLayout$EngineRecord, this));
		$nc(this->_erecords)->add(er);
	} else {
		$assign(er, $cast($GlyphLayout$EngineRecord, $nc(this->_erecords)->get(this->_ercount)));
	}
	$nc(er)->init(start, limit, font, script, lang, gmask);
	++this->_ercount;
}

GlyphLayout::GlyphLayout() {
}

$Class* GlyphLayout::load$($String* name, bool initialize) {
	$loadClass(GlyphLayout, name, initialize, &_GlyphLayout_ClassInfo_, allocate$GlyphLayout);
	return class$;
}

$Class* GlyphLayout::class$ = nullptr;

	} // font
} // sun