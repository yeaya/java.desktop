#include <javax/swing/plaf/multi/MultiLookAndFeel.h>

#include <java/util/Vector.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/multi/MultiUIDefaults.h>
#include <jcpp.h>

using $LookAndFeelArray = $Array<::javax::swing::LookAndFeel>;
using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MultiUIDefaults = ::javax::swing::plaf::multi::MultiUIDefaults;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$MethodInfo _MultiLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiLookAndFeel::*)()>(&MultiLookAndFeel::init$))},
	{"createUIs", "(Ljavax/swing/plaf/ComponentUI;Ljava/util/Vector;Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", "(Ljavax/swing/plaf/ComponentUI;Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($ComponentUI*,$Vector*,$JComponent*)>(&MultiLookAndFeel::createUIs))},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"uisToArray", "(Ljava/util/Vector;)[Ljavax/swing/plaf/ComponentUI;", "(Ljava/util/Vector<+Ljavax/swing/plaf/ComponentUI;>;)[Ljavax/swing/plaf/ComponentUI;", $PROTECTED | $STATIC, $method(static_cast<$ComponentUIArray*(*)($Vector*)>(&MultiLookAndFeel::uisToArray))},
	{}
};

$ClassInfo _MultiLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiLookAndFeel",
	"javax.swing.LookAndFeel",
	nullptr,
	nullptr,
	_MultiLookAndFeel_MethodInfo_
};

$Object* allocate$MultiLookAndFeel($Class* clazz) {
	return $of($alloc(MultiLookAndFeel));
}

void MultiLookAndFeel::init$() {
	$LookAndFeel::init$();
}

$String* MultiLookAndFeel::getName() {
	return "Multiplexing Look and Feel"_s;
}

$String* MultiLookAndFeel::getID() {
	return "Multiplex"_s;
}

$String* MultiLookAndFeel::getDescription() {
	return "Allows multiple UI instances per component instance"_s;
}

bool MultiLookAndFeel::isNativeLookAndFeel() {
	return false;
}

bool MultiLookAndFeel::isSupportedLookAndFeel() {
	return true;
}

$UIDefaults* MultiLookAndFeel::getDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($String, packageName, "javax.swing.plaf.multi.Multi"_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		$of("ButtonUI"_s),
		$of($$str({packageName, "ButtonUI"_s})),
		$of("CheckBoxMenuItemUI"_s),
		$of($$str({packageName, "MenuItemUI"_s})),
		$of("CheckBoxUI"_s),
		$of($$str({packageName, "ButtonUI"_s})),
		$of("ColorChooserUI"_s),
		$of($$str({packageName, "ColorChooserUI"_s})),
		$of("ComboBoxUI"_s),
		$of($$str({packageName, "ComboBoxUI"_s})),
		$of("DesktopIconUI"_s),
		$of($$str({packageName, "DesktopIconUI"_s})),
		$of("DesktopPaneUI"_s),
		$of($$str({packageName, "DesktopPaneUI"_s})),
		$of("EditorPaneUI"_s),
		$of($$str({packageName, "TextUI"_s})),
		$of("FileChooserUI"_s),
		$of($$str({packageName, "FileChooserUI"_s})),
		$of("FormattedTextFieldUI"_s),
		$of($$str({packageName, "TextUI"_s})),
		$of("InternalFrameUI"_s),
		$of($$str({packageName, "InternalFrameUI"_s})),
		$of("LabelUI"_s),
		$of($$str({packageName, "LabelUI"_s})),
		$of("ListUI"_s),
		$of($$str({packageName, "ListUI"_s})),
		$of("MenuBarUI"_s),
		$of($$str({packageName, "MenuBarUI"_s})),
		$of("MenuItemUI"_s),
		$of($$str({packageName, "MenuItemUI"_s})),
		$of("MenuUI"_s),
		$of($$str({packageName, "MenuItemUI"_s})),
		$of("OptionPaneUI"_s),
		$of($$str({packageName, "OptionPaneUI"_s})),
		$of("PanelUI"_s),
		$of($$str({packageName, "PanelUI"_s})),
		$of("PasswordFieldUI"_s),
		$of($$str({packageName, "TextUI"_s})),
		$of("PopupMenuSeparatorUI"_s),
		$of($$str({packageName, "SeparatorUI"_s})),
		$of("PopupMenuUI"_s),
		$of($$str({packageName, "PopupMenuUI"_s})),
		$of("ProgressBarUI"_s),
		$of($$str({packageName, "ProgressBarUI"_s})),
		$of("RadioButtonMenuItemUI"_s),
		$of($$str({packageName, "MenuItemUI"_s})),
		$of("RadioButtonUI"_s),
		$of($$str({packageName, "ButtonUI"_s})),
		$of("RootPaneUI"_s),
		$of($$str({packageName, "RootPaneUI"_s})),
		$of("ScrollBarUI"_s),
		$of($$str({packageName, "ScrollBarUI"_s})),
		$of("ScrollPaneUI"_s),
		$of($$str({packageName, "ScrollPaneUI"_s})),
		$of("SeparatorUI"_s),
		$of($$str({packageName, "SeparatorUI"_s})),
		$of("SliderUI"_s),
		$of($$str({packageName, "SliderUI"_s})),
		$of("SpinnerUI"_s),
		$of($$str({packageName, "SpinnerUI"_s})),
		$of("SplitPaneUI"_s),
		$of($$str({packageName, "SplitPaneUI"_s})),
		$of("TabbedPaneUI"_s),
		$of($$str({packageName, "TabbedPaneUI"_s})),
		$of("TableHeaderUI"_s),
		$of($$str({packageName, "TableHeaderUI"_s})),
		$of("TableUI"_s),
		$of($$str({packageName, "TableUI"_s})),
		$of("TextAreaUI"_s),
		$of($$str({packageName, "TextUI"_s})),
		$of("TextFieldUI"_s),
		$of($$str({packageName, "TextUI"_s})),
		$of("TextPaneUI"_s),
		$of($$str({packageName, "TextUI"_s})),
		$of("ToggleButtonUI"_s),
		$of($$str({packageName, "ButtonUI"_s})),
		$of("ToolBarSeparatorUI"_s),
		$of($$str({packageName, "SeparatorUI"_s})),
		$of("ToolBarUI"_s),
		$of($$str({packageName, "ToolBarUI"_s})),
		$of("ToolTipUI"_s),
		$of($$str({packageName, "ToolTipUI"_s})),
		$of("TreeUI"_s),
		$of($$str({packageName, "TreeUI"_s})),
		$of("ViewportUI"_s),
		$of($$str({packageName, "ViewportUI"_s}))
	}));
	$var($UIDefaults, table, $new($MultiUIDefaults, uiDefaults->length / 2, 0.75f));
	table->putDefaults(uiDefaults);
	return table;
}

$ComponentUI* MultiLookAndFeel::createUIs($ComponentUI* mui, $Vector* uis, $JComponent* target) {
	$init(MultiLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($ComponentUI, ui, nullptr);
	$assign(ui, $nc($($UIManager::getDefaults()))->getUI(target));
	if (ui != nullptr) {
		$nc(uis)->addElement(ui);
		$var($LookAndFeelArray, auxiliaryLookAndFeels, nullptr);
		$assign(auxiliaryLookAndFeels, $UIManager::getAuxiliaryLookAndFeels());
		if (auxiliaryLookAndFeels != nullptr) {
			for (int32_t i = 0; i < auxiliaryLookAndFeels->length; ++i) {
				$assign(ui, $nc($($nc(auxiliaryLookAndFeels->get(i))->getDefaults()))->getUI(target));
				if (ui != nullptr) {
					uis->addElement(ui);
				}
			}
		}
	} else {
		return nullptr;
	}
	if ($nc(uis)->size() == 1) {
		return $cast($ComponentUI, uis->elementAt(0));
	} else {
		return mui;
	}
}

$ComponentUIArray* MultiLookAndFeel::uisToArray($Vector* uis) {
	$init(MultiLookAndFeel);
	$useLocalCurrentObjectStackCache();
	if (uis == nullptr) {
		return $new($ComponentUIArray, 0);
	} else {
		int32_t count = $nc(uis)->size();
		if (count > 0) {
			$var($ComponentUIArray, u, $new($ComponentUIArray, count));
			for (int32_t i = 0; i < count; ++i) {
				u->set(i, $cast($ComponentUI, $(uis->elementAt(i))));
			}
			return u;
		} else {
			return nullptr;
		}
	}
}

MultiLookAndFeel::MultiLookAndFeel() {
}

$Class* MultiLookAndFeel::load$($String* name, bool initialize) {
	$loadClass(MultiLookAndFeel, name, initialize, &_MultiLookAndFeel_ClassInfo_, allocate$MultiLookAndFeel);
	return class$;
}

$Class* MultiLookAndFeel::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax