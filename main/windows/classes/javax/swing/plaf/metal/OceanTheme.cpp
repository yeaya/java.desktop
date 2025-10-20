#include <javax/swing/plaf/metal/OceanTheme.h>

#include <java/awt/Color.h>
#include <java/awt/Insets.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <javax/swing/plaf/metal/OceanTheme$1.h>
#include <javax/swing/plaf/metal/OceanTheme$2.h>
#include <javax/swing/plaf/metal/OceanTheme$3.h>
#include <javax/swing/plaf/metal/OceanTheme$4.h>
#include <javax/swing/plaf/metal/OceanTheme$5.h>
#include <javax/swing/plaf/metal/OceanTheme$6.h>
#include <sun/swing/PrintColorUIResource.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BLACK
#undef CONTROL_TEXT_COLOR
#undef FALSE
#undef INACTIVE_CONTROL_TEXT_COLOR
#undef MENU_DISABLED_FOREGROUND
#undef OCEAN_BLACK
#undef OCEAN_DROP
#undef PRIMARY1
#undef PRIMARY2
#undef PRIMARY3
#undef SECONDARY1
#undef SECONDARY2
#undef SECONDARY3
#undef TRUE

using $Color = ::java::awt::Color;
using $Insets = ::java::awt::Insets;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Icon = ::javax::swing::Icon;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;
using $OceanTheme$1 = ::javax::swing::plaf::metal::OceanTheme$1;
using $OceanTheme$2 = ::javax::swing::plaf::metal::OceanTheme$2;
using $OceanTheme$3 = ::javax::swing::plaf::metal::OceanTheme$3;
using $OceanTheme$4 = ::javax::swing::plaf::metal::OceanTheme$4;
using $OceanTheme$5 = ::javax::swing::plaf::metal::OceanTheme$5;
using $OceanTheme$6 = ::javax::swing::plaf::metal::OceanTheme$6;
using $PrintColorUIResource = ::sun::swing::PrintColorUIResource;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0 : public $UIDefaults$LazyValue {
	$class(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(OceanTheme* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return $nc(inst$)->lambda$addCustomEntriesToTable$0(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0>());
	}
	OceanTheme* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, inst$)},
	{}
};
$MethodInfo OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/plaf/metal/OceanTheme;)V", nullptr, $PUBLIC, $method(static_cast<void(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::*)(OceanTheme*)>(&OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::load$($String* name, bool initialize) {
	$loadClass(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::class$ = nullptr;

$FieldInfo _OceanTheme_FieldInfo_[] = {
	{"PRIMARY1", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, PRIMARY1)},
	{"PRIMARY2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, PRIMARY2)},
	{"PRIMARY3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, PRIMARY3)},
	{"SECONDARY1", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, SECONDARY1)},
	{"SECONDARY2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, SECONDARY2)},
	{"SECONDARY3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, SECONDARY3)},
	{"CONTROL_TEXT_COLOR", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, CONTROL_TEXT_COLOR)},
	{"INACTIVE_CONTROL_TEXT_COLOR", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, INACTIVE_CONTROL_TEXT_COLOR)},
	{"MENU_DISABLED_FOREGROUND", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, MENU_DISABLED_FOREGROUND)},
	{"OCEAN_BLACK", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, OCEAN_BLACK)},
	{"OCEAN_DROP", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, OCEAN_DROP)},
	{}
};

$MethodInfo _OceanTheme_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OceanTheme::*)()>(&OceanTheme::init$))},
	{"addCustomEntriesToTable", "(Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC},
	{"getBlack", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getDesktopColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getHastenedIcon", "(Ljava/lang/String;Ljavax/swing/UIDefaults;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(static_cast<$Icon*(OceanTheme::*)($String*,$UIDefaults*)>(&OceanTheme::getHastenedIcon))},
	{"getIconResource", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(OceanTheme::*)($String*)>(&OceanTheme::getIconResource))},
	{"getInactiveControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getMenuDisabledForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrimary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getPrimary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getPrimary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getSecondary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getSecondary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getSecondary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"isSystemTheme", "()Z", nullptr, 0},
	{"lambda$addCustomEntriesToTable$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(OceanTheme::*)($UIDefaults*)>(&OceanTheme::lambda$addCustomEntriesToTable$0))},
	{}
};

$InnerClassInfo _OceanTheme_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.OceanTheme$IFIcon", "javax.swing.plaf.metal.OceanTheme", "IFIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.OceanTheme$COIcon", "javax.swing.plaf.metal.OceanTheme", "COIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.OceanTheme$6", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.OceanTheme$5", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.OceanTheme$4", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.OceanTheme$3", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.OceanTheme$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.OceanTheme$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OceanTheme_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.OceanTheme",
	"javax.swing.plaf.metal.DefaultMetalTheme",
	nullptr,
	_OceanTheme_FieldInfo_,
	_OceanTheme_MethodInfo_,
	nullptr,
	nullptr,
	_OceanTheme_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.OceanTheme$IFIcon,javax.swing.plaf.metal.OceanTheme$COIcon,javax.swing.plaf.metal.OceanTheme$6,javax.swing.plaf.metal.OceanTheme$5,javax.swing.plaf.metal.OceanTheme$4,javax.swing.plaf.metal.OceanTheme$3,javax.swing.plaf.metal.OceanTheme$2,javax.swing.plaf.metal.OceanTheme$1"
};

$Object* allocate$OceanTheme($Class* clazz) {
	return $of($alloc(OceanTheme));
}

$ColorUIResource* OceanTheme::PRIMARY1 = nullptr;
$ColorUIResource* OceanTheme::PRIMARY2 = nullptr;
$ColorUIResource* OceanTheme::PRIMARY3 = nullptr;
$ColorUIResource* OceanTheme::SECONDARY1 = nullptr;
$ColorUIResource* OceanTheme::SECONDARY2 = nullptr;
$ColorUIResource* OceanTheme::SECONDARY3 = nullptr;
$ColorUIResource* OceanTheme::CONTROL_TEXT_COLOR = nullptr;
$ColorUIResource* OceanTheme::INACTIVE_CONTROL_TEXT_COLOR = nullptr;
$ColorUIResource* OceanTheme::MENU_DISABLED_FOREGROUND = nullptr;
$ColorUIResource* OceanTheme::OCEAN_BLACK = nullptr;
$ColorUIResource* OceanTheme::OCEAN_DROP = nullptr;

void OceanTheme::init$() {
	$DefaultMetalTheme::init$();
}

void OceanTheme::addCustomEntriesToTable($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults$LazyValue, focusBorder, static_cast<$UIDefaults$LazyValue*>($new(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, this)));
	$var($List, buttonGradient, $Arrays::asList($$new($ObjectArray, {
		$($of($Float::valueOf(0.3f))),
		$($of($Float::valueOf(0.0f))),
		$of($$new($ColorUIResource, 0x00DDE8F3)),
		$($of(getWhite())),
		$($of(getSecondary2()))
	})));
	$var($Color, cccccc, $new($ColorUIResource, 0x00CCCCCC));
	$var($Color, dadada, $new($ColorUIResource, 0x00DADADA));
	$var($Color, c8ddf2, $new($ColorUIResource, 0x00C8DDF2));
	$var($Object, directoryIcon, getIconResource("icons/ocean/directory.gif"_s));
	$var($Object, fileIcon, getIconResource("icons/ocean/file.gif"_s));
	$var($List, sliderGradient, $Arrays::asList($$new($ObjectArray, {
		$($of($Float::valueOf(0.3f))),
		$($of($Float::valueOf(0.2f))),
		$of(c8ddf2),
		$($of(getWhite())),
		$of($$new($ColorUIResource, static_cast<$Color*>(OceanTheme::SECONDARY2)))
	})));
		$init($Boolean);
	$var($ObjectArray, defaults, $new($ObjectArray, {
		$of("Button.gradient"_s),
		$of(buttonGradient),
		$of("Button.rollover"_s),
		$of($Boolean::TRUE),
		$of("Button.toolBarBorderBackground"_s),
		$of(OceanTheme::INACTIVE_CONTROL_TEXT_COLOR),
		$of("Button.disabledToolBarBorderBackground"_s),
		$of(cccccc),
		$of("Button.rolloverIconType"_s),
		$of("ocean"_s),
		$of("CheckBox.rollover"_s),
		$of($Boolean::TRUE),
		$of("CheckBox.gradient"_s),
		$of(buttonGradient),
		$of("CheckBoxMenuItem.gradient"_s),
		$of(buttonGradient),
		$of("FileChooser.homeFolderIcon"_s),
		$(getIconResource("icons/ocean/homeFolder.gif"_s)),
		$of("FileChooser.newFolderIcon"_s),
		$(getIconResource("icons/ocean/newFolder.gif"_s)),
		$of("FileChooser.upFolderIcon"_s),
		$(getIconResource("icons/ocean/upFolder.gif"_s)),
		$of("FileView.computerIcon"_s),
		$(getIconResource("icons/ocean/computer.gif"_s)),
		$of("FileView.directoryIcon"_s),
		directoryIcon,
		$of("FileView.hardDriveIcon"_s),
		$(getIconResource("icons/ocean/hardDrive.gif"_s)),
		$of("FileView.fileIcon"_s),
		fileIcon,
		$of("FileView.floppyDriveIcon"_s),
		$(getIconResource("icons/ocean/floppy.gif"_s)),
		$of("Label.disabledForeground"_s),
		$($of(getInactiveControlTextColor())),
		$of("Menu.opaque"_s),
		$of($Boolean::FALSE),
		$of("MenuBar.gradient"_s),
		$($of($Arrays::asList($$new($ObjectArray, {
			$($of($Float::valueOf(1.0f))),
			$($of($Float::valueOf(0.0f))),
			$($of(getWhite())),
			$of(dadada),
			$of($$new($ColorUIResource, dadada))
		})))),
		$of("MenuBar.borderColor"_s),
		$of(cccccc),
		$of("InternalFrame.activeTitleGradient"_s),
		$of(buttonGradient),
		$of("InternalFrame.closeIcon"_s),
		$of($$new($OceanTheme$1, this)),
		$of("InternalFrame.iconifyIcon"_s),
		$of($$new($OceanTheme$2, this)),
		$of("InternalFrame.minimizeIcon"_s),
		$of($$new($OceanTheme$3, this)),
		$of("InternalFrame.icon"_s),
		$(getIconResource("icons/ocean/menu.gif"_s)),
		$of("InternalFrame.maximizeIcon"_s),
		$of($$new($OceanTheme$4, this)),
		$of("InternalFrame.paletteCloseIcon"_s),
		$of($$new($OceanTheme$5, this)),
		$of("List.focusCellHighlightBorder"_s),
		$of(focusBorder),
		$of("MenuBarUI"_s),
		$of("javax.swing.plaf.metal.MetalMenuBarUI"_s),
		$of("OptionPane.errorIcon"_s),
		$(getIconResource("icons/ocean/error.png"_s)),
		$of("OptionPane.informationIcon"_s),
		$(getIconResource("icons/ocean/info.png"_s)),
		$of("OptionPane.questionIcon"_s),
		$(getIconResource("icons/ocean/question.png"_s)),
		$of("OptionPane.warningIcon"_s),
		$(getIconResource("icons/ocean/warning.png"_s)),
		$of("RadioButton.gradient"_s),
		$of(buttonGradient),
		$of("RadioButton.rollover"_s),
		$of($Boolean::TRUE),
		$of("RadioButtonMenuItem.gradient"_s),
		$of(buttonGradient),
		$of("ScrollBar.gradient"_s),
		$of(buttonGradient),
		$of("Slider.altTrackColor"_s),
		$of($$new($ColorUIResource, 0x00D2E2EF)),
		$of("Slider.gradient"_s),
		$of(sliderGradient),
		$of("Slider.focusGradient"_s),
		$of(sliderGradient),
		$of("SplitPane.oneTouchButtonsOpaque"_s),
		$of($Boolean::FALSE),
		$of("SplitPane.dividerFocusColor"_s),
		$of(c8ddf2),
		$of("TabbedPane.borderHightlightColor"_s),
		$($of(getPrimary1())),
		$of("TabbedPane.contentAreaColor"_s),
		$of(c8ddf2),
		$of("TabbedPane.contentBorderInsets"_s),
		$of($$new($Insets, 4, 2, 3, 3)),
		$of("TabbedPane.selected"_s),
		$of(c8ddf2),
		$of("TabbedPane.tabAreaBackground"_s),
		$of(dadada),
		$of("TabbedPane.tabAreaInsets"_s),
		$of($$new($Insets, 2, 2, 0, 6)),
		$of("TabbedPane.unselectedBackground"_s),
		$of(OceanTheme::SECONDARY3),
		$of("Table.focusCellHighlightBorder"_s),
		$of(focusBorder),
		$of("Table.gridColor"_s),
		$of(OceanTheme::SECONDARY1),
		$of("TableHeader.focusCellBackground"_s),
		$of(c8ddf2),
		$of("ToggleButton.gradient"_s),
		$of(buttonGradient),
		$of("ToolBar.borderColor"_s),
		$of(cccccc),
		$of("ToolBar.isRollover"_s),
		$of($Boolean::TRUE),
		$of("Tree.closedIcon"_s),
		directoryIcon,
		$of("Tree.collapsedIcon"_s),
		$of($$new($OceanTheme$6, this)),
		$of("Tree.expandedIcon"_s),
		$(getIconResource("icons/ocean/expanded.gif"_s)),
		$of("Tree.leafIcon"_s),
		fileIcon,
		$of("Tree.openIcon"_s),
		directoryIcon,
		$of("Tree.selectionBorderColor"_s),
		$($of(getPrimary1())),
		$of("Tree.dropLineColor"_s),
		$($of(getPrimary1())),
		$of("Table.dropLineColor"_s),
		$($of(getPrimary1())),
		$of("Table.dropLineShortColor"_s),
		$of(OceanTheme::OCEAN_BLACK),
		$of("Table.dropCellBackground"_s),
		$of(OceanTheme::OCEAN_DROP),
		$of("Tree.dropCellBackground"_s),
		$of(OceanTheme::OCEAN_DROP),
		$of("List.dropCellBackground"_s),
		$of(OceanTheme::OCEAN_DROP),
		$of("List.dropLineColor"_s),
		$($of(getPrimary1()))
	}));
	$nc(table)->putDefaults(defaults);
}

bool OceanTheme::isSystemTheme() {
	return true;
}

$String* OceanTheme::getName() {
	return "Ocean"_s;
}

$ColorUIResource* OceanTheme::getPrimary1() {
	return OceanTheme::PRIMARY1;
}

$ColorUIResource* OceanTheme::getPrimary2() {
	return OceanTheme::PRIMARY2;
}

$ColorUIResource* OceanTheme::getPrimary3() {
	return OceanTheme::PRIMARY3;
}

$ColorUIResource* OceanTheme::getSecondary1() {
	return OceanTheme::SECONDARY1;
}

$ColorUIResource* OceanTheme::getSecondary2() {
	return OceanTheme::SECONDARY2;
}

$ColorUIResource* OceanTheme::getSecondary3() {
	return OceanTheme::SECONDARY3;
}

$ColorUIResource* OceanTheme::getBlack() {
	return OceanTheme::OCEAN_BLACK;
}

$ColorUIResource* OceanTheme::getDesktopColor() {
	$init($MetalTheme);
	return $MetalTheme::white;
}

$ColorUIResource* OceanTheme::getInactiveControlTextColor() {
	return OceanTheme::INACTIVE_CONTROL_TEXT_COLOR;
}

$ColorUIResource* OceanTheme::getControlTextColor() {
	return OceanTheme::CONTROL_TEXT_COLOR;
}

$ColorUIResource* OceanTheme::getMenuDisabledForeground() {
	return OceanTheme::MENU_DISABLED_FOREGROUND;
}

$Object* OceanTheme::getIconResource($String* iconID) {
	return $of($SwingUtilities2::makeIcon($of(this)->getClass(), OceanTheme::class$, iconID));
}

$Icon* OceanTheme::getHastenedIcon($String* iconID, $UIDefaults* table) {
	$var($Object, res, getIconResource(iconID));
	return $cast($Icon, $nc(($cast($UIDefaults$LazyValue, res)))->createValue(table));
}

$Object* OceanTheme::lambda$addCustomEntriesToTable$0($UIDefaults* t) {
	return $of($new($BorderUIResource$LineBorderUIResource, $(getPrimary1())));
}

void clinit$OceanTheme($Class* class$) {
	$assignStatic(OceanTheme::PRIMARY1, $new($ColorUIResource, 0x006382BF));
	$assignStatic(OceanTheme::PRIMARY2, $new($ColorUIResource, 0x00A3B8CC));
	$assignStatic(OceanTheme::PRIMARY3, $new($ColorUIResource, 0x00B8CFE5));
	$assignStatic(OceanTheme::SECONDARY1, $new($ColorUIResource, 0x007A8A99));
	$assignStatic(OceanTheme::SECONDARY2, $new($ColorUIResource, 0x00B8CFE5));
	$assignStatic(OceanTheme::SECONDARY3, $new($ColorUIResource, 0x00EEEEEE));
	$init($Color);
	$assignStatic(OceanTheme::CONTROL_TEXT_COLOR, $new($PrintColorUIResource, 0x00333333, $Color::BLACK));
	$assignStatic(OceanTheme::INACTIVE_CONTROL_TEXT_COLOR, $new($ColorUIResource, 0x00999999));
	$assignStatic(OceanTheme::MENU_DISABLED_FOREGROUND, $new($ColorUIResource, 0x00999999));
	$assignStatic(OceanTheme::OCEAN_BLACK, $new($PrintColorUIResource, 0x00333333, $Color::BLACK));
	$assignStatic(OceanTheme::OCEAN_DROP, $new($ColorUIResource, 0x00D2E9FF));
}

OceanTheme::OceanTheme() {
}

$Class* OceanTheme::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::classInfo$.name)) {
			return OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::load$(name, initialize);
		}
	}
	$loadClass(OceanTheme, name, initialize, &_OceanTheme_ClassInfo_, clinit$OceanTheme, allocate$OceanTheme);
	return class$;
}

$Class* OceanTheme::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax