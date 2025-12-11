#include <javax/swing/plaf/basic/BasicSpinnerUI.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
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
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/SpinnerUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/basic/BasicSpinnerUI$ArrowButtonHandler.h>
#include <javax/swing/plaf/basic/BasicSpinnerUI$Handler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef NORTH
#undef SOUTH
#undef TRUE
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $SpinnerUI = ::javax::swing::plaf::SpinnerUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicSpinnerUI$ArrowButtonHandler = ::javax::swing::plaf::basic::BasicSpinnerUI$ArrowButtonHandler;
using $BasicSpinnerUI$Handler = ::javax::swing::plaf::basic::BasicSpinnerUI$Handler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSpinnerUI_FieldInfo_[] = {
	{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PROTECTED, $field(BasicSpinnerUI, spinner)},
	{"handler", "Ljavax/swing/plaf/basic/BasicSpinnerUI$Handler;", nullptr, $PRIVATE, $field(BasicSpinnerUI, handler)},
	{"nextButtonHandler", "Ljavax/swing/plaf/basic/BasicSpinnerUI$ArrowButtonHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSpinnerUI, nextButtonHandler)},
	{"previousButtonHandler", "Ljavax/swing/plaf/basic/BasicSpinnerUI$ArrowButtonHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSpinnerUI, previousButtonHandler)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicSpinnerUI, propertyChangeListener)},
	{"zeroSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSpinnerUI, zeroSize)},
	{}
};

$MethodInfo _BasicSpinnerUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicSpinnerUI::*)()>(&BasicSpinnerUI::init$))},
	{"createArrowButton", "(I)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(BasicSpinnerUI::*)(int32_t)>(&BasicSpinnerUI::createArrowButton))},
	{"createEditor", "()Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createNextButton", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createPreviousButton", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicSpinnerUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicSpinnerUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicSpinnerUI$Handler*(BasicSpinnerUI::*)()>(&BasicSpinnerUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, $PRIVATE, $method(static_cast<$InputMap*(BasicSpinnerUI::*)(int32_t)>(&BasicSpinnerUI::getInputMap))},
	{"installButtonListeners", "(Ljava/awt/Component;Ljavax/swing/plaf/basic/BasicSpinnerUI$ArrowButtonHandler;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI::*)($Component*,$BasicSpinnerUI$ArrowButtonHandler*)>(&BasicSpinnerUI::installButtonListeners))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installEditorBorderListener", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI::*)($JComponent*)>(&BasicSpinnerUI::installEditorBorderListener))},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installNextButtonListeners", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"installPreviousButtonListeners", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicSpinnerUI::loadActionMap))},
	{"maybeAdd", "(Ljava/awt/Component;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI::*)($Component*,$String*)>(&BasicSpinnerUI::maybeAdd))},
	{"maybeRemoveEditorBorder", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI::*)($JComponent*)>(&BasicSpinnerUI::maybeRemoveEditorBorder))},
	{"removeEditorBorderListener", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI::*)($JComponent*)>(&BasicSpinnerUI::removeEditorBorderListener))},
	{"replaceEditor", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateEditorAlignment", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI::*)($JComponent*)>(&BasicSpinnerUI::updateEditorAlignment))},
	{"updateEnabledState", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI::*)()>(&BasicSpinnerUI::updateEnabledState))},
	{"updateEnabledState", "(Ljava/awt/Container;Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI::*)($Container*,bool)>(&BasicSpinnerUI::updateEnabledState))},
	{}
};

$InnerClassInfo _BasicSpinnerUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSpinnerUI$Handler", "javax.swing.plaf.basic.BasicSpinnerUI", "Handler", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicSpinnerUI$ArrowButtonHandler", "javax.swing.plaf.basic.BasicSpinnerUI", "ArrowButtonHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicSpinnerUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSpinnerUI",
	"javax.swing.plaf.SpinnerUI",
	nullptr,
	_BasicSpinnerUI_FieldInfo_,
	_BasicSpinnerUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSpinnerUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSpinnerUI$Handler,javax.swing.plaf.basic.BasicSpinnerUI$ArrowButtonHandler"
};

$Object* allocate$BasicSpinnerUI($Class* clazz) {
	return $of($alloc(BasicSpinnerUI));
}

$BasicSpinnerUI$ArrowButtonHandler* BasicSpinnerUI::nextButtonHandler = nullptr;
$BasicSpinnerUI$ArrowButtonHandler* BasicSpinnerUI::previousButtonHandler = nullptr;
$Dimension* BasicSpinnerUI::zeroSize = nullptr;

void BasicSpinnerUI::init$() {
	$SpinnerUI::init$();
}

$ComponentUI* BasicSpinnerUI::createUI($JComponent* c) {
	$init(BasicSpinnerUI);
	return $new(BasicSpinnerUI);
}

void BasicSpinnerUI::maybeAdd($Component* c, $String* s) {
	if (c != nullptr) {
		$nc(this->spinner)->add(c, $of(s));
	}
}

void BasicSpinnerUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, spinner, $cast($JSpinner, c));
	installDefaults();
	installListeners();
	maybeAdd($(createNextButton()), "Next"_s);
	maybeAdd($(createPreviousButton()), "Previous"_s);
	maybeAdd($(createEditor()), "Editor"_s);
	updateEnabledState();
	installKeyboardActions();
}

void BasicSpinnerUI::uninstallUI($JComponent* c) {
	uninstallDefaults();
	uninstallListeners();
	$set(this, spinner, nullptr);
	$nc(c)->removeAll();
}

void BasicSpinnerUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$set(this, propertyChangeListener, createPropertyChangeListener());
	$nc(this->spinner)->addPropertyChangeListener(this->propertyChangeListener);
	if ($DefaultLookup::getBoolean(this->spinner, this, "Spinner.disableOnBoundaryValues"_s, false)) {
		$nc(this->spinner)->addChangeListener($(getHandler()));
	}
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	if (editor != nullptr && $instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		if (tf != nullptr) {
			tf->addFocusListener(BasicSpinnerUI::nextButtonHandler);
			tf->addFocusListener(BasicSpinnerUI::previousButtonHandler);
		}
	}
}

void BasicSpinnerUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	$nc(this->spinner)->removePropertyChangeListener(this->propertyChangeListener);
	$nc(this->spinner)->removeChangeListener(this->handler);
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	removeEditorBorderListener(editor);
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		if (tf != nullptr) {
			tf->removeFocusListener(BasicSpinnerUI::nextButtonHandler);
			tf->removeFocusListener(BasicSpinnerUI::previousButtonHandler);
		}
	}
	$set(this, propertyChangeListener, nullptr);
	$set(this, handler, nullptr);
}

void BasicSpinnerUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$nc(this->spinner)->setLayout($(createLayout()));
	$LookAndFeel::installBorder(this->spinner, "Spinner.border"_s);
	$LookAndFeel::installColorsAndFont(this->spinner, "Spinner.background"_s, "Spinner.foreground"_s, "Spinner.font"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(this->spinner, "opaque"_s, $Boolean::TRUE);
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		if (tf != nullptr) {
			if ($instanceOf($UIResource, $(tf->getFont()))) {
				$var($Font, font, $nc(this->spinner)->getFont());
				tf->setFont(font == nullptr ? ($Font*)nullptr : static_cast<$Font*>($$new($FontUIResource, font)));
			}
		}
	}
}

void BasicSpinnerUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->spinner);
	$nc(this->spinner)->setLayout(nullptr);
}

$BasicSpinnerUI$Handler* BasicSpinnerUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicSpinnerUI$Handler));
	}
	return this->handler;
}

void BasicSpinnerUI::installNextButtonListeners($Component* c) {
	installButtonListeners(c, BasicSpinnerUI::nextButtonHandler);
}

void BasicSpinnerUI::installPreviousButtonListeners($Component* c) {
	installButtonListeners(c, BasicSpinnerUI::previousButtonHandler);
}

void BasicSpinnerUI::installButtonListeners($Component* c, $BasicSpinnerUI$ArrowButtonHandler* handler) {
	if ($instanceOf($JButton, c)) {
		$nc(($cast($JButton, c)))->addActionListener(handler);
	}
	$nc(c)->addMouseListener(handler);
}

$LayoutManager* BasicSpinnerUI::createLayout() {
	return getHandler();
}

$PropertyChangeListener* BasicSpinnerUI::createPropertyChangeListener() {
	return getHandler();
}

$Component* BasicSpinnerUI::createPreviousButton() {
	$var($Component, c, createArrowButton($SwingConstants::SOUTH));
	$nc(c)->setName("Spinner.previousButton"_s);
	installPreviousButtonListeners(c);
	return c;
}

$Component* BasicSpinnerUI::createNextButton() {
	$var($Component, c, createArrowButton($SwingConstants::NORTH));
	$nc(c)->setName("Spinner.nextButton"_s);
	installNextButtonListeners(c);
	return c;
}

$Component* BasicSpinnerUI::createArrowButton(int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($BasicArrowButton, direction));
	$var($Border, buttonBorder, $UIManager::getBorder("Spinner.arrowButtonBorder"_s));
	if ($instanceOf($UIResource, buttonBorder)) {
		b->setBorder($$new($CompoundBorder, buttonBorder, nullptr));
	} else {
		b->setBorder(buttonBorder);
	}
	b->setInheritsPopupMenu(true);
	return b;
}

$JComponent* BasicSpinnerUI::createEditor() {
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	maybeRemoveEditorBorder(editor);
	installEditorBorderListener(editor);
	$nc(editor)->setInheritsPopupMenu(true);
	updateEditorAlignment(editor);
	return editor;
}

void BasicSpinnerUI::replaceEditor($JComponent* oldEditor, $JComponent* newEditor) {
	$nc(this->spinner)->remove(static_cast<$Component*>(oldEditor));
	maybeRemoveEditorBorder(newEditor);
	installEditorBorderListener(newEditor);
	$nc(newEditor)->setInheritsPopupMenu(true);
	$nc(this->spinner)->add(static_cast<$Component*>(newEditor), $of("Editor"_s));
}

void BasicSpinnerUI::updateEditorAlignment($JComponent* editor) {
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		int32_t alignment = $UIManager::getInt("Spinner.editorAlignment"_s);
		$var($JTextField, text, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		$nc(text)->setHorizontalAlignment(alignment);
	}
}

void BasicSpinnerUI::maybeRemoveEditorBorder($JComponent* editor$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, editor, editor$renamed);
	if (!$UIManager::getBoolean("Spinner.editorBorderPainted"_s)) {
		bool var$0 = $instanceOf($JPanel, editor) && $nc(editor)->getBorder() == nullptr;
		if (var$0 && editor->getComponentCount() > 0) {
			$assign(editor, $cast($JComponent, editor->getComponent(0)));
		}
		if (editor != nullptr && $instanceOf($UIResource, $(editor->getBorder()))) {
			editor->setBorder(nullptr);
		}
	}
}

void BasicSpinnerUI::installEditorBorderListener($JComponent* editor$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, editor, editor$renamed);
	if (!$UIManager::getBoolean("Spinner.editorBorderPainted"_s)) {
		bool var$0 = $instanceOf($JPanel, editor) && $nc(editor)->getBorder() == nullptr;
		if (var$0 && editor->getComponentCount() > 0) {
			$assign(editor, $cast($JComponent, editor->getComponent(0)));
		}
		bool var$1 = editor != nullptr;
		if (var$1) {
			bool var$2 = editor->getBorder() == nullptr;
			var$1 = (var$2 || $instanceOf($UIResource, $(editor->getBorder())));
		}
		if (var$1) {
			$nc(editor)->addPropertyChangeListener($(getHandler()));
		}
	}
}

void BasicSpinnerUI::removeEditorBorderListener($JComponent* editor$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, editor, editor$renamed);
	if (!$UIManager::getBoolean("Spinner.editorBorderPainted"_s)) {
		if ($instanceOf($JPanel, editor) && $nc(editor)->getComponentCount() > 0) {
			$assign(editor, $cast($JComponent, editor->getComponent(0)));
		}
		if (editor != nullptr) {
			editor->removePropertyChangeListener($(getHandler()));
		}
	}
}

void BasicSpinnerUI::updateEnabledState() {
	updateEnabledState(this->spinner, $nc(this->spinner)->isEnabled());
}

void BasicSpinnerUI::updateEnabledState($Container* c, bool enabled) {
	$useLocalCurrentObjectStackCache();
	for (int32_t counter = $nc(c)->getComponentCount() - 1; counter >= 0; --counter) {
		$var($Component, child, c->getComponent(counter));
		if ($DefaultLookup::getBoolean(this->spinner, this, "Spinner.disableOnBoundaryValues"_s, false)) {
			$var($SpinnerModel, model, $nc(this->spinner)->getModel());
			bool var$0 = $nc(child)->getName() == "Spinner.nextButton"_s;
			if (var$0 && $nc(model)->getNextValue() == nullptr) {
				child->setEnabled(false);
			} else {
				bool var$2 = child->getName() == "Spinner.previousButton"_s;
				if (var$2 && model->getPreviousValue() == nullptr) {
					child->setEnabled(false);
				} else {
					child->setEnabled(enabled);
				}
			}
		} else {
			$nc(child)->setEnabled(enabled);
		}
		if ($instanceOf($Container, child)) {
			updateEnabledState($cast($Container, child), enabled);
		}
	}
}

void BasicSpinnerUI::installKeyboardActions() {
	$var($InputMap, iMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->spinner, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, iMap);
	$LazyActionMap::installLazyActionMap(this->spinner, BasicSpinnerUI::class$, "Spinner.actionMap"_s);
}

$InputMap* BasicSpinnerUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get(this->spinner, this, "Spinner.ancestorInputMap"_s));
	}
	return nullptr;
}

void BasicSpinnerUI::loadActionMap($LazyActionMap* map) {
	$init(BasicSpinnerUI);
	$nc(map)->put("increment"_s, BasicSpinnerUI::nextButtonHandler);
	map->put("decrement"_s, BasicSpinnerUI::previousButtonHandler);
}

int32_t BasicSpinnerUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
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

$Component$BaselineResizeBehavior* BasicSpinnerUI::getBaselineResizeBehavior($JComponent* c) {
	$SpinnerUI::getBaselineResizeBehavior(c);
	return $nc($($nc(this->spinner)->getEditor()))->getBaselineResizeBehavior();
}

void clinit$BasicSpinnerUI($Class* class$) {
	$assignStatic(BasicSpinnerUI::nextButtonHandler, $new($BasicSpinnerUI$ArrowButtonHandler, "increment"_s, true));
	$assignStatic(BasicSpinnerUI::previousButtonHandler, $new($BasicSpinnerUI$ArrowButtonHandler, "decrement"_s, false));
	$assignStatic(BasicSpinnerUI::zeroSize, $new($Dimension, 0, 0));
}

BasicSpinnerUI::BasicSpinnerUI() {
}

$Class* BasicSpinnerUI::load$($String* name, bool initialize) {
	$loadClass(BasicSpinnerUI, name, initialize, &_BasicSpinnerUI_ClassInfo_, clinit$BasicSpinnerUI, allocate$BasicSpinnerUI);
	return class$;
}

$Class* BasicSpinnerUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax