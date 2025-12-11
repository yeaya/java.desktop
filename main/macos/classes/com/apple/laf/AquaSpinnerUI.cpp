#include <com/apple/laf/AquaSpinnerUI.h>

#include <com/apple/laf/AquaSpinnerUI$1.h>
#include <com/apple/laf/AquaSpinnerUI$2.h>
#include <com/apple/laf/AquaSpinnerUI$ArrowButtonHandler.h>
#include <com/apple/laf/AquaSpinnerUI$PropertyChangeHandler.h>
#include <com/apple/laf/AquaSpinnerUI$SpinPainter.h>
#include <com/apple/laf/AquaSpinnerUI$SpinnerLayout.h>
#include <com/apple/laf/AquaSpinnerUI$TransparentButton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/SpinnerUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $ComponentArray = $Array<::java::awt::Component>;
using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $AquaSpinnerUI$1 = ::com::apple::laf::AquaSpinnerUI$1;
using $AquaSpinnerUI$2 = ::com::apple::laf::AquaSpinnerUI$2;
using $AquaSpinnerUI$ArrowButtonHandler = ::com::apple::laf::AquaSpinnerUI$ArrowButtonHandler;
using $AquaSpinnerUI$PropertyChangeHandler = ::com::apple::laf::AquaSpinnerUI$PropertyChangeHandler;
using $AquaSpinnerUI$SpinPainter = ::com::apple::laf::AquaSpinnerUI$SpinPainter;
using $AquaSpinnerUI$SpinnerLayout = ::com::apple::laf::AquaSpinnerUI$SpinnerLayout;
using $AquaSpinnerUI$TransparentButton = ::com::apple::laf::AquaSpinnerUI$TransparentButton;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $SpinnerUI = ::javax::swing::plaf::SpinnerUI;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSpinnerUI_FieldInfo_[] = {
	{"propertyChangeListener", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<+Ljava/beans/PropertyChangeListener;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaSpinnerUI, propertyChangeListener)},
	{"nextButtonHandler", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaSpinnerUI, nextButtonHandler)},
	{"previousButtonHandler", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaSpinnerUI, previousButtonHandler)},
	{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(AquaSpinnerUI, spinner)},
	{"spinPainter", "Lcom/apple/laf/AquaSpinnerUI$SpinPainter;", nullptr, $PRIVATE, $field(AquaSpinnerUI, spinPainter)},
	{"next", "Lcom/apple/laf/AquaSpinnerUI$TransparentButton;", nullptr, $PRIVATE, $field(AquaSpinnerUI, next)},
	{"prev", "Lcom/apple/laf/AquaSpinnerUI$TransparentButton;", nullptr, $PRIVATE, $field(AquaSpinnerUI, prev)},
	{"wasOpaque", "Z", nullptr, 0, $field(AquaSpinnerUI, wasOpaque)},
	{}
};

$MethodInfo _AquaSpinnerUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaSpinnerUI::*)()>(&AquaSpinnerUI::init$))},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $method(static_cast<$ActionMap*(AquaSpinnerUI::*)()>(&AquaSpinnerUI::createActionMap))},
	{"createEditor", "()Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createNextButton", "()Lcom/apple/laf/AquaSpinnerUI$TransparentButton;", nullptr, $PROTECTED},
	{"createPreviousButton", "()Lcom/apple/laf/AquaSpinnerUI$TransparentButton;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaSpinnerUI::createUI))},
	{"fixupEditor", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $method(static_cast<$ActionMap*(AquaSpinnerUI::*)()>(&AquaSpinnerUI::getActionMap))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, $PRIVATE, $method(static_cast<$InputMap*(AquaSpinnerUI::*)(int32_t)>(&AquaSpinnerUI::getInputMap))},
	{"getNextButtonHandler", "()Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;", nullptr, $STATIC, $method(static_cast<$AquaSpinnerUI$ArrowButtonHandler*(*)()>(&AquaSpinnerUI::getNextButtonHandler))},
	{"getPreviousButtonHandler", "()Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;", nullptr, $STATIC, $method(static_cast<$AquaSpinnerUI$ArrowButtonHandler*(*)()>(&AquaSpinnerUI::getPreviousButtonHandler))},
	{"getPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $STATIC, $method(static_cast<$PropertyChangeListener*(*)()>(&AquaSpinnerUI::getPropertyChangeListener))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaSpinnerUI::*)()>(&AquaSpinnerUI::installKeyboardActions))},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"maybeAdd", "(Ljava/awt/Component;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(AquaSpinnerUI::*)($Component*,$String*)>(&AquaSpinnerUI::maybeAdd))},
	{"replaceEditor", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateEnabledState", "()V", nullptr, 0},
	{"updateEnabledState", "(Ljava/awt/Container;Z)V", nullptr, $PRIVATE, $method(static_cast<void(AquaSpinnerUI::*)($Container*,bool)>(&AquaSpinnerUI::updateEnabledState))},
	{"updateToolTipTextForChildren", "(Ljavax/swing/JComponent;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaSpinnerUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSpinnerUI$PropertyChangeHandler", "com.apple.laf.AquaSpinnerUI", "PropertyChangeHandler", $STATIC},
	{"com.apple.laf.AquaSpinnerUI$SpinnerLayout", "com.apple.laf.AquaSpinnerUI", "SpinnerLayout", $STATIC},
	{"com.apple.laf.AquaSpinnerUI$SpinPainter", "com.apple.laf.AquaSpinnerUI", "SpinPainter", 0},
	{"com.apple.laf.AquaSpinnerUI$ArrowButtonHandler", "com.apple.laf.AquaSpinnerUI", "ArrowButtonHandler", $PRIVATE | $STATIC},
	{"com.apple.laf.AquaSpinnerUI$TransparentButton", "com.apple.laf.AquaSpinnerUI", "TransparentButton", 0},
	{"com.apple.laf.AquaSpinnerUI$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaSpinnerUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaSpinnerUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaSpinnerUI",
	"javax.swing.plaf.SpinnerUI",
	nullptr,
	_AquaSpinnerUI_FieldInfo_,
	_AquaSpinnerUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaSpinnerUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSpinnerUI$PropertyChangeHandler,com.apple.laf.AquaSpinnerUI$SpinnerLayout,com.apple.laf.AquaSpinnerUI$SpinPainter,com.apple.laf.AquaSpinnerUI$ArrowButtonHandler,com.apple.laf.AquaSpinnerUI$TransparentButton,com.apple.laf.AquaSpinnerUI$2,com.apple.laf.AquaSpinnerUI$1"
};

$Object* allocate$AquaSpinnerUI($Class* clazz) {
	return $of($alloc(AquaSpinnerUI));
}

$AquaUtils$RecyclableSingleton* AquaSpinnerUI::propertyChangeListener = nullptr;
$AquaUtils$RecyclableSingleton* AquaSpinnerUI::nextButtonHandler = nullptr;
$AquaUtils$RecyclableSingleton* AquaSpinnerUI::previousButtonHandler = nullptr;

void AquaSpinnerUI::init$() {
	$SpinnerUI::init$();
}

$PropertyChangeListener* AquaSpinnerUI::getPropertyChangeListener() {
	$init(AquaSpinnerUI);
	return $cast($PropertyChangeListener, $nc(AquaSpinnerUI::propertyChangeListener)->get());
}

$AquaSpinnerUI$ArrowButtonHandler* AquaSpinnerUI::getNextButtonHandler() {
	$init(AquaSpinnerUI);
	return $cast($AquaSpinnerUI$ArrowButtonHandler, $nc(AquaSpinnerUI::nextButtonHandler)->get());
}

$AquaSpinnerUI$ArrowButtonHandler* AquaSpinnerUI::getPreviousButtonHandler() {
	$init(AquaSpinnerUI);
	return $cast($AquaSpinnerUI$ArrowButtonHandler, $nc(AquaSpinnerUI::previousButtonHandler)->get());
}

$ComponentUI* AquaSpinnerUI::createUI($JComponent* c) {
	$init(AquaSpinnerUI);
	return $new(AquaSpinnerUI);
}

void AquaSpinnerUI::maybeAdd($Component* c, $String* s) {
	if (c != nullptr) {
		$nc(this->spinner)->add(c, $of(s));
	}
}

void AquaSpinnerUI::installUI($JComponent* c) {
	$set(this, spinner, $cast($JSpinner, c));
	installDefaults();
	installListeners();
	$set(this, next, createNextButton());
	$set(this, prev, createPreviousButton());
	$set(this, spinPainter, $new($AquaSpinnerUI$SpinPainter, this, this->next, this->prev));
	maybeAdd(this->next, "Next"_s);
	maybeAdd(this->prev, "Previous"_s);
	maybeAdd($(createEditor()), "Editor"_s);
	maybeAdd(this->spinPainter, "Painter"_s);
	updateEnabledState();
	installKeyboardActions();
	this->wasOpaque = $nc(this->spinner)->isOpaque();
	$nc(this->spinner)->setOpaque(false);
}

void AquaSpinnerUI::uninstallUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	uninstallDefaults();
	uninstallListeners();
	$nc(this->spinner)->setOpaque(this->wasOpaque);
	$set(this, spinPainter, nullptr);
	$set(this, spinner, nullptr);
	$nc($($cast($ButtonUI, $nc(this->next)->getUI())))->uninstallUI(this->next);
	$nc($($cast($ButtonUI, $nc(this->prev)->getUI())))->uninstallUI(this->prev);
	$set(this, next, nullptr);
	$set(this, prev, nullptr);
	$nc(c)->removeAll();
}

void AquaSpinnerUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$nc(this->spinner)->addPropertyChangeListener($(getPropertyChangeListener()));
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		if (tf != nullptr) {
			tf->addFocusListener($(getNextButtonHandler()));
			tf->addFocusListener($(getPreviousButtonHandler()));
		}
	}
}

void AquaSpinnerUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		if (tf != nullptr) {
			tf->removeFocusListener($(getNextButtonHandler()));
			tf->removeFocusListener($(getPreviousButtonHandler()));
		}
	}
	$nc(this->spinner)->removePropertyChangeListener($(getPropertyChangeListener()));
}

void AquaSpinnerUI::installDefaults() {
	$nc(this->spinner)->setLayout($(createLayout()));
	$LookAndFeel::installBorder(this->spinner, "Spinner.border"_s);
	$LookAndFeel::installColorsAndFont(this->spinner, "Spinner.background"_s, "Spinner.foreground"_s, "Spinner.font"_s);
}

void AquaSpinnerUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->spinner);
	$nc(this->spinner)->setLayout(nullptr);
}

$LayoutManager* AquaSpinnerUI::createLayout() {
	return $new($AquaSpinnerUI$SpinnerLayout);
}

$PropertyChangeListener* AquaSpinnerUI::createPropertyChangeListener() {
	return $new($AquaSpinnerUI$PropertyChangeHandler);
}

$AquaSpinnerUI$TransparentButton* AquaSpinnerUI::createPreviousButton() {
	$useLocalCurrentObjectStackCache();
	$var($AquaSpinnerUI$TransparentButton, b, $new($AquaSpinnerUI$TransparentButton, this));
	b->addActionListener($(getPreviousButtonHandler()));
	b->addMouseListener($(getPreviousButtonHandler()));
	b->setInheritsPopupMenu(true);
	return b;
}

$AquaSpinnerUI$TransparentButton* AquaSpinnerUI::createNextButton() {
	$useLocalCurrentObjectStackCache();
	$var($AquaSpinnerUI$TransparentButton, b, $new($AquaSpinnerUI$TransparentButton, this));
	b->addActionListener($(getNextButtonHandler()));
	b->addMouseListener($(getNextButtonHandler()));
	b->setInheritsPopupMenu(true);
	return b;
}

int32_t AquaSpinnerUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$SpinnerUI::getBaseline(c, width, height);
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	$var($Insets, insets, $nc(this->spinner)->getInsets());
	width = width - $nc(insets)->left - insets->right;
	height = height - insets->top - insets->bottom;
	if (width >= 0 && height >= 0) {
		int32_t baseline = $nc(editor)->getBaseline(width, height);
		if (baseline >= 0) {
			return insets->top + baseline;
		}
	}
	return -1;
}

$Component$BaselineResizeBehavior* AquaSpinnerUI::getBaselineResizeBehavior($JComponent* c) {
	$SpinnerUI::getBaselineResizeBehavior(c);
	return $nc($($nc(this->spinner)->getEditor()))->getBaselineResizeBehavior();
}

$JComponent* AquaSpinnerUI::createEditor() {
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	fixupEditor(editor);
	return editor;
}

void AquaSpinnerUI::replaceEditor($JComponent* oldEditor, $JComponent* newEditor) {
	$nc(this->spinner)->remove(static_cast<$Component*>(oldEditor));
	fixupEditor(newEditor);
	$nc(this->spinner)->add(static_cast<$Component*>(newEditor), $of("Editor"_s));
}

void AquaSpinnerUI::fixupEditor($JComponent* editor) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JSpinner$DefaultEditor, editor))) {
		return;
	}
	$nc(editor)->setOpaque(false);
	editor->setInheritsPopupMenu(true);
	if ($instanceOf($UIResource, $(editor->getFont()))) {
		$var($Font, font, $nc(this->spinner)->getFont());
		editor->setFont(font == nullptr ? ($Font*)nullptr : static_cast<$Font*>($$new($FontUIResource, font)));
	}
	$var($JFormattedTextField, editorTextField, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
	if ($instanceOf($UIResource, $($nc(editorTextField)->getFont()))) {
		$var($Font, font, $nc(this->spinner)->getFont());
		editorTextField->setFont(font == nullptr ? ($Font*)nullptr : static_cast<$Font*>($$new($FontUIResource, font)));
	}
	$var($InputMap, spinnerInputMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$var($InputMap, editorInputMap, $nc(editorTextField)->getInputMap());
	$var($KeyStrokeArray, keys, $nc(spinnerInputMap)->keys());
	{
		$var($KeyStrokeArray, arr$, keys);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($KeyStroke, k, arr$->get(i$));
			{
				$nc(editorInputMap)->put(k, $(spinnerInputMap->get(k)));
			}
		}
	}
}

void AquaSpinnerUI::updateEnabledState() {
	updateEnabledState(this->spinner, $nc(this->spinner)->isEnabled());
}

void AquaSpinnerUI::updateEnabledState($Container* c, bool enabled) {
	$useLocalCurrentObjectStackCache();
	for (int32_t counter = $nc(c)->getComponentCount() - 1; counter >= 0; --counter) {
		$var($Component, child, c->getComponent(counter));
		$nc(child)->setEnabled(enabled);
		if ($instanceOf($Container, child)) {
			updateEnabledState($cast($Container, child), enabled);
		}
	}
}

void AquaSpinnerUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, iMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->spinner, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, iMap);
	$SwingUtilities::replaceUIActionMap(this->spinner, $(getActionMap()));
}

$InputMap* AquaSpinnerUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $UIManager::get("Spinner.ancestorInputMap"_s));
	}
	return nullptr;
}

$ActionMap* AquaSpinnerUI::getActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $cast($ActionMap, $UIManager::get("Spinner.actionMap"_s)));
	if (map == nullptr) {
		$assign(map, createActionMap());
		if (map != nullptr) {
			$nc($($UIManager::getLookAndFeelDefaults()))->put("Spinner.actionMap"_s, map);
		}
	}
	return map;
}

$ActionMap* AquaSpinnerUI::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $new($ActionMapUIResource));
	map->put("increment"_s, $(getNextButtonHandler()));
	map->put("decrement"_s, $(getPreviousButtonHandler()));
	return map;
}

void AquaSpinnerUI::updateToolTipTextForChildren($JComponent* spinnerComponent) {
	$useLocalCurrentObjectStackCache();
	$var($String, toolTipText, $nc(spinnerComponent)->getToolTipText());
	$var($ComponentArray, children, spinnerComponent->getComponents());
	{
		$var($ComponentArray, arr$, children);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, element, arr$->get(i$));
			{
				if ($instanceOf($JSpinner$DefaultEditor, element)) {
					$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, element)))->getTextField());
					if (tf != nullptr) {
						tf->setToolTipText(toolTipText);
					}
				} else if ($instanceOf($JComponent, element)) {
					$nc(($cast($JComponent, element)))->setToolTipText(toolTipText);
				}
			}
		}
	}
}

void clinit$AquaSpinnerUI($Class* class$) {
	$load($AquaSpinnerUI$PropertyChangeHandler);
	$assignStatic(AquaSpinnerUI::propertyChangeListener, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaSpinnerUI$PropertyChangeHandler::class$));
	$assignStatic(AquaSpinnerUI::nextButtonHandler, $new($AquaSpinnerUI$1));
	$assignStatic(AquaSpinnerUI::previousButtonHandler, $new($AquaSpinnerUI$2));
}

AquaSpinnerUI::AquaSpinnerUI() {
}

$Class* AquaSpinnerUI::load$($String* name, bool initialize) {
	$loadClass(AquaSpinnerUI, name, initialize, &_AquaSpinnerUI_ClassInfo_, clinit$AquaSpinnerUI, allocate$AquaSpinnerUI);
	return class$;
}

$Class* AquaSpinnerUI::class$ = nullptr;

		} // laf
	} // apple
} // com