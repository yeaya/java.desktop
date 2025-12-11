#include <com/apple/laf/AquaButtonExtendedTypes.h>

#include <apple/laf/JRSUIConstants$SegmentPosition.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$1.h>
#include <com/apple/laf/AquaButtonExtendedTypes$2.h>
#include <com/apple/laf/AquaButtonExtendedTypes$3.h>
#include <com/apple/laf/AquaButtonExtendedTypes$4.h>
#include <com/apple/laf/AquaButtonExtendedTypes$5.h>
#include <com/apple/laf/AquaButtonExtendedTypes$6.h>
#include <com/apple/laf/AquaButtonExtendedTypes$7.h>
#include <com/apple/laf/AquaButtonExtendedTypes$8.h>
#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Insets.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef BUTTON_BEVEL
#undef BUTTON_BEVEL_INSET
#undef BUTTON_BEVEL_ROUND
#undef BUTTON_COMBO_BOX
#undef BUTTON_DISCLOSURE
#undef BUTTON_POP_DOWN
#undef BUTTON_PUSH_INSET
#undef BUTTON_PUSH_SCOPE
#undef BUTTON_PUSH_TEXTURED
#undef BUTTON_ROUND
#undef BUTTON_ROUND_HELP
#undef BUTTON_ROUND_INSET
#undef BUTTON_SEGMENTED
#undef BUTTON_SEGMENTED_INSET
#undef BUTTON_SEGMENTED_SCURVE
#undef BUTTON_SEGMENTED_TEXTURED
#undef BUTTON_SEGMENTED_TOOLBAR
#undef FIRST
#undef FRAME_WELL
#undef LAST
#undef MIDDLE
#undef ONLY
#undef SCROLL_COLUMN_SIZER

using $AquaButtonExtendedTypes$TypeSpecifierArray = $Array<::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier>;
using $JRSUIConstants$SegmentPosition = ::apple::laf::JRSUIConstants$SegmentPosition;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonExtendedTypes$1 = ::com::apple::laf::AquaButtonExtendedTypes$1;
using $AquaButtonExtendedTypes$2 = ::com::apple::laf::AquaButtonExtendedTypes$2;
using $AquaButtonExtendedTypes$3 = ::com::apple::laf::AquaButtonExtendedTypes$3;
using $AquaButtonExtendedTypes$4 = ::com::apple::laf::AquaButtonExtendedTypes$4;
using $AquaButtonExtendedTypes$5 = ::com::apple::laf::AquaButtonExtendedTypes$5;
using $AquaButtonExtendedTypes$6 = ::com::apple::laf::AquaButtonExtendedTypes$6;
using $AquaButtonExtendedTypes$7 = ::com::apple::laf::AquaButtonExtendedTypes$7;
using $AquaButtonExtendedTypes$8 = ::com::apple::laf::AquaButtonExtendedTypes$8;
using $AquaButtonExtendedTypes$BorderDefinedTypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier;
using $AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier;
using $AquaButtonExtendedTypes$TypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonExtendedTypes_FieldInfo_[] = {
	{"typeDefinitions", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/util/Map<Ljava/lang/String;Lcom/apple/laf/AquaButtonExtendedTypes$TypeSpecifier;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonExtendedTypes, typeDefinitions)},
	{}
};

$MethodInfo _AquaButtonExtendedTypes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonExtendedTypes::*)()>(&AquaButtonExtendedTypes::init$))},
	{"getAllTypes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/apple/laf/AquaButtonExtendedTypes$TypeSpecifier;>;", $PROTECTED | $STATIC, $method(static_cast<$Map*(*)()>(&AquaButtonExtendedTypes::getAllTypes))},
	{"getBorderForPosition", "(Ljavax/swing/AbstractButton;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/swing/border/Border;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Border*(*)($AbstractButton*,Object$*,Object$*)>(&AquaButtonExtendedTypes::getBorderForPosition))},
	{"getRealPositionForLogicalPosition", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($String*,bool)>(&AquaButtonExtendedTypes::getRealPositionForLogicalPosition))},
	{"getSpecifierByName", "(Ljava/lang/String;)Lcom/apple/laf/AquaButtonExtendedTypes$TypeSpecifier;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$AquaButtonExtendedTypes$TypeSpecifier*(*)($String*)>(&AquaButtonExtendedTypes::getSpecifierByName))},
	{}
};

$InnerClassInfo _AquaButtonExtendedTypes_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$SegmentedNamedBorder", "com.apple.laf.AquaButtonExtendedTypes", "SegmentedNamedBorder", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "SegmentedBorderDefinedTypeSpecifier", $STATIC},
	{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "BorderDefinedTypeSpecifier", $STATIC},
	{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaButtonExtendedTypes$8", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$7", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaButtonExtendedTypes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes",
	"java.lang.Object",
	nullptr,
	_AquaButtonExtendedTypes_FieldInfo_,
	_AquaButtonExtendedTypes_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes$SegmentedNamedBorder,com.apple.laf.AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier,com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier,com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1,com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier,com.apple.laf.AquaButtonExtendedTypes$8,com.apple.laf.AquaButtonExtendedTypes$7,com.apple.laf.AquaButtonExtendedTypes$6,com.apple.laf.AquaButtonExtendedTypes$5,com.apple.laf.AquaButtonExtendedTypes$4,com.apple.laf.AquaButtonExtendedTypes$3,com.apple.laf.AquaButtonExtendedTypes$2,com.apple.laf.AquaButtonExtendedTypes$1"
};

$Object* allocate$AquaButtonExtendedTypes($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes));
}

$AquaUtils$RecyclableSingleton* AquaButtonExtendedTypes::typeDefinitions = nullptr;

void AquaButtonExtendedTypes::init$() {
}

$Border* AquaButtonExtendedTypes::getBorderForPosition($AbstractButton* c, Object$* type, Object$* logicalPosition) {
	$init(AquaButtonExtendedTypes);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, nullptr);
	if (logicalPosition == nullptr) {
		$assign(var$0, $cast($String, type));
	} else {
		$var($String, var$1, $$str({type, "-"_s}));
		$assign(var$0, $concat(var$1, $(getRealPositionForLogicalPosition($cast($String, logicalPosition), $nc($($nc(c)->getComponentOrientation()))->isLeftToRight()))));
	}
	$var($String, name, var$0);
	$var($AquaButtonExtendedTypes$TypeSpecifier, specifier, getSpecifierByName(name));
	if (specifier == nullptr) {
		return nullptr;
	}
	$var($Border, border, $nc(specifier)->getBorder());
	if (!($instanceOf($AquaBorder, border))) {
		return border;
	}
	return $nc(($cast($AquaBorder, border)))->deriveBorderForSize($($AquaUtilControlSize::getUserSizeFrom(c)));
}

$String* AquaButtonExtendedTypes::getRealPositionForLogicalPosition($String* logicalPosition, bool leftToRight) {
	$init(AquaButtonExtendedTypes);
	if (!leftToRight) {
		if ("first"_s->equalsIgnoreCase(logicalPosition)) {
			return "last"_s;
		}
		if ("last"_s->equalsIgnoreCase(logicalPosition)) {
			return "first"_s;
		}
	}
	return logicalPosition;
}

$AquaButtonExtendedTypes$TypeSpecifier* AquaButtonExtendedTypes::getSpecifierByName($String* name) {
	$init(AquaButtonExtendedTypes);
	return $cast($AquaButtonExtendedTypes$TypeSpecifier, $nc(($cast($Map, $($nc(AquaButtonExtendedTypes::typeDefinitions)->get()))))->get(name));
}

$Map* AquaButtonExtendedTypes::getAllTypes() {
	$init(AquaButtonExtendedTypes);
	$useLocalCurrentObjectStackCache();
	$var($Map, specifiersByName, $new($HashMap));
	$var($Insets, focusInsets, $new($Insets, 4, 4, 4, 4));
	$init($JRSUIConstants$Widget);
	$init($JRSUIConstants$SegmentPosition);
	$var($AquaButtonExtendedTypes$TypeSpecifierArray, specifiers, $new($AquaButtonExtendedTypes$TypeSpecifierArray, {
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$2, "toolbar"_s, true)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$3, "icon"_s, true)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$4, "text"_s, false)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$5, "toggle"_s, false)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$6, "combobox"_s, $JRSUIConstants$Widget::BUTTON_POP_DOWN, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(7, 10, 6, 30)))->alterInsets(1, 2, 0, 2)))->alterMinSize(0, 29)), 0, -3, 0, -6)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "comboboxInternal"_s, $JRSUIConstants$Widget::BUTTON_POP_DOWN, $($nc($($$new($AquaUtilControlSize$SizeVariant)->alterInsets(1, 2, 0, 2)))->alterMinSize(0, 29)), 0, -3, 0, -6)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$7, "comboboxEndCap"_s, $JRSUIConstants$Widget::BUTTON_COMBO_BOX, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(5, 10, 6, 10)))->alterInsets(1, 2, 0, 2)))->alterMinSize(0, 29)), 0, -3, 0, -6)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "square"_s, $JRSUIConstants$Widget::BUTTON_BEVEL, $($nc($($$new($AquaUtilControlSize$SizeVariant, 16, 16)->alterMargins(5, 7, 5, 7)))->replaceInsets(focusInsets)))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$8, "gradient"_s, $JRSUIConstants$Widget::BUTTON_BEVEL_INSET, $($nc($($$new($AquaUtilControlSize$SizeVariant, 18, 18)->alterMargins(8, 9, 8, 9)))->replaceInsets(focusInsets)))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "bevel"_s, $JRSUIConstants$Widget::BUTTON_BEVEL_ROUND, $($nc($($$new($AquaUtilControlSize$SizeVariant, 22, 22)->alterMargins(7, 8, 9, 8)))->alterInsets(0, 0, 0, 0)))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "textured"_s, $JRSUIConstants$Widget::BUTTON_PUSH_TEXTURED, $($nc($($$new($AquaUtilControlSize$SizeVariant, 28, 28)->alterMargins(5, 10, 6, 10)))->alterInsets(1, 2, 0, 2)))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "roundRect"_s, $JRSUIConstants$Widget::BUTTON_PUSH_INSET, $($nc($($$new($AquaUtilControlSize$SizeVariant, 28, 28)->alterMargins(4, 14, 4, 14)))->replaceInsets(focusInsets)))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "recessed"_s, $JRSUIConstants$Widget::BUTTON_PUSH_SCOPE, $($nc($($$new($AquaUtilControlSize$SizeVariant, 28, 28)->alterMargins(4, 14, 4, 14)))->replaceInsets(focusInsets)))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "well"_s, $JRSUIConstants$Widget::FRAME_WELL, $$new($AquaUtilControlSize$SizeVariant, 32, 32))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "help"_s, $JRSUIConstants$Widget::BUTTON_ROUND_HELP, $($nc($($$new($AquaUtilControlSize$SizeVariant)->alterInsets(2, 0, 0, 0)))->alterMinSize(28, 28)), -3, -3, -3, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "round"_s, $JRSUIConstants$Widget::BUTTON_ROUND, $($nc($($$new($AquaUtilControlSize$SizeVariant)->alterInsets(2, 0, 0, 0)))->alterMinSize(28, 28)), -3, -3, -3, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "texturedRound"_s, $JRSUIConstants$Widget::BUTTON_ROUND_INSET, $($nc($($$new($AquaUtilControlSize$SizeVariant)->alterInsets(0, 0, 0, 0)))->alterMinSize(26, 26)), -2, -2, 0, 0)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmented-first"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED, $JRSUIConstants$SegmentPosition::FIRST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 16, 6, 10)))->alterInsets(2, 3, 2, 0)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmented-middle"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED, $JRSUIConstants$SegmentPosition::MIDDLE, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 9, 6, 10)))->alterInsets(2, 0, 2, 0)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmented-last"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED, $JRSUIConstants$SegmentPosition::LAST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 9, 6, 16)))->alterInsets(2, 0, 2, 3)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmented-only"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED, $JRSUIConstants$SegmentPosition::ONLY, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 16, 6, 16)))->alterInsets(2, 3, 2, 3)))->alterMinSize(34, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedRoundRect-first"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_INSET, $JRSUIConstants$SegmentPosition::FIRST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 12, 6, 8)))->alterInsets(2, 2, 2, 0)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedRoundRect-middle"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_INSET, $JRSUIConstants$SegmentPosition::MIDDLE, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 8, 6, 8)))->alterInsets(2, 0, 2, 0)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedRoundRect-last"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_INSET, $JRSUIConstants$SegmentPosition::LAST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 8, 6, 12)))->alterInsets(2, 0, 2, 2)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedRoundRect-only"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_INSET, $JRSUIConstants$SegmentPosition::ONLY, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 12, 6, 12)))->alterInsets(2, 2, 2, 2)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedTexturedRounded-first"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_SCURVE, $JRSUIConstants$SegmentPosition::FIRST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 12, 6, 8)))->alterInsets(2, 2, 2, 0)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedTexturedRounded-middle"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_SCURVE, $JRSUIConstants$SegmentPosition::MIDDLE, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 8, 6, 8)))->alterInsets(2, 0, 2, 0)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedTexturedRounded-last"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_SCURVE, $JRSUIConstants$SegmentPosition::LAST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 8, 6, 12)))->alterInsets(2, 0, 2, 2)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedTexturedRounded-only"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_SCURVE, $JRSUIConstants$SegmentPosition::ONLY, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 12, 6, 12)))->alterInsets(2, 2, 2, 2)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedTextured-first"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_TEXTURED, $JRSUIConstants$SegmentPosition::FIRST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 12, 6, 8)))->alterInsets(2, 3, 2, 0)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedTextured-middle"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_TEXTURED, $JRSUIConstants$SegmentPosition::MIDDLE, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 8, 6, 8)))->alterInsets(2, 0, 2, 0)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedTextured-last"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_TEXTURED, $JRSUIConstants$SegmentPosition::LAST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 8, 6, 12)))->alterInsets(2, 0, 2, 3)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedTextured-only"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_TEXTURED, $JRSUIConstants$SegmentPosition::ONLY, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 12, 6, 12)))->alterInsets(2, 3, 2, 3)))->alterMinSize(0, 28)), 0, -3, 0, -3)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedCapsule-first"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_TOOLBAR, $JRSUIConstants$SegmentPosition::FIRST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 12, 6, 8)))->alterInsets(2, 2, 2, 0)))->alterMinSize(0, 28)), 0, 0, 0, 0)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedCapsule-middle"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_TOOLBAR, $JRSUIConstants$SegmentPosition::MIDDLE, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 8, 6, 8)))->alterInsets(2, 0, 2, 0)))->alterMinSize(0, 28)), 0, 0, 0, 0)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedCapsule-last"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_TOOLBAR, $JRSUIConstants$SegmentPosition::LAST, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 8, 6, 12)))->alterInsets(2, 0, 2, 2)))->alterMinSize(0, 28)), 0, 0, 0, 0)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, "segmentedCapsule-only"_s, $JRSUIConstants$Widget::BUTTON_SEGMENTED_TOOLBAR, $JRSUIConstants$SegmentPosition::ONLY, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 12, 6, 12)))->alterInsets(2, 2, 2, 2)))->alterMinSize(34, 28)), 0, 0, 0, 0)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "segmentedGradient-first"_s, $JRSUIConstants$Widget::BUTTON_BEVEL_INSET, $($nc($($$new($AquaUtilControlSize$SizeVariant, 18, 18)->alterMargins(4, 5, 4, 5)))->replaceInsets($$new($Insets, -2, - 0, -2, - 0))))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "segmentedGradient-middle"_s, $JRSUIConstants$Widget::BUTTON_BEVEL_INSET, $($nc($($$new($AquaUtilControlSize$SizeVariant, 18, 18)->alterMargins(4, 5, 4, 5)))->replaceInsets($$new($Insets, -2, -1, -2, - 0))))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "segmentedGradient-last"_s, $JRSUIConstants$Widget::BUTTON_BEVEL_INSET, $($nc($($$new($AquaUtilControlSize$SizeVariant, 18, 18)->alterMargins(4, 5, 4, 5)))->replaceInsets($$new($Insets, -2, -1, -2, - 0))))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "segmentedGradient-only"_s, $JRSUIConstants$Widget::BUTTON_BEVEL_INSET, $($nc($($$new($AquaUtilControlSize$SizeVariant, 18, 18)->alterMargins(4, 5, 4, 5)))->replaceInsets($$new($Insets, -2, -1, -2, -1))))),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "disclosure"_s, $JRSUIConstants$Widget::BUTTON_DISCLOSURE, $($nc($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(10, 10, 10, 10)))->replaceInsets(focusInsets)))->alterMinSize(27, 27)), -1, -1, -1, -1)),
		static_cast<$AquaButtonExtendedTypes$TypeSpecifier*>($$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, "scrollColumnSizer"_s, $JRSUIConstants$Widget::SCROLL_COLUMN_SIZER, $$new($AquaUtilControlSize$SizeVariant, 14, 14)))
	}));
	{
		$var($AquaButtonExtendedTypes$TypeSpecifierArray, arr$, specifiers);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AquaButtonExtendedTypes$TypeSpecifier, specifier, arr$->get(i$));
			{
				specifiersByName->put($nc(specifier)->name, specifier);
			}
		}
	}
	return specifiersByName;
}

void clinit$AquaButtonExtendedTypes($Class* class$) {
	$assignStatic(AquaButtonExtendedTypes::typeDefinitions, $new($AquaButtonExtendedTypes$1));
}

AquaButtonExtendedTypes::AquaButtonExtendedTypes() {
}

$Class* AquaButtonExtendedTypes::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes, name, initialize, &_AquaButtonExtendedTypes_ClassInfo_, clinit$AquaButtonExtendedTypes, allocate$AquaButtonExtendedTypes);
	return class$;
}

$Class* AquaButtonExtendedTypes::class$ = nullptr;

		} // laf
	} // apple
} // com