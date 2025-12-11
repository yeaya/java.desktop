#include <apple/laf/JRSUIConstants$Variant.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef GRADIENT_LIST_BACKGROUND_EVEN
#undef GRADIENT_LIST_BACKGROUND_ODD
#undef GRADIENT_SIDE_BAR
#undef GRADIENT_SIDE_BAR_FOCUSED_SELECTION
#undef GRADIENT_SIDE_BAR_SELECTION
#undef MASK
#undef MENU_GLYPH
#undef MENU_HIERARCHICAL
#undef MENU_POPUP
#undef MENU_PULLDOWN
#undef SHIFT
#undef SIZE

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$Variant_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, MASK)},
	{"variant", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, variant)},
	{"_menuGlyph", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, _menuGlyph)},
	{"MENU_GLYPH", "Lapple/laf/JRSUIConstants$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, MENU_GLYPH)},
	{"_menuPopup", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, _menuPopup)},
	{"MENU_POPUP", "Lapple/laf/JRSUIConstants$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, MENU_POPUP)},
	{"_menuPulldown", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, _menuPulldown)},
	{"MENU_PULLDOWN", "Lapple/laf/JRSUIConstants$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, MENU_PULLDOWN)},
	{"_menuHierarchical", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, _menuHierarchical)},
	{"MENU_HIERARCHICAL", "Lapple/laf/JRSUIConstants$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, MENU_HIERARCHICAL)},
	{"_gradientListBackgroundEven", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, _gradientListBackgroundEven)},
	{"GRADIENT_LIST_BACKGROUND_EVEN", "Lapple/laf/JRSUIConstants$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, GRADIENT_LIST_BACKGROUND_EVEN)},
	{"_gradientListBackgroundOdd", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, _gradientListBackgroundOdd)},
	{"GRADIENT_LIST_BACKGROUND_ODD", "Lapple/laf/JRSUIConstants$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, GRADIENT_LIST_BACKGROUND_ODD)},
	{"_gradientSideBar", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, _gradientSideBar)},
	{"GRADIENT_SIDE_BAR", "Lapple/laf/JRSUIConstants$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, GRADIENT_SIDE_BAR)},
	{"_gradientSideBarSelection", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, _gradientSideBarSelection)},
	{"GRADIENT_SIDE_BAR_SELECTION", "Lapple/laf/JRSUIConstants$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, GRADIENT_SIDE_BAR_SELECTION)},
	{"_gradientSideBarFocusedSelection", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Variant, _gradientSideBarFocusedSelection)},
	{"GRADIENT_SIDE_BAR_FOCUSED_SELECTION", "Lapple/laf/JRSUIConstants$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Variant, GRADIENT_SIDE_BAR_FOCUSED_SELECTION)},
	{}
};

$MethodInfo _JRSUIConstants$Variant_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$Variant::*)(int8_t)>(&JRSUIConstants$Variant::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$Variant_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$Variant", "apple.laf.JRSUIConstants", "Variant", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$Variant_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$Variant",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$Variant_FieldInfo_,
	_JRSUIConstants$Variant_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$Variant_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$Variant($Class* clazz) {
	return $of($alloc(JRSUIConstants$Variant));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$Variant::variant = nullptr;
JRSUIConstants$Variant* JRSUIConstants$Variant::MENU_GLYPH = nullptr;
JRSUIConstants$Variant* JRSUIConstants$Variant::MENU_POPUP = nullptr;
JRSUIConstants$Variant* JRSUIConstants$Variant::MENU_PULLDOWN = nullptr;
JRSUIConstants$Variant* JRSUIConstants$Variant::MENU_HIERARCHICAL = nullptr;
JRSUIConstants$Variant* JRSUIConstants$Variant::GRADIENT_LIST_BACKGROUND_EVEN = nullptr;
JRSUIConstants$Variant* JRSUIConstants$Variant::GRADIENT_LIST_BACKGROUND_ODD = nullptr;
JRSUIConstants$Variant* JRSUIConstants$Variant::GRADIENT_SIDE_BAR = nullptr;
JRSUIConstants$Variant* JRSUIConstants$Variant::GRADIENT_SIDE_BAR_SELECTION = nullptr;
JRSUIConstants$Variant* JRSUIConstants$Variant::GRADIENT_SIDE_BAR_FOCUSED_SELECTION = nullptr;

void JRSUIConstants$Variant::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$Variant::variant, value);
}

$String* JRSUIConstants$Variant::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$Variant::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$Variant($Class* class$) {
	$assignStatic(JRSUIConstants$Variant::variant, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$Variant::MASK, JRSUIConstants$Variant::SHIFT));
	$assignStatic(JRSUIConstants$Variant::MENU_GLYPH, $new(JRSUIConstants$Variant, JRSUIConstants$Variant::_menuGlyph));
	$assignStatic(JRSUIConstants$Variant::MENU_POPUP, $new(JRSUIConstants$Variant, JRSUIConstants$Variant::_menuPopup));
	$assignStatic(JRSUIConstants$Variant::MENU_PULLDOWN, $new(JRSUIConstants$Variant, JRSUIConstants$Variant::_menuPulldown));
	$assignStatic(JRSUIConstants$Variant::MENU_HIERARCHICAL, $new(JRSUIConstants$Variant, JRSUIConstants$Variant::_menuHierarchical));
	$assignStatic(JRSUIConstants$Variant::GRADIENT_LIST_BACKGROUND_EVEN, $new(JRSUIConstants$Variant, JRSUIConstants$Variant::_gradientListBackgroundEven));
	$assignStatic(JRSUIConstants$Variant::GRADIENT_LIST_BACKGROUND_ODD, $new(JRSUIConstants$Variant, JRSUIConstants$Variant::_gradientListBackgroundOdd));
	$assignStatic(JRSUIConstants$Variant::GRADIENT_SIDE_BAR, $new(JRSUIConstants$Variant, JRSUIConstants$Variant::_gradientSideBar));
	$assignStatic(JRSUIConstants$Variant::GRADIENT_SIDE_BAR_SELECTION, $new(JRSUIConstants$Variant, JRSUIConstants$Variant::_gradientSideBarSelection));
	$assignStatic(JRSUIConstants$Variant::GRADIENT_SIDE_BAR_FOCUSED_SELECTION, $new(JRSUIConstants$Variant, JRSUIConstants$Variant::_gradientSideBarFocusedSelection));
}

JRSUIConstants$Variant::JRSUIConstants$Variant() {
}

$Class* JRSUIConstants$Variant::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$Variant, name, initialize, &_JRSUIConstants$Variant_ClassInfo_, clinit$JRSUIConstants$Variant, allocate$JRSUIConstants$Variant);
	return class$;
}

$Class* JRSUIConstants$Variant::class$ = nullptr;

	} // laf
} // apple