#include <sun/awt/windows/WFontMetrics.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WFontMetrics_FieldInfo_[] = {
	{"widths", "[I", nullptr, 0, $field(WFontMetrics, widths)},
	{"ascent", "I", nullptr, 0, $field(WFontMetrics, ascent)},
	{"descent", "I", nullptr, 0, $field(WFontMetrics, descent)},
	{"leading", "I", nullptr, 0, $field(WFontMetrics, leading)},
	{"height", "I", nullptr, 0, $field(WFontMetrics, height)},
	{"maxAscent", "I", nullptr, 0, $field(WFontMetrics, maxAscent)},
	{"maxDescent", "I", nullptr, 0, $field(WFontMetrics, maxDescent)},
	{"maxHeight", "I", nullptr, 0, $field(WFontMetrics, maxHeight)},
	{"maxAdvance", "I", nullptr, 0, $field(WFontMetrics, maxAdvance)},
	{"table", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/awt/Font;Ljava/awt/FontMetrics;>;", $STATIC, $staticField(WFontMetrics, table)},
	{}
};

$MethodInfo _WFontMetrics_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(WFontMetrics::*)($Font*)>(&WFontMetrics::init$))},
	{"bytesWidth", "([BII)I", nullptr, $PUBLIC | $NATIVE},
	{"charsWidth", "([CII)I", nullptr, $PUBLIC | $NATIVE},
	{"getAscent", "()I", nullptr, $PUBLIC},
	{"getDescent", "()I", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $STATIC, $method(static_cast<$FontMetrics*(*)($Font*)>(&WFontMetrics::getFontMetrics))},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getLeading", "()I", nullptr, $PUBLIC},
	{"getMaxAdvance", "()I", nullptr, $PUBLIC},
	{"getMaxAscent", "()I", nullptr, $PUBLIC},
	{"getMaxDescent", "()I", nullptr, $PUBLIC},
	{"getWidths", "()[I", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $NATIVE, $method(static_cast<void(WFontMetrics::*)()>(&WFontMetrics::init))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WFontMetrics::initIDs))},
	{"stringWidth", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $NATIVE},
	{}
};

#define _METHOD_INDEX_bytesWidth 1
#define _METHOD_INDEX_charsWidth 2
#define _METHOD_INDEX_init 12
#define _METHOD_INDEX_initIDs 13
#define _METHOD_INDEX_stringWidth 14

$ClassInfo _WFontMetrics_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WFontMetrics",
	"java.awt.FontMetrics",
	nullptr,
	_WFontMetrics_FieldInfo_,
	_WFontMetrics_MethodInfo_
};

$Object* allocate$WFontMetrics($Class* clazz) {
	return $of($alloc(WFontMetrics));
}

$Hashtable* WFontMetrics::table = nullptr;

void WFontMetrics::init$($Font* font) {
	$FontMetrics::init$(font);
	init();
}

int32_t WFontMetrics::getLeading() {
	return this->leading;
}

int32_t WFontMetrics::getAscent() {
	return this->ascent;
}

int32_t WFontMetrics::getDescent() {
	return this->descent;
}

int32_t WFontMetrics::getHeight() {
	return this->height;
}

int32_t WFontMetrics::getMaxAscent() {
	return this->maxAscent;
}

int32_t WFontMetrics::getMaxDescent() {
	return this->maxDescent;
}

int32_t WFontMetrics::getMaxAdvance() {
	return this->maxAdvance;
}

int32_t WFontMetrics::stringWidth($String* str) {
	int32_t $ret = 0;
	$prepareNative(WFontMetrics, stringWidth, int32_t, $String* str);
	$ret = $invokeNative(WFontMetrics, stringWidth, str);
	$finishNative();
	return $ret;
}

int32_t WFontMetrics::charsWidth($chars* data, int32_t off, int32_t len) {
	int32_t $ret = 0;
	$prepareNative(WFontMetrics, charsWidth, int32_t, $chars* data, int32_t off, int32_t len);
	$ret = $invokeNative(WFontMetrics, charsWidth, data, off, len);
	$finishNative();
	return $ret;
}

int32_t WFontMetrics::bytesWidth($bytes* data, int32_t off, int32_t len) {
	int32_t $ret = 0;
	$prepareNative(WFontMetrics, bytesWidth, int32_t, $bytes* data, int32_t off, int32_t len);
	$ret = $invokeNative(WFontMetrics, bytesWidth, data, off, len);
	$finishNative();
	return $ret;
}

$ints* WFontMetrics::getWidths() {
	return this->widths;
}

void WFontMetrics::init() {
	$prepareNative(WFontMetrics, init, void);
	$invokeNative(WFontMetrics, init);
	$finishNative();
}

$FontMetrics* WFontMetrics::getFontMetrics($Font* font) {
	$init(WFontMetrics);
	$var($FontMetrics, fm, $cast($FontMetrics, $nc(WFontMetrics::table)->get(font)));
	if (fm == nullptr) {
		$nc(WFontMetrics::table)->put(font, $assign(fm, $new(WFontMetrics, font)));
	}
	return fm;
}

void WFontMetrics::initIDs() {
	$init(WFontMetrics);
	$prepareNativeStatic(WFontMetrics, initIDs, void);
	$invokeNativeStatic(WFontMetrics, initIDs);
	$finishNativeStatic();
}

void clinit$WFontMetrics($Class* class$) {
	{
		WFontMetrics::initIDs();
	}
	$assignStatic(WFontMetrics::table, $new($Hashtable));
}

WFontMetrics::WFontMetrics() {
}

$Class* WFontMetrics::load$($String* name, bool initialize) {
	$loadClass(WFontMetrics, name, initialize, &_WFontMetrics_ClassInfo_, clinit$WFontMetrics, allocate$WFontMetrics);
	return class$;
}

$Class* WFontMetrics::class$ = nullptr;

		} // windows
	} // awt
} // sun