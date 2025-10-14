#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$3.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxEditor.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$XPComboBoxButton.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$GlyphButton.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef CP_BORDER
#undef CP_DROPDOWNBUTTONRIGHT
#undef CP_READONLY
#undef DISABLED
#undef HOT
#undef NORMAL
#undef PRESSED

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsComboBoxUI$1 = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$1;
using $WindowsComboBoxUI$2 = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$2;
using $WindowsComboBoxUI$3 = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$3;
using $WindowsComboBoxUI$WinComboPopUp = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WinComboPopUp;
using $WindowsComboBoxUI$WindowsComboBoxEditor = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WindowsComboBoxEditor;
using $WindowsComboBoxUI$WindowsComboBoxRenderer = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WindowsComboBoxRenderer;
using $WindowsComboBoxUI$XPComboBoxButton = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$XPComboBoxButton;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$GlyphButton = ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $BasicComboBoxEditor$UIResource = ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource;
using $BasicComboBoxRenderer = ::javax::swing::plaf::basic::BasicComboBoxRenderer;
using $BasicComboBoxRenderer$UIResource = ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsComboBoxUI_FieldInfo_[] = {
	{"rolloverListener", "Ljava/awt/event/MouseListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsComboBoxUI, rolloverListener)},
	{"isRollover", "Z", nullptr, $PRIVATE, $field(WindowsComboBoxUI, isRollover)},
	{"componentOrientationListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsComboBoxUI, componentOrientationListener)},
	{}
};

$MethodInfo _WindowsComboBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsComboBoxUI::*)()>(&WindowsComboBoxUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$100))},
	{"access$1000", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$1000))},
	{"access$1100", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$1100))},
	{"access$1200", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$1200))},
	{"access$1300", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$1300))},
	{"access$1400", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$1400))},
	{"access$1500", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$1500))},
	{"access$1600", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$1600))},
	{"access$1700", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$1700))},
	{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$200))},
	{"access$300", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$300))},
	{"access$400", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$400))},
	{"access$500", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$500))},
	{"access$600", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljava/awt/Insets;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Insets*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$600))},
	{"access$700", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$700))},
	{"access$800", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$800))},
	{"access$900", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsComboBoxUI*)>(&WindowsComboBoxUI::access$900))},
	{"configureEditor", "()V", nullptr, $PROTECTED},
	{"createArrowButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createEditor", "()Ljavax/swing/ComboBoxEditor;", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PROTECTED},
	{"createRenderer", "()Ljavax/swing/ListCellRenderer;", "()Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;", $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsComboBoxUI::createUI))},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getXPComboBoxState", "(Ljavax/swing/JComponent;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, 0},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintCurrentValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Z)V", nullptr, $PUBLIC},
	{"paintCurrentValueBackground", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Z)V", nullptr, $PUBLIC},
	{"paintXPComboBoxBackground", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsComboBoxUI::*)($Graphics*,$JComponent*)>(&WindowsComboBoxUI::paintXPComboBoxBackground))},
	{"unconfigureEditor", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsComboBoxUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WindowsComboBoxRenderer", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxEditor", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WindowsComboBoxEditor", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WinComboPopUp", $PROTECTED},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$XPComboBoxButton", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "XPComboBoxButton", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$3", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsComboBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI",
	"javax.swing.plaf.basic.BasicComboBoxUI",
	nullptr,
	_WindowsComboBoxUI_FieldInfo_,
	_WindowsComboBoxUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsComboBoxUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer,com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder,com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxEditor,com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp,com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler,com.sun.java.swing.plaf.windows.WindowsComboBoxUI$XPComboBoxButton,com.sun.java.swing.plaf.windows.WindowsComboBoxUI$3,com.sun.java.swing.plaf.windows.WindowsComboBoxUI$2,com.sun.java.swing.plaf.windows.WindowsComboBoxUI$1"
};

$Object* allocate$WindowsComboBoxUI($Class* clazz) {
	return $of($alloc(WindowsComboBoxUI));
}

$MouseListener* WindowsComboBoxUI::rolloverListener = nullptr;
$PropertyChangeListener* WindowsComboBoxUI::componentOrientationListener = nullptr;

$JComboBox* WindowsComboBoxUI::access$1700(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* WindowsComboBoxUI::access$1600(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* WindowsComboBoxUI::access$1500(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* WindowsComboBoxUI::access$1400(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* WindowsComboBoxUI::access$1300(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* WindowsComboBoxUI::access$1200(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* WindowsComboBoxUI::access$1100(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* WindowsComboBoxUI::access$1000(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->comboBox;
}

$JButton* WindowsComboBoxUI::access$900(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* WindowsComboBoxUI::access$800(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* WindowsComboBoxUI::access$700(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->arrowButton;
}

$Insets* WindowsComboBoxUI::access$600(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->getInsets();
}

$JButton* WindowsComboBoxUI::access$500(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* WindowsComboBoxUI::access$400(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* WindowsComboBoxUI::access$300(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JComboBox* WindowsComboBoxUI::access$200(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->comboBox;
}

$JButton* WindowsComboBoxUI::access$100(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* WindowsComboBoxUI::access$000(WindowsComboBoxUI* x0) {
	$init(WindowsComboBoxUI);
	return $nc(x0)->arrowButton;
}

void WindowsComboBoxUI::init$() {
	$BasicComboBoxUI::init$();
	this->isRollover = false;
}

$ComponentUI* WindowsComboBoxUI::createUI($JComponent* c) {
	$init(WindowsComboBoxUI);
	return $new(WindowsComboBoxUI);
}

void WindowsComboBoxUI::installUI($JComponent* c) {
	$BasicComboBoxUI::installUI(c);
	this->isRollover = false;
	$nc(this->comboBox)->setRequestFocusEnabled(true);
	if ($XPStyle::getXP() != nullptr && this->arrowButton != nullptr) {
		$nc(this->comboBox)->addMouseListener(WindowsComboBoxUI::rolloverListener);
		$nc(this->arrowButton)->addMouseListener(WindowsComboBoxUI::rolloverListener);
		$nc(this->comboBox)->setBorder($$new($EmptyBorder, 1, 1, 1, 1));
	}
}

void WindowsComboBoxUI::uninstallUI($JComponent* c) {
	$nc(this->comboBox)->removeMouseListener(WindowsComboBoxUI::rolloverListener);
	if (this->arrowButton != nullptr) {
		$nc(this->arrowButton)->removeMouseListener(WindowsComboBoxUI::rolloverListener);
	}
	$BasicComboBoxUI::uninstallUI(c);
}

void WindowsComboBoxUI::installListeners() {
	$BasicComboBoxUI::installListeners();
	$var($XPStyle, xp, $XPStyle::getXP());
	$init($TMSchema$Part);
	if (xp != nullptr && xp->isSkinDefined(this->comboBox, $TMSchema$Part::CP_DROPDOWNBUTTONRIGHT)) {
		$nc(this->comboBox)->addPropertyChangeListener("componentOrientation"_s, WindowsComboBoxUI::componentOrientationListener);
	}
}

void WindowsComboBoxUI::uninstallListeners() {
	$BasicComboBoxUI::uninstallListeners();
	$nc(this->comboBox)->removePropertyChangeListener("componentOrientation"_s, WindowsComboBoxUI::componentOrientationListener);
}

void WindowsComboBoxUI::configureEditor() {
	$BasicComboBoxUI::configureEditor();
	if ($XPStyle::getXP() != nullptr) {
		$nc(this->editor)->addMouseListener(WindowsComboBoxUI::rolloverListener);
	}
}

void WindowsComboBoxUI::unconfigureEditor() {
	$BasicComboBoxUI::unconfigureEditor();
	$nc(this->editor)->removeMouseListener(WindowsComboBoxUI::rolloverListener);
}

void WindowsComboBoxUI::paint($Graphics* g, $JComponent* c) {
	if ($XPStyle::getXP() != nullptr) {
		paintXPComboBoxBackground(g, c);
	}
	$BasicComboBoxUI::paint(g, c);
}

$TMSchema$State* WindowsComboBoxUI::getXPComboBoxState($JComponent* c) {
	$init($TMSchema$State);
	$TMSchema$State* state = $TMSchema$State::NORMAL;
	if (!$nc(c)->isEnabled()) {
		state = $TMSchema$State::DISABLED;
	} else if (isPopupVisible(this->comboBox)) {
		state = $TMSchema$State::PRESSED;
	} else {
		bool var$1 = $nc(this->comboBox)->isEditable();
		if (var$1 && $nc($($nc($($nc(this->comboBox)->getEditor()))->getEditorComponent()))->isFocusOwner()) {
			state = $TMSchema$State::PRESSED;
		} else if (this->isRollover) {
			state = $TMSchema$State::HOT;
		}
	}
	return state;
}

void WindowsComboBoxUI::paintXPComboBoxBackground($Graphics* g, $JComponent* c) {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp == nullptr) {
		return;
	}
	$TMSchema$State* state = getXPComboBoxState(c);
	$var($XPStyle$Skin, skin, nullptr);
	bool var$0 = !$nc(this->comboBox)->isEditable();
	$init($TMSchema$Part);
	if (var$0 && $nc(xp)->isSkinDefined(c, $TMSchema$Part::CP_READONLY)) {
		$assign(skin, xp->getSkin(c, $TMSchema$Part::CP_READONLY));
	}
	if (skin == nullptr) {
		$assign(skin, $nc(xp)->getSkin(c, $TMSchema$Part::CP_BORDER));
	}
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc(skin)->paintSkin(var$1, 0, 0, var$2, c->getHeight(), state);
}

void WindowsComboBoxUI::paintCurrentValue($Graphics* g, $Rectangle* bounds, bool hasFocus) {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$nc(bounds)->x += 2;
		bounds->y += 2;
		bounds->width -= 4;
		bounds->height -= 4;
	} else {
		$nc(bounds)->x += 1;
		bounds->y += 1;
		bounds->width -= 2;
		bounds->height -= 2;
	}
	bool var$0 = !$nc(this->comboBox)->isEditable() && xp != nullptr;
	$init($TMSchema$Part);
	if (var$0 && xp->isSkinDefined(this->comboBox, $TMSchema$Part::CP_READONLY)) {
		$var($ListCellRenderer, renderer, $nc(this->comboBox)->getRenderer());
		$var($Component, c, nullptr);
		if (hasFocus && !isPopupVisible(this->comboBox)) {
			$assign(c, $nc(renderer)->getListCellRendererComponent(this->listBox, $($nc(this->comboBox)->getSelectedItem()), -1, true, false));
		} else {
			$assign(c, $nc(renderer)->getListCellRendererComponent(this->listBox, $($nc(this->comboBox)->getSelectedItem()), -1, false, false));
		}
		$nc(c)->setFont($($nc(this->comboBox)->getFont()));
		if ($nc(this->comboBox)->isEnabled()) {
			c->setForeground($($nc(this->comboBox)->getForeground()));
			c->setBackground($($nc(this->comboBox)->getBackground()));
		} else {
			c->setForeground($($DefaultLookup::getColor(this->comboBox, this, "ComboBox.disabledForeground"_s, nullptr)));
			c->setBackground($($DefaultLookup::getColor(this->comboBox, this, "ComboBox.disabledBackground"_s, nullptr)));
		}
		bool shouldValidate = false;
		if ($instanceOf($JPanel, c)) {
			shouldValidate = true;
		}
		$nc(this->currentValuePane)->paintComponent(g, c, this->comboBox, $nc(bounds)->x, bounds->y, bounds->width, bounds->height, shouldValidate);
	} else {
		$BasicComboBoxUI::paintCurrentValue(g, bounds, hasFocus);
	}
}

void WindowsComboBoxUI::paintCurrentValueBackground($Graphics* g, $Rectangle* bounds, bool hasFocus) {
	if ($XPStyle::getXP() == nullptr) {
		$BasicComboBoxUI::paintCurrentValueBackground(g, bounds, hasFocus);
	}
}

$Dimension* WindowsComboBoxUI::getMinimumSize($JComponent* c) {
	$var($Dimension, d, $BasicComboBoxUI::getMinimumSize(c));
	if ($XPStyle::getXP() != nullptr) {
		$nc(d)->width += 7;
		bool isEditable = false;
		if ($instanceOf($JComboBox, c)) {
			isEditable = $nc(($cast($JComboBox, c)))->isEditable();
		}
		if ($instanceOf($EmptyBorder, $($nc(($cast($JComboBox, c)))->getBorder()))) {
			d->height += isEditable ? 2 : 4;
		} else {
			d->height += isEditable ? 4 : 6;
		}
	} else {
		$nc(d)->width += 4;
		d->height += 2;
	}
	return d;
}

$LayoutManager* WindowsComboBoxUI::createLayoutManager() {
	return $new($WindowsComboBoxUI$3, this);
}

void WindowsComboBoxUI::installKeyboardActions() {
	$BasicComboBoxUI::installKeyboardActions();
}

$ComboPopup* WindowsComboBoxUI::createPopup() {
	return $new($WindowsComboBoxUI$WinComboPopUp, this, this->comboBox);
}

$ComboBoxEditor* WindowsComboBoxUI::createEditor() {
	return $new($WindowsComboBoxUI$WindowsComboBoxEditor);
}

$ListCellRenderer* WindowsComboBoxUI::createRenderer() {
	$var($XPStyle, xp, $XPStyle::getXP());
	$init($TMSchema$Part);
	if (xp != nullptr && xp->isSkinDefined(this->comboBox, $TMSchema$Part::CP_READONLY)) {
		return $new($WindowsComboBoxUI$WindowsComboBoxRenderer);
	} else {
		return $BasicComboBoxUI::createRenderer();
	}
}

$JButton* WindowsComboBoxUI::createArrowButton() {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		return $new($WindowsComboBoxUI$XPComboBoxButton, this, xp);
	} else {
		return $BasicComboBoxUI::createArrowButton();
	}
}

void clinit$WindowsComboBoxUI($Class* class$) {
	$assignStatic(WindowsComboBoxUI::rolloverListener, $new($WindowsComboBoxUI$1));
	$assignStatic(WindowsComboBoxUI::componentOrientationListener, $new($WindowsComboBoxUI$2));
}

WindowsComboBoxUI::WindowsComboBoxUI() {
}

$Class* WindowsComboBoxUI::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxUI, name, initialize, &_WindowsComboBoxUI_ClassInfo_, clinit$WindowsComboBoxUI, allocate$WindowsComboBoxUI);
	return class$;
}

$Class* WindowsComboBoxUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com