#include <javax/swing/JRootPane.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane$1.h>
#include <javax/swing/JRootPane$AccessibleJRootPane.h>
#include <javax/swing/JRootPane$RootLayout.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/RootPaneUI.h>
#include <sun/security/action/GetBooleanAction.h>
#include <jcpp.h>

#undef COLOR_CHOOSER_DIALOG
#undef ERROR_DIALOG
#undef FILE_CHOOSER_DIALOG
#undef FRAME
#undef FRAME_CONTENT_LAYER
#undef IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING
#undef INFORMATION_DIALOG
#undef KEY_EVENT_MASK
#undef LOG_DISABLE_TRUE_DOUBLE_BUFFERING
#undef NONE
#undef PLAIN_DIALOG
#undef QUESTION_DIALOG
#undef WARNING_DIALOG

using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PrintStream = ::java::io::PrintStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JPanel = ::javax::swing::JPanel;
using $JRootPane$1 = ::javax::swing::JRootPane$1;
using $JRootPane$AccessibleJRootPane = ::javax::swing::JRootPane$AccessibleJRootPane;
using $JRootPane$RootLayout = ::javax::swing::JRootPane$RootLayout;
using $RepaintManager = ::javax::swing::RepaintManager;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $RootPaneUI = ::javax::swing::plaf::RootPaneUI;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;

namespace javax {
	namespace swing {

$CompoundAttribute _JRootPane_MethodAnnotations_getMenuBar14[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JRootPane_Attribute_var$0[] = {
	{"description", 's', "The button activated by default in this root pane"},
	{}
};

$CompoundAttribute _JRootPane_MethodAnnotations_setDefaultButton24[] = {
	{"Ljava/beans/BeanProperty;", JRootPane_Attribute_var$0},
	{}
};

$CompoundAttribute _JRootPane_MethodAnnotations_setMenuBar29[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JRootPane_Attribute_var$1[] = {
	{"expert", 'Z', "true"},
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JRootPane_MethodAnnotations_setUI30[] = {
	{"Ljava/beans/BeanProperty;", JRootPane_Attribute_var$1},
	{}
};

$Attribute JRootPane_Attribute_var$3[] = {
	{'s', "JRootPane.NONE"},
	{'s', "JRootPane.FRAME"},
	{'s', "JRootPane.PLAIN_DIALOG"},
	{'s', "JRootPane.INFORMATION_DIALOG"},
	{'s', "JRootPane.ERROR_DIALOG"},
	{'s', "JRootPane.COLOR_CHOOSER_DIALOG"},
	{'s', "JRootPane.FILE_CHOOSER_DIALOG"},
	{'s', "JRootPane.QUESTION_DIALOG"},
	{'s', "JRootPane.WARNING_DIALOG"},
	{'-'}
};

$NamedAttribute JRootPane_Attribute_var$2[] = {
	{"expert", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', JRootPane_Attribute_var$3},
	{"description", 's', "Identifies the type of Window decorations to provide"},
	{}
};

$CompoundAttribute _JRootPane_MethodAnnotations_setWindowDecorationStyle32[] = {
	{"Ljava/beans/BeanProperty;", JRootPane_Attribute_var$2},
	{}
};

$FieldInfo _JRootPane_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRootPane, uiClassID)},
	{"LOG_DISABLE_TRUE_DOUBLE_BUFFERING", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRootPane, LOG_DISABLE_TRUE_DOUBLE_BUFFERING)},
	{"IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRootPane, IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING)},
	{"NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRootPane, NONE)},
	{"FRAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRootPane, FRAME)},
	{"PLAIN_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRootPane, PLAIN_DIALOG)},
	{"INFORMATION_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRootPane, INFORMATION_DIALOG)},
	{"ERROR_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRootPane, ERROR_DIALOG)},
	{"COLOR_CHOOSER_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRootPane, COLOR_CHOOSER_DIALOG)},
	{"FILE_CHOOSER_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRootPane, FILE_CHOOSER_DIALOG)},
	{"QUESTION_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRootPane, QUESTION_DIALOG)},
	{"WARNING_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRootPane, WARNING_DIALOG)},
	{"windowDecorationStyle", "I", nullptr, $PRIVATE, $field(JRootPane, windowDecorationStyle)},
	{"menuBar", "Ljavax/swing/JMenuBar;", nullptr, $PROTECTED, $field(JRootPane, menuBar)},
	{"contentPane", "Ljava/awt/Container;", nullptr, $PROTECTED, $field(JRootPane, contentPane)},
	{"layeredPane", "Ljavax/swing/JLayeredPane;", nullptr, $PROTECTED, $field(JRootPane, layeredPane)},
	{"glassPane", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JRootPane, glassPane)},
	{"defaultButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(JRootPane, defaultButton)},
	{"useTrueDoubleBuffering", "Z", nullptr, 0, $field(JRootPane, useTrueDoubleBuffering)},
	{}
};

$MethodInfo _JRootPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRootPane::*)()>(&JRootPane::init$))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"createContentPane", "()Ljava/awt/Container;", nullptr, $PROTECTED},
	{"createGlassPane", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PROTECTED},
	{"createRootLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"disableTrueDoubleBuffering", "()V", nullptr, $FINAL, $method(static_cast<void(JRootPane::*)()>(&JRootPane::disableTrueDoubleBuffering))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getDefaultButton", "()Ljavax/swing/JButton;", nullptr, $PUBLIC},
	{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getJMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC},
	{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC},
	{"getMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JRootPane_MethodAnnotations_getMenuBar14},
	{"getUI", "()Ljavax/swing/plaf/RootPaneUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUseTrueDoubleBuffering", "()Z", nullptr, $FINAL, $method(static_cast<bool(JRootPane::*)()>(&JRootPane::getUseTrueDoubleBuffering))},
	{"getWindowDecorationStyle", "()I", nullptr, $PUBLIC},
	{"isOptimizedDrawingEnabled", "()Z", nullptr, $PUBLIC},
	{"isValidateRoot", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"setDefaultButton", "(Ljavax/swing/JButton;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JRootPane_MethodAnnotations_setDefaultButton24},
	{"setDoubleBuffered", "(Z)V", nullptr, $PUBLIC},
	{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setJMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC},
	{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JRootPane_MethodAnnotations_setMenuBar29},
	{"setUI", "(Ljavax/swing/plaf/RootPaneUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JRootPane_MethodAnnotations_setUI30},
	{"setUseTrueDoubleBuffering", "(Z)V", nullptr, $FINAL, $method(static_cast<void(JRootPane::*)(bool)>(&JRootPane::setUseTrueDoubleBuffering))},
	{"setWindowDecorationStyle", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JRootPane_MethodAnnotations_setWindowDecorationStyle32},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRootPane_InnerClassesInfo_[] = {
	{"javax.swing.JRootPane$AccessibleJRootPane", "javax.swing.JRootPane", "AccessibleJRootPane", $PROTECTED},
	{"javax.swing.JRootPane$RootLayout", "javax.swing.JRootPane", "RootLayout", $PROTECTED},
	{"javax.swing.JRootPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JRootPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JRootPane",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JRootPane_FieldInfo_,
	_JRootPane_MethodInfo_,
	nullptr,
	nullptr,
	_JRootPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.JRootPane$AccessibleJRootPane,javax.swing.JRootPane$RootLayout,javax.swing.JRootPane$1"
};

$Object* allocate$JRootPane($Class* clazz) {
	return $of($alloc(JRootPane));
}

$String* JRootPane::toString() {
	 return this->$JComponent::toString();
}

int32_t JRootPane::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JRootPane::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JRootPane::clone() {
	 return this->$JComponent::clone();
}

void JRootPane::finalize() {
	this->$JComponent::finalize();
}

$String* JRootPane::uiClassID = nullptr;
bool JRootPane::LOG_DISABLE_TRUE_DOUBLE_BUFFERING = false;
bool JRootPane::IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING = false;

void JRootPane::init$() {
	$useLocalCurrentObjectStackCache();
	$JComponent::init$();
	this->useTrueDoubleBuffering = true;
	setGlassPane($(createGlassPane()));
	setLayeredPane($(createLayeredPane()));
	setContentPane($(createContentPane()));
	setLayout($(createRootLayout()));
	setDoubleBuffered(true);
	updateUI();
}

void JRootPane::setDoubleBuffered(bool aFlag) {
	if (isDoubleBuffered() != aFlag) {
		$JComponent::setDoubleBuffered(aFlag);
		$nc($($RepaintManager::currentManager(static_cast<$JComponent*>(this))))->doubleBufferingChanged(this);
	}
}

int32_t JRootPane::getWindowDecorationStyle() {
	return this->windowDecorationStyle;
}

void JRootPane::setWindowDecorationStyle(int32_t windowDecorationStyle) {
	if (windowDecorationStyle < 0 || windowDecorationStyle > JRootPane::WARNING_DIALOG) {
		$throwNew($IllegalArgumentException, "Invalid decoration style"_s);
	}
	int32_t oldWindowDecorationStyle = getWindowDecorationStyle();
	this->windowDecorationStyle = windowDecorationStyle;
	firePropertyChange("windowDecorationStyle"_s, oldWindowDecorationStyle, windowDecorationStyle);
}

$ComponentUI* JRootPane::getUI() {
	return $cast($RootPaneUI, this->ui);
}

void JRootPane::setUI($RootPaneUI* ui) {
	$JComponent::setUI(ui);
}

void JRootPane::updateUI() {
	setUI($cast($RootPaneUI, $($UIManager::getUI(this))));
}

$String* JRootPane::getUIClassID() {
	return JRootPane::uiClassID;
}

$JLayeredPane* JRootPane::createLayeredPane() {
	$useLocalCurrentObjectStackCache();
	$var($JLayeredPane, p, $new($JLayeredPane));
	p->setName($$str({$(this->getName()), ".layeredPane"_s}));
	return p;
}

$Container* JRootPane::createContentPane() {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $new($JPanel));
	c->setName($$str({$(this->getName()), ".contentPane"_s}));
	c->setLayout($$new($JRootPane$1, this));
	return c;
}

$Component* JRootPane::createGlassPane() {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $new($JPanel));
	c->setName($$str({$(this->getName()), ".glassPane"_s}));
	c->setVisible(false);
	$nc(($cast($JPanel, c)))->setOpaque(false);
	return c;
}

$LayoutManager* JRootPane::createRootLayout() {
	return $new($JRootPane$RootLayout, this);
}

void JRootPane::setJMenuBar($JMenuBar* menu) {
	if (this->menuBar != nullptr && $equals($nc(this->menuBar)->getParent(), this->layeredPane)) {
		$nc(this->layeredPane)->remove(static_cast<$Component*>(this->menuBar));
	}
	$set(this, menuBar, menu);
	if (this->menuBar != nullptr) {
		$nc(this->menuBar)->updateUI();
		$init($JLayeredPane);
		$nc(this->layeredPane)->add(static_cast<$Component*>(this->menuBar), $of($JLayeredPane::FRAME_CONTENT_LAYER));
	}
}

void JRootPane::setMenuBar($JMenuBar* menu) {
	if (this->menuBar != nullptr && $equals($nc(this->menuBar)->getParent(), this->layeredPane)) {
		$nc(this->layeredPane)->remove(static_cast<$Component*>(this->menuBar));
	}
	$set(this, menuBar, menu);
	if (this->menuBar != nullptr) {
		$init($JLayeredPane);
		$nc(this->layeredPane)->add(static_cast<$Component*>(this->menuBar), $of($JLayeredPane::FRAME_CONTENT_LAYER));
	}
}

$JMenuBar* JRootPane::getJMenuBar() {
	return this->menuBar;
}

$JMenuBar* JRootPane::getMenuBar() {
	return this->menuBar;
}

void JRootPane::setContentPane($Container* content) {
	if (content == nullptr) {
		$throwNew($IllegalComponentStateException, "contentPane cannot be set to null."_s);
	}
	if (this->contentPane != nullptr && $equals($nc(this->contentPane)->getParent(), this->layeredPane)) {
		$nc(this->layeredPane)->remove(static_cast<$Component*>(this->contentPane));
	}
	$set(this, contentPane, content);
	$init($JLayeredPane);
	$nc(this->layeredPane)->add(static_cast<$Component*>(this->contentPane), $of($JLayeredPane::FRAME_CONTENT_LAYER));
}

$Container* JRootPane::getContentPane() {
	return this->contentPane;
}

void JRootPane::setLayeredPane($JLayeredPane* layered) {
	if (layered == nullptr) {
		$throwNew($IllegalComponentStateException, "layeredPane cannot be set to null."_s);
	}
	if (this->layeredPane != nullptr && $equals($nc(this->layeredPane)->getParent(), this)) {
		this->remove(static_cast<$Component*>(this->layeredPane));
	}
	$set(this, layeredPane, layered);
	this->add(static_cast<$Component*>(this->layeredPane), -1);
}

$JLayeredPane* JRootPane::getLayeredPane() {
	return this->layeredPane;
}

void JRootPane::setGlassPane($Component* glass) {
	if (glass == nullptr) {
		$throwNew($NullPointerException, "glassPane cannot be set to null."_s);
	}
	$nc(glass)->setMixingCutoutShape($$new($Rectangle));
	bool visible = false;
	if (this->glassPane != nullptr && $equals($nc(this->glassPane)->getParent(), this)) {
		this->remove(this->glassPane);
		visible = $nc(this->glassPane)->isVisible();
	}
	glass->setVisible(visible);
	$set(this, glassPane, glass);
	this->add(this->glassPane, 0);
	if (visible) {
		repaint();
	}
}

$Component* JRootPane::getGlassPane() {
	return this->glassPane;
}

bool JRootPane::isValidateRoot() {
	return true;
}

bool JRootPane::isOptimizedDrawingEnabled() {
	return !$nc(this->glassPane)->isVisible();
}

void JRootPane::addNotify() {
	$JComponent::addNotify();
	enableEvents($AWTEvent::KEY_EVENT_MASK);
}

void JRootPane::removeNotify() {
	$JComponent::removeNotify();
}

void JRootPane::setDefaultButton($JButton* defaultButton) {
	$var($JButton, oldDefault, this->defaultButton);
	if (oldDefault != defaultButton) {
		$set(this, defaultButton, defaultButton);
		if (oldDefault != nullptr) {
			oldDefault->repaint();
		}
		if (defaultButton != nullptr) {
			defaultButton->repaint();
		}
	}
	firePropertyChange("defaultButton"_s, $of(oldDefault), $of(defaultButton));
}

$JButton* JRootPane::getDefaultButton() {
	return this->defaultButton;
}

void JRootPane::setUseTrueDoubleBuffering(bool useTrueDoubleBuffering) {
	this->useTrueDoubleBuffering = useTrueDoubleBuffering;
}

bool JRootPane::getUseTrueDoubleBuffering() {
	return this->useTrueDoubleBuffering;
}

void JRootPane::disableTrueDoubleBuffering() {
	$useLocalCurrentObjectStackCache();
	if (this->useTrueDoubleBuffering) {
		if (!JRootPane::IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING) {
			if (JRootPane::LOG_DISABLE_TRUE_DOUBLE_BUFFERING) {
				$nc($System::out)->println($$str({"Disabling true double buffering for "_s, this}));
				$Thread::dumpStack();
			}
			this->useTrueDoubleBuffering = false;
			$nc($($RepaintManager::currentManager(static_cast<$JComponent*>(this))))->doubleBufferingChanged(this);
		}
	}
}

void JRootPane::addImpl($Component* comp, Object$* constraints, int32_t index) {
	$JComponent::addImpl(comp, constraints, index);
	bool var$0 = this->glassPane != nullptr && $equals($nc(this->glassPane)->getParent(), this);
	if (var$0 && getComponent(0) != this->glassPane) {
		add(this->glassPane, 0);
	}
}

$String* JRootPane::paramString() {
	return $JComponent::paramString();
}

$AccessibleContext* JRootPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JRootPane$AccessibleJRootPane, this));
	}
	return this->accessibleContext;
}

void clinit$JRootPane($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JRootPane::uiClassID, "RootPaneUI"_s);
	$beforeCallerSensitive();
	{
		JRootPane::LOG_DISABLE_TRUE_DOUBLE_BUFFERING = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "swing.logDoubleBufferingDisable"_s)))))))->booleanValue();
		JRootPane::IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "swing.ignoreDoubleBufferingDisable"_s)))))))->booleanValue();
	}
}

JRootPane::JRootPane() {
}

$Class* JRootPane::load$($String* name, bool initialize) {
	$loadClass(JRootPane, name, initialize, &_JRootPane_ClassInfo_, clinit$JRootPane, allocate$JRootPane);
	return class$;
}

$Class* JRootPane::class$ = nullptr;

	} // swing
} // javax