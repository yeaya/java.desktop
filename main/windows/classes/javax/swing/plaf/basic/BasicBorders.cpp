#include <javax/swing/plaf/basic/BasicBorders.h>

#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$FieldBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$MenuBarBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$RadioButtonBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$SplitPaneBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$SplitPaneDividerBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$ToggleButtonBorder.h>
#include <jcpp.h>

#undef RAISED

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $BorderUIResource$CompoundBorderUIResource = ::javax::swing::plaf::BorderUIResource$CompoundBorderUIResource;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $BasicBorders$ButtonBorder = ::javax::swing::plaf::basic::BasicBorders$ButtonBorder;
using $BasicBorders$FieldBorder = ::javax::swing::plaf::basic::BasicBorders$FieldBorder;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $BasicBorders$MenuBarBorder = ::javax::swing::plaf::basic::BasicBorders$MenuBarBorder;
using $BasicBorders$RadioButtonBorder = ::javax::swing::plaf::basic::BasicBorders$RadioButtonBorder;
using $BasicBorders$SplitPaneBorder = ::javax::swing::plaf::basic::BasicBorders$SplitPaneBorder;
using $BasicBorders$SplitPaneDividerBorder = ::javax::swing::plaf::basic::BasicBorders$SplitPaneDividerBorder;
using $BasicBorders$ToggleButtonBorder = ::javax::swing::plaf::basic::BasicBorders$ToggleButtonBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicBorders_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicBorders::*)()>(&BasicBorders::init$))},
	{"getButtonBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BasicBorders::getButtonBorder))},
	{"getInternalFrameBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BasicBorders::getInternalFrameBorder))},
	{"getMenuBarBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BasicBorders::getMenuBarBorder))},
	{"getProgressBarBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BasicBorders::getProgressBarBorder))},
	{"getRadioButtonBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BasicBorders::getRadioButtonBorder))},
	{"getSplitPaneBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BasicBorders::getSplitPaneBorder))},
	{"getSplitPaneDividerBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BasicBorders::getSplitPaneDividerBorder))},
	{"getTextFieldBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BasicBorders::getTextFieldBorder))},
	{"getToggleButtonBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BasicBorders::getToggleButtonBorder))},
	{}
};

$InnerClassInfo _BasicBorders_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$SplitPaneBorder", "javax.swing.plaf.basic.BasicBorders", "SplitPaneBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$SplitPaneDividerBorder", "javax.swing.plaf.basic.BasicBorders", "SplitPaneDividerBorder", $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$FieldBorder", "javax.swing.plaf.basic.BasicBorders", "FieldBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$MarginBorder", "javax.swing.plaf.basic.BasicBorders", "MarginBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$MenuBarBorder", "javax.swing.plaf.basic.BasicBorders", "MenuBarBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$RadioButtonBorder", "javax.swing.plaf.basic.BasicBorders", "RadioButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$ToggleButtonBorder", "javax.swing.plaf.basic.BasicBorders", "ToggleButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$ButtonBorder", "javax.swing.plaf.basic.BasicBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$RolloverMarginBorder", "javax.swing.plaf.basic.BasicBorders", "RolloverMarginBorder", $STATIC},
	{"javax.swing.plaf.basic.BasicBorders$RolloverButtonBorder", "javax.swing.plaf.basic.BasicBorders", "RolloverButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicBorders_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BasicBorders_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders$SplitPaneBorder,javax.swing.plaf.basic.BasicBorders$SplitPaneDividerBorder,javax.swing.plaf.basic.BasicBorders$FieldBorder,javax.swing.plaf.basic.BasicBorders$MarginBorder,javax.swing.plaf.basic.BasicBorders$MenuBarBorder,javax.swing.plaf.basic.BasicBorders$RadioButtonBorder,javax.swing.plaf.basic.BasicBorders$ToggleButtonBorder,javax.swing.plaf.basic.BasicBorders$ButtonBorder,javax.swing.plaf.basic.BasicBorders$RolloverMarginBorder,javax.swing.plaf.basic.BasicBorders$RolloverButtonBorder"
};

$Object* allocate$BasicBorders($Class* clazz) {
	return $of($alloc(BasicBorders));
}

void BasicBorders::init$() {
}

$Border* BasicBorders::getButtonBorder() {
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("Button.shadow"_s));
	$var($Color, var$2, table->getColor("Button.darkShadow"_s));
	$var($Color, var$3, table->getColor("Button.light"_s));
	$var($Border, var$0, static_cast<$Border*>($new($BasicBorders$ButtonBorder, var$1, var$2, var$3, $(table->getColor("Button.highlight"_s)))));
	$var($Border, buttonBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	return buttonBorder;
}

$Border* BasicBorders::getRadioButtonBorder() {
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("RadioButton.shadow"_s));
	$var($Color, var$2, table->getColor("RadioButton.darkShadow"_s));
	$var($Color, var$3, table->getColor("RadioButton.light"_s));
	$var($Border, var$0, static_cast<$Border*>($new($BasicBorders$RadioButtonBorder, var$1, var$2, var$3, $(table->getColor("RadioButton.highlight"_s)))));
	$var($Border, radioButtonBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	return radioButtonBorder;
}

$Border* BasicBorders::getToggleButtonBorder() {
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("ToggleButton.shadow"_s));
	$var($Color, var$2, table->getColor("ToggleButton.darkShadow"_s));
	$var($Color, var$3, table->getColor("ToggleButton.light"_s));
	$var($Border, var$0, static_cast<$Border*>($new($BasicBorders$ToggleButtonBorder, var$1, var$2, var$3, $(table->getColor("ToggleButton.highlight"_s)))));
	$var($Border, toggleButtonBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	return toggleButtonBorder;
}

$Border* BasicBorders::getMenuBarBorder() {
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$0, $nc(table)->getColor("MenuBar.shadow"_s));
	$var($Border, menuBarBorder, $new($BasicBorders$MenuBarBorder, var$0, $(table->getColor("MenuBar.highlight"_s))));
	return menuBarBorder;
}

$Border* BasicBorders::getSplitPaneBorder() {
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$0, $nc(table)->getColor("SplitPane.highlight"_s));
	$var($Border, splitPaneBorder, $new($BasicBorders$SplitPaneBorder, var$0, $(table->getColor("SplitPane.darkShadow"_s))));
	return splitPaneBorder;
}

$Border* BasicBorders::getSplitPaneDividerBorder() {
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$0, $nc(table)->getColor("SplitPane.highlight"_s));
	$var($Border, splitPaneBorder, $new($BasicBorders$SplitPaneDividerBorder, var$0, $(table->getColor("SplitPane.darkShadow"_s))));
	return splitPaneBorder;
}

$Border* BasicBorders::getTextFieldBorder() {
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$0, $nc(table)->getColor("TextField.shadow"_s));
	$var($Color, var$1, table->getColor("TextField.darkShadow"_s));
	$var($Color, var$2, table->getColor("TextField.light"_s));
	$var($Border, textFieldBorder, $new($BasicBorders$FieldBorder, var$0, var$1, var$2, $(table->getColor("TextField.highlight"_s))));
	return textFieldBorder;
}

$Border* BasicBorders::getProgressBarBorder() {
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$init($Color);
	$var($Border, progressBarBorder, $new($BorderUIResource$LineBorderUIResource, $Color::green, 2));
	return progressBarBorder;
}

$Border* BasicBorders::getInternalFrameBorder() {
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("InternalFrame.borderLight"_s));
	$var($Color, var$2, table->getColor("InternalFrame.borderHighlight"_s));
	$var($Color, var$3, table->getColor("InternalFrame.borderDarkShadow"_s));
	$var($Border, var$0, static_cast<$Border*>($new($BevelBorder, $BevelBorder::RAISED, var$1, var$2, var$3, $(table->getColor("InternalFrame.borderShadow"_s)))));
	$var($Border, internalFrameBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $($BorderFactory::createLineBorder($($nc(table)->getColor("InternalFrame.borderColor"_s)), 1))));
	return internalFrameBorder;
}

BasicBorders::BasicBorders() {
}

$Class* BasicBorders::load$($String* name, bool initialize) {
	$loadClass(BasicBorders, name, initialize, &_BasicBorders_ClassInfo_, allocate$BasicBorders);
	return class$;
}

$Class* BasicBorders::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax