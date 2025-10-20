#include <javax/swing/plaf/metal/MetalBorders.h>

#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/border/MatteBorder.h>
#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ButtonBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$Flush3DBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$RolloverButtonBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$RolloverMarginBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$TextFieldBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ToggleButtonBorder.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <jcpp.h>

#undef NO_BUTTON_ROLLOVER

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $MatteBorder = ::javax::swing::border::MatteBorder;
using $BorderUIResource$CompoundBorderUIResource = ::javax::swing::plaf::BorderUIResource$CompoundBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $MetalBorders$ButtonBorder = ::javax::swing::plaf::metal::MetalBorders$ButtonBorder;
using $MetalBorders$Flush3DBorder = ::javax::swing::plaf::metal::MetalBorders$Flush3DBorder;
using $MetalBorders$RolloverButtonBorder = ::javax::swing::plaf::metal::MetalBorders$RolloverButtonBorder;
using $MetalBorders$RolloverMarginBorder = ::javax::swing::plaf::metal::MetalBorders$RolloverMarginBorder;
using $MetalBorders$TextFieldBorder = ::javax::swing::plaf::metal::MetalBorders$TextFieldBorder;
using $MetalBorders$ToggleButtonBorder = ::javax::swing::plaf::metal::MetalBorders$ToggleButtonBorder;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders_FieldInfo_[] = {
	{"NO_BUTTON_ROLLOVER", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(MetalBorders, NO_BUTTON_ROLLOVER)},
	{"buttonBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MetalBorders, buttonBorder)},
	{"textBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MetalBorders, textBorder)},
	{"textFieldBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MetalBorders, textFieldBorder)},
	{"toggleButtonBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MetalBorders, toggleButtonBorder)},
	{}
};

$MethodInfo _MetalBorders_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders::*)()>(&MetalBorders::init$))},
	{"getButtonBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&MetalBorders::getButtonBorder))},
	{"getDesktopIconBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&MetalBorders::getDesktopIconBorder))},
	{"getTextBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&MetalBorders::getTextBorder))},
	{"getTextFieldBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&MetalBorders::getTextFieldBorder))},
	{"getToggleButtonBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&MetalBorders::getToggleButtonBorder))},
	{"getToolBarNonrolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $STATIC, $method(static_cast<$Border*(*)()>(&MetalBorders::getToolBarNonrolloverBorder))},
	{"getToolBarRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $STATIC, $method(static_cast<$Border*(*)()>(&MetalBorders::getToolBarRolloverBorder))},
	{}
};

$InnerClassInfo _MetalBorders_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$TableHeaderBorder", "javax.swing.plaf.metal.MetalBorders", "TableHeaderBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$ToggleButtonBorder", "javax.swing.plaf.metal.MetalBorders", "ToggleButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$ScrollPaneBorder", "javax.swing.plaf.metal.MetalBorders", "ScrollPaneBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$TextFieldBorder", "javax.swing.plaf.metal.MetalBorders", "TextFieldBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$ToolBarBorder", "javax.swing.plaf.metal.MetalBorders", "ToolBarBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder", "javax.swing.plaf.metal.MetalBorders", "RolloverMarginBorder", $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$RolloverButtonBorder", "javax.swing.plaf.metal.MetalBorders", "RolloverButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$PopupMenuBorder", "javax.swing.plaf.metal.MetalBorders", "PopupMenuBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$MenuItemBorder", "javax.swing.plaf.metal.MetalBorders", "MenuItemBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$MenuBarBorder", "javax.swing.plaf.metal.MetalBorders", "MenuBarBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$OptionDialogBorder", "javax.swing.plaf.metal.MetalBorders", "OptionDialogBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$PaletteBorder", "javax.swing.plaf.metal.MetalBorders", "PaletteBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$WarningDialogBorder", "javax.swing.plaf.metal.MetalBorders", "WarningDialogBorder", $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder", "javax.swing.plaf.metal.MetalBorders", "QuestionDialogBorder", $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder", "javax.swing.plaf.metal.MetalBorders", "ErrorDialogBorder", $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$DialogBorder", "javax.swing.plaf.metal.MetalBorders", "DialogBorder", $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$FrameBorder", "javax.swing.plaf.metal.MetalBorders", "FrameBorder", $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$InternalFrameBorder", "javax.swing.plaf.metal.MetalBorders", "InternalFrameBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$ButtonBorder", "javax.swing.plaf.metal.MetalBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$Flush3DBorder", "javax.swing.plaf.metal.MetalBorders", "Flush3DBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders",
	"java.lang.Object",
	nullptr,
	_MetalBorders_FieldInfo_,
	_MetalBorders_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders$TableHeaderBorder,javax.swing.plaf.metal.MetalBorders$ToggleButtonBorder,javax.swing.plaf.metal.MetalBorders$ScrollPaneBorder,javax.swing.plaf.metal.MetalBorders$TextFieldBorder,javax.swing.plaf.metal.MetalBorders$ToolBarBorder,javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder,javax.swing.plaf.metal.MetalBorders$RolloverButtonBorder,javax.swing.plaf.metal.MetalBorders$PopupMenuBorder,javax.swing.plaf.metal.MetalBorders$MenuItemBorder,javax.swing.plaf.metal.MetalBorders$MenuBarBorder,javax.swing.plaf.metal.MetalBorders$OptionDialogBorder,javax.swing.plaf.metal.MetalBorders$PaletteBorder,javax.swing.plaf.metal.MetalBorders$WarningDialogBorder,javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder,javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder,javax.swing.plaf.metal.MetalBorders$DialogBorder,javax.swing.plaf.metal.MetalBorders$FrameBorder,javax.swing.plaf.metal.MetalBorders$InternalFrameBorder,javax.swing.plaf.metal.MetalBorders$ButtonBorder,javax.swing.plaf.metal.MetalBorders$Flush3DBorder"
};

$Object* allocate$MetalBorders($Class* clazz) {
	return $of($alloc(MetalBorders));
}


$Object* MetalBorders::NO_BUTTON_ROLLOVER = nullptr;
$Border* MetalBorders::buttonBorder = nullptr;
$Border* MetalBorders::textBorder = nullptr;
$Border* MetalBorders::textFieldBorder = nullptr;
$Border* MetalBorders::toggleButtonBorder = nullptr;

void MetalBorders::init$() {
}

$Border* MetalBorders::getButtonBorder() {
	$init(MetalBorders);
	$useLocalCurrentObjectStackCache();
	if (MetalBorders::buttonBorder == nullptr) {
		$var($Border, var$0, static_cast<$Border*>($new($MetalBorders$ButtonBorder)));
		$assignStatic(MetalBorders::buttonBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	}
	return MetalBorders::buttonBorder;
}

$Border* MetalBorders::getTextBorder() {
	$init(MetalBorders);
	$useLocalCurrentObjectStackCache();
	if (MetalBorders::textBorder == nullptr) {
		$var($Border, var$0, static_cast<$Border*>($new($MetalBorders$Flush3DBorder)));
		$assignStatic(MetalBorders::textBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	}
	return MetalBorders::textBorder;
}

$Border* MetalBorders::getTextFieldBorder() {
	$init(MetalBorders);
	$useLocalCurrentObjectStackCache();
	if (MetalBorders::textFieldBorder == nullptr) {
		$var($Border, var$0, static_cast<$Border*>($new($MetalBorders$TextFieldBorder)));
		$assignStatic(MetalBorders::textFieldBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	}
	return MetalBorders::textFieldBorder;
}

$Border* MetalBorders::getToggleButtonBorder() {
	$init(MetalBorders);
	$useLocalCurrentObjectStackCache();
	if (MetalBorders::toggleButtonBorder == nullptr) {
		$var($Border, var$0, static_cast<$Border*>($new($MetalBorders$ToggleButtonBorder)));
		$assignStatic(MetalBorders::toggleButtonBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	}
	return MetalBorders::toggleButtonBorder;
}

$Border* MetalBorders::getDesktopIconBorder() {
	$init(MetalBorders);
	$useLocalCurrentObjectStackCache();
	$var($Border, var$0, static_cast<$Border*>($new($LineBorder, $($MetalLookAndFeel::getControlDarkShadow()), 1)));
	return $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($MatteBorder, 2, 2, 1, 2, $(static_cast<$Color*>($MetalLookAndFeel::getControl()))));
}

$Border* MetalBorders::getToolBarRolloverBorder() {
	$init(MetalBorders);
	$useLocalCurrentObjectStackCache();
	if ($MetalLookAndFeel::usingOcean()) {
		$var($Border, var$0, static_cast<$Border*>($new($MetalBorders$ButtonBorder)));
		return $new($CompoundBorder, var$0, $$new($MetalBorders$RolloverMarginBorder));
	}
	$var($Border, var$1, static_cast<$Border*>($new($MetalBorders$RolloverButtonBorder)));
	return $new($CompoundBorder, var$1, $$new($MetalBorders$RolloverMarginBorder));
}

$Border* MetalBorders::getToolBarNonrolloverBorder() {
	$init(MetalBorders);
	$useLocalCurrentObjectStackCache();
	if ($MetalLookAndFeel::usingOcean()) {
		$var($Border, var$0, static_cast<$Border*>($new($MetalBorders$ButtonBorder)));
		$new($CompoundBorder, var$0, $$new($MetalBorders$RolloverMarginBorder));
	}
	$var($Border, var$1, static_cast<$Border*>($new($MetalBorders$ButtonBorder)));
	return $new($CompoundBorder, var$1, $$new($MetalBorders$RolloverMarginBorder));
}

void clinit$MetalBorders($Class* class$) {
	$assignStatic(MetalBorders::NO_BUTTON_ROLLOVER, $new($StringUIClientPropertyKey, "NoButtonRollover"_s));
}

MetalBorders::MetalBorders() {
}

$Class* MetalBorders::load$($String* name, bool initialize) {
	$loadClass(MetalBorders, name, initialize, &_MetalBorders_ClassInfo_, clinit$MetalBorders, allocate$MetalBorders);
	return class$;
}

$Class* MetalBorders::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax