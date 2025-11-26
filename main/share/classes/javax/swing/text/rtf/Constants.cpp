#include <javax/swing/text/rtf/Constants.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _Constants_FieldInfo_[] = {
	{"Tabs", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, Tabs)},
	{"RTFCharacterSet", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, RTFCharacterSet)},
	{"StyleType", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, StyleType)},
	{"STSection", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, STSection)},
	{"STParagraph", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, STParagraph)},
	{"STCharacter", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, STCharacter)},
	{"StyleNext", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, StyleNext)},
	{"StyleAdditive", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, StyleAdditive)},
	{"StyleHidden", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, StyleHidden)},
	{"Caps", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, Caps)},
	{"Deleted", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, Deleted)},
	{"Outline", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, Outline)},
	{"SmallCaps", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, SmallCaps)},
	{"Shadow", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, Shadow)},
	{"Strikethrough", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, Strikethrough)},
	{"Hidden", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, Hidden)},
	{"PaperWidth", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, PaperWidth)},
	{"PaperHeight", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, PaperHeight)},
	{"MarginLeft", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, MarginLeft)},
	{"MarginRight", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, MarginRight)},
	{"MarginTop", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, MarginTop)},
	{"MarginBottom", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, MarginBottom)},
	{"GutterWidth", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, GutterWidth)},
	{"WidowControl", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Constants, WidowControl)},
	{}
};

$MethodInfo _Constants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Constants::*)()>(&Constants::init$))},
	{}
};

$ClassInfo _Constants_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.Constants",
	"java.lang.Object",
	nullptr,
	_Constants_FieldInfo_,
	_Constants_MethodInfo_
};

$Object* allocate$Constants($Class* clazz) {
	return $of($alloc(Constants));
}

$String* Constants::Tabs = nullptr;
$String* Constants::RTFCharacterSet = nullptr;
$String* Constants::StyleType = nullptr;
$String* Constants::STSection = nullptr;
$String* Constants::STParagraph = nullptr;
$String* Constants::STCharacter = nullptr;
$String* Constants::StyleNext = nullptr;
$String* Constants::StyleAdditive = nullptr;
$String* Constants::StyleHidden = nullptr;
$String* Constants::Caps = nullptr;
$String* Constants::Deleted = nullptr;
$String* Constants::Outline = nullptr;
$String* Constants::SmallCaps = nullptr;
$String* Constants::Shadow = nullptr;
$String* Constants::Strikethrough = nullptr;
$String* Constants::Hidden = nullptr;
$String* Constants::PaperWidth = nullptr;
$String* Constants::PaperHeight = nullptr;
$String* Constants::MarginLeft = nullptr;
$String* Constants::MarginRight = nullptr;
$String* Constants::MarginTop = nullptr;
$String* Constants::MarginBottom = nullptr;
$String* Constants::GutterWidth = nullptr;
$String* Constants::WidowControl = nullptr;

void Constants::init$() {
}

Constants::Constants() {
}

void clinit$Constants($Class* class$) {
	$assignStatic(Constants::Tabs, "tabs"_s);
	$assignStatic(Constants::RTFCharacterSet, "rtfCharacterSet"_s);
	$assignStatic(Constants::StyleType, "style:type"_s);
	$assignStatic(Constants::STSection, "section"_s);
	$assignStatic(Constants::STParagraph, "paragraph"_s);
	$assignStatic(Constants::STCharacter, "character"_s);
	$assignStatic(Constants::StyleNext, "style:nextStyle"_s);
	$assignStatic(Constants::StyleAdditive, "style:additive"_s);
	$assignStatic(Constants::StyleHidden, "style:hidden"_s);
	$assignStatic(Constants::Caps, "caps"_s);
	$assignStatic(Constants::Deleted, "deleted"_s);
	$assignStatic(Constants::Outline, "outl"_s);
	$assignStatic(Constants::SmallCaps, "scaps"_s);
	$assignStatic(Constants::Shadow, "shad"_s);
	$assignStatic(Constants::Strikethrough, "strike"_s);
	$assignStatic(Constants::Hidden, "v"_s);
	$assignStatic(Constants::PaperWidth, "paperw"_s);
	$assignStatic(Constants::PaperHeight, "paperh"_s);
	$assignStatic(Constants::MarginLeft, "margl"_s);
	$assignStatic(Constants::MarginRight, "margr"_s);
	$assignStatic(Constants::MarginTop, "margt"_s);
	$assignStatic(Constants::MarginBottom, "margb"_s);
	$assignStatic(Constants::GutterWidth, "gutter"_s);
	$assignStatic(Constants::WidowControl, "widowctrl"_s);
}

$Class* Constants::load$($String* name, bool initialize) {
	$loadClass(Constants, name, initialize, &_Constants_ClassInfo_, clinit$Constants, allocate$Constants);
	return class$;
}

$Class* Constants::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax