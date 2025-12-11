#include <javax/swing/JDialog.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog$AccessibleAWTDialog.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog$AccessibleJDialog.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef DO_NOTHING_ON_CLOSE
#undef FALSE
#undef HANDLE_TOP_LEVEL_PAINT
#undef HIDE_ON_CLOSE
#undef KEY_EVENT_MASK
#undef MODELESS
#undef PLAIN_DIALOG
#undef TRUE
#undef WINDOW_CLOSING
#undef WINDOW_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dialog = ::java::awt::Dialog;
using $Dialog$AccessibleAWTDialog = ::java::awt::Dialog$AccessibleAWTDialog;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $LayoutManager = ::java::awt::LayoutManager;
using $Window = ::java::awt::Window;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $StringBuffer = ::java::lang::StringBuffer;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JDialog$AccessibleJDialog = ::javax::swing::JDialog$AccessibleJDialog;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$NamedAttribute JDialog_Attribute_var$0[] = {
	{"defaultProperty", 's', "JMenuBar"},
	{"description", 's', "A toplevel window for creating dialog boxes."},
	{}
};

$NamedAttribute JDialog_Attribute_var$1[] = {
	{"delegate", 's', "getContentPane"},
	{}
};

$CompoundAttribute _JDialog_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JDialog_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JDialog_Attribute_var$1},
	{}
};

$NamedAttribute JDialog_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JDialog_MethodAnnotations_getGraphics23[] = {
	{"Ljava/beans/BeanProperty;", JDialog_Attribute_var$2},
	{}
};

$NamedAttribute JDialog_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "the RootPane object for this dialog."},
	{}
};

$CompoundAttribute _JDialog_MethodAnnotations_getRootPane26[] = {
	{"Ljava/beans/BeanProperty;", JDialog_Attribute_var$3},
	{}
};

$NamedAttribute JDialog_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The client area of the dialog where child components are normally inserted."},
	{}
};

$CompoundAttribute _JDialog_MethodAnnotations_setContentPane34[] = {
	{"Ljava/beans/BeanProperty;", JDialog_Attribute_var$4},
	{}
};

$Attribute JDialog_Attribute_var$6[] = {
	{'s', "WindowConstants.DO_NOTHING_ON_CLOSE"},
	{'s', "WindowConstants.HIDE_ON_CLOSE"},
	{'s', "WindowConstants.DISPOSE_ON_CLOSE"},
	{'-'}
};

$NamedAttribute JDialog_Attribute_var$5[] = {
	{"preferred", 'Z', "true"},
	{"enumerationValues", '[', JDialog_Attribute_var$6},
	{"description", 's', "The dialog\'s default close operation."},
	{}
};

$CompoundAttribute _JDialog_MethodAnnotations_setDefaultCloseOperation35[] = {
	{"Ljava/beans/BeanProperty;", JDialog_Attribute_var$5},
	{}
};

$NamedAttribute JDialog_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "A transparent pane used for menu rendering."},
	{}
};

$CompoundAttribute _JDialog_MethodAnnotations_setGlassPane37[] = {
	{"Ljava/beans/BeanProperty;", JDialog_Attribute_var$7},
	{}
};

$NamedAttribute JDialog_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The menubar for accessing pulldown menus from this dialog."},
	{}
};

$CompoundAttribute _JDialog_MethodAnnotations_setJMenuBar38[] = {
	{"Ljava/beans/BeanProperty;", JDialog_Attribute_var$8},
	{}
};

$NamedAttribute JDialog_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The pane which holds the various dialog layers."},
	{}
};

$CompoundAttribute _JDialog_MethodAnnotations_setLayeredPane39[] = {
	{"Ljava/beans/BeanProperty;", JDialog_Attribute_var$9},
	{}
};

$NamedAttribute JDialog_Attribute_var$10[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Whether the add and setLayout methods are forwarded"},
	{}
};

$CompoundAttribute _JDialog_MethodAnnotations_setRootPaneCheckingEnabled42[] = {
	{"Ljava/beans/BeanProperty;", JDialog_Attribute_var$10},
	{}
};

$NamedAttribute JDialog_Attribute_var$11[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Mechanism for transfer of data into the component"},
	{}
};

$CompoundAttribute _JDialog_MethodAnnotations_setTransferHandler43[] = {
	{"Ljava/beans/BeanProperty;", JDialog_Attribute_var$11},
	{}
};

$FieldInfo _JDialog_FieldInfo_[] = {
	{"defaultLookAndFeelDecoratedKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JDialog, defaultLookAndFeelDecoratedKey)},
	{"defaultCloseOperation", "I", nullptr, $PRIVATE, $field(JDialog, defaultCloseOperation)},
	{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $field(JDialog, rootPane)},
	{"rootPaneCheckingEnabled", "Z", nullptr, $PROTECTED, $field(JDialog, rootPaneCheckingEnabled)},
	{"transferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE, $field(JDialog, transferHandler)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JDialog, accessibleContext)},
	{}
};

$MethodInfo _JDialog_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)()>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Frame*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Frame*,bool)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Frame*,$String*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Frame*,$String*,bool)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;ZLjava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Frame*,$String*,bool,$GraphicsConfiguration*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Dialog*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Dialog*,bool)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Dialog*,$String*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Dialog*,$String*,bool)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;ZLjava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Dialog*,$String*,bool,$GraphicsConfiguration*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Window*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/awt/Dialog$ModalityType;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Window*,$Dialog$ModalityType*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Window*,$String*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/lang/String;Ljava/awt/Dialog$ModalityType;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Window*,$String*,$Dialog$ModalityType*)>(&JDialog::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/lang/String;Ljava/awt/Dialog$ModalityType;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(JDialog::*)($Window*,$String*,$Dialog$ModalityType*,$GraphicsConfiguration*)>(&JDialog::init$))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED},
	{"dialogInit", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getDefaultCloseOperation", "()I", nullptr, $PUBLIC},
	{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDialog_MethodAnnotations_getGraphics23},
	{"getJMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC},
	{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDialog_MethodAnnotations_getRootPane26},
	{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC},
	{"isDefaultLookAndFeelDecorated", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JDialog::isDefaultLookAndFeelDecorated))},
	{"isRootPaneCheckingEnabled", "()Z", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processWindowEvent", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PROTECTED},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDialog_MethodAnnotations_setContentPane34},
	{"setDefaultCloseOperation", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDialog_MethodAnnotations_setDefaultCloseOperation35},
	{"setDefaultLookAndFeelDecorated", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&JDialog::setDefaultLookAndFeelDecorated))},
	{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDialog_MethodAnnotations_setGlassPane37},
	{"setJMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDialog_MethodAnnotations_setJMenuBar38},
	{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDialog_MethodAnnotations_setLayeredPane39},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"setRootPane", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"setRootPaneCheckingEnabled", "(Z)V", nullptr, $PROTECTED, nullptr, nullptr, nullptr, _JDialog_MethodAnnotations_setRootPaneCheckingEnabled42},
	{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDialog_MethodAnnotations_setTransferHandler43},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JDialog_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.JDialog$AccessibleJDialog", "javax.swing.JDialog", "AccessibleJDialog", $PROTECTED},
	{}
};

$ClassInfo _JDialog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JDialog",
	"java.awt.Dialog",
	"javax.swing.WindowConstants,javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler",
	_JDialog_FieldInfo_,
	_JDialog_MethodInfo_,
	nullptr,
	nullptr,
	_JDialog_InnerClassesInfo_,
	_JDialog_Annotations_,
	nullptr,
	"javax.swing.JDialog$AccessibleJDialog"
};

$Object* allocate$JDialog($Class* clazz) {
	return $of($alloc(JDialog));
}

$String* JDialog::toString() {
	 return this->$Dialog::toString();
}

int32_t JDialog::hashCode() {
	 return this->$Dialog::hashCode();
}

bool JDialog::equals(Object$* arg0) {
	 return this->$Dialog::equals(arg0);
}

$Object* JDialog::clone() {
	 return this->$Dialog::clone();
}

void JDialog::finalize() {
	this->$Dialog::finalize();
}

$Object* JDialog::defaultLookAndFeelDecoratedKey = nullptr;

void JDialog::init$() {
	JDialog::init$(($Frame*)nullptr, false);
}

void JDialog::init$($Frame* owner) {
	JDialog::init$(owner, false);
}

void JDialog::init$($Frame* owner, bool modal) {
	JDialog::init$(owner, ""_s, modal);
}

void JDialog::init$($Frame* owner, $String* title) {
	JDialog::init$(owner, title, false);
}

void JDialog::init$($Frame* owner, $String* title, bool modal) {
	$useLocalCurrentObjectStackCache();
	$Dialog::init$(owner == nullptr ? $($SwingUtilities::getSharedOwnerFrame()) : owner, title, modal);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	if (owner == nullptr) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		addWindowListener(ownerShutdownListener);
	}
	dialogInit();
}

void JDialog::init$($Frame* owner, $String* title, bool modal, $GraphicsConfiguration* gc) {
	$useLocalCurrentObjectStackCache();
	$Dialog::init$(owner == nullptr ? $($SwingUtilities::getSharedOwnerFrame()) : owner, title, modal, gc);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	if (owner == nullptr) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		addWindowListener(ownerShutdownListener);
	}
	dialogInit();
}

void JDialog::init$($Dialog* owner) {
	JDialog::init$(owner, false);
}

void JDialog::init$($Dialog* owner, bool modal) {
	JDialog::init$(owner, ""_s, modal);
}

void JDialog::init$($Dialog* owner, $String* title) {
	JDialog::init$(owner, title, false);
}

void JDialog::init$($Dialog* owner, $String* title, bool modal) {
	$Dialog::init$(owner, title, modal);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	dialogInit();
}

void JDialog::init$($Dialog* owner, $String* title, bool modal, $GraphicsConfiguration* gc) {
	$Dialog::init$(owner, title, modal, gc);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	dialogInit();
}

void JDialog::init$($Window* owner) {
	$init($Dialog$ModalityType);
	JDialog::init$(owner, $Dialog$ModalityType::MODELESS);
}

void JDialog::init$($Window* owner, $Dialog$ModalityType* modalityType) {
	JDialog::init$(owner, ""_s, modalityType);
}

void JDialog::init$($Window* owner, $String* title) {
	$init($Dialog$ModalityType);
	JDialog::init$(owner, title, $Dialog$ModalityType::MODELESS);
}

void JDialog::init$($Window* owner, $String* title, $Dialog$ModalityType* modalityType) {
	$Dialog::init$(owner, title, modalityType);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	dialogInit();
}

void JDialog::init$($Window* owner, $String* title, $Dialog$ModalityType* modalityType, $GraphicsConfiguration* gc) {
	$Dialog::init$(owner, title, modalityType, gc);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	dialogInit();
}

void JDialog::dialogInit() {
	$useLocalCurrentObjectStackCache();
	enableEvents($AWTEvent::KEY_EVENT_MASK | $AWTEvent::WINDOW_EVENT_MASK);
	setLocale($($JComponent::getDefaultLocale()));
	setRootPane($(createRootPane()));
	setBackground($($UIManager::getColor("control"_s)));
	setRootPaneCheckingEnabled(true);
	if (JDialog::isDefaultLookAndFeelDecorated()) {
		bool supportsWindowDecorations = $nc($($UIManager::getLookAndFeel()))->getSupportsWindowDecorations();
		if (supportsWindowDecorations) {
			setUndecorated(true);
			$nc($(getRootPane()))->setWindowDecorationStyle($JRootPane::PLAIN_DIALOG);
		}
	}
	$SunToolkit::checkAndSetPolicy(this);
}

$JRootPane* JDialog::createRootPane() {
	$var($JRootPane, rp, $new($JRootPane));
	rp->setOpaque(true);
	return rp;
}

void JDialog::processWindowEvent($WindowEvent* e) {
	$Dialog::processWindowEvent(e);
	if ($nc(e)->getID() == $WindowEvent::WINDOW_CLOSING) {
		switch (this->defaultCloseOperation) {
		case $WindowConstants::HIDE_ON_CLOSE:
			{
				setVisible(false);
				break;
			}
		case $WindowConstants::DISPOSE_ON_CLOSE:
			{
				dispose();
				break;
			}
		case $WindowConstants::DO_NOTHING_ON_CLOSE:
			{}
		default:
			{
				break;
			}
		}
	}
}

void JDialog::setDefaultCloseOperation(int32_t operation) {
	if (operation != $WindowConstants::DO_NOTHING_ON_CLOSE && operation != $WindowConstants::HIDE_ON_CLOSE && operation != $WindowConstants::DISPOSE_ON_CLOSE) {
		$throwNew($IllegalArgumentException, "defaultCloseOperation must be one of: DO_NOTHING_ON_CLOSE, HIDE_ON_CLOSE, or DISPOSE_ON_CLOSE"_s);
	}
	int32_t oldValue = this->defaultCloseOperation;
	this->defaultCloseOperation = operation;
	firePropertyChange("defaultCloseOperation"_s, oldValue, operation);
}

int32_t JDialog::getDefaultCloseOperation() {
	return this->defaultCloseOperation;
}

void JDialog::setTransferHandler($TransferHandler* newHandler) {
	$var($TransferHandler, oldHandler, this->transferHandler);
	$set(this, transferHandler, newHandler);
	$SwingUtilities::installSwingDropTargetAsNecessary(this, this->transferHandler);
	firePropertyChange("transferHandler"_s, $of(oldHandler), $of(newHandler));
}

$TransferHandler* JDialog::getTransferHandler() {
	return this->transferHandler;
}

void JDialog::update($Graphics* g) {
	paint(g);
}

void JDialog::setJMenuBar($JMenuBar* menu) {
	$nc($(getRootPane()))->setJMenuBar(menu);
}

$JMenuBar* JDialog::getJMenuBar() {
	return $nc($(getRootPane()))->getJMenuBar();
}

bool JDialog::isRootPaneCheckingEnabled() {
	return this->rootPaneCheckingEnabled;
}

void JDialog::setRootPaneCheckingEnabled(bool enabled) {
	this->rootPaneCheckingEnabled = enabled;
}

void JDialog::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->add(comp, constraints, index);
	} else {
		$Dialog::addImpl(comp, constraints, index);
	}
}

void JDialog::remove($Component* comp) {
	if ($equals(comp, this->rootPane)) {
		$Dialog::remove(comp);
	} else {
		$nc($(getContentPane()))->remove(comp);
	}
}

void JDialog::setLayout($LayoutManager* manager) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->setLayout(manager);
	} else {
		$Dialog::setLayout(manager);
	}
}

$JRootPane* JDialog::getRootPane() {
	return this->rootPane;
}

void JDialog::setRootPane($JRootPane* root) {
	if (this->rootPane != nullptr) {
		remove(static_cast<$Component*>(this->rootPane));
	}
	$set(this, rootPane, root);
	if (this->rootPane != nullptr) {
		bool checkingEnabled = isRootPaneCheckingEnabled();
		{
			$var($Throwable, var$0, nullptr);
			try {
				setRootPaneCheckingEnabled(false);
				$init($BorderLayout);
				add(static_cast<$Component*>(this->rootPane), $of($BorderLayout::CENTER));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				setRootPaneCheckingEnabled(checkingEnabled);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$Container* JDialog::getContentPane() {
	return $nc($(getRootPane()))->getContentPane();
}

void JDialog::setContentPane($Container* contentPane) {
	$nc($(getRootPane()))->setContentPane(contentPane);
}

$JLayeredPane* JDialog::getLayeredPane() {
	return $nc($(getRootPane()))->getLayeredPane();
}

void JDialog::setLayeredPane($JLayeredPane* layeredPane) {
	$nc($(getRootPane()))->setLayeredPane(layeredPane);
}

$Component* JDialog::getGlassPane() {
	return $nc($(getRootPane()))->getGlassPane();
}

void JDialog::setGlassPane($Component* glassPane) {
	$nc($(getRootPane()))->setGlassPane(glassPane);
}

$Graphics* JDialog::getGraphics() {
	$JComponent::getGraphicsInvoked(this);
	return $Dialog::getGraphics();
}

void JDialog::repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($RepaintManager);
	if ($RepaintManager::HANDLE_TOP_LEVEL_PAINT) {
		$nc($($RepaintManager::currentManager(static_cast<$Component*>(this))))->addDirtyRegion(static_cast<$Window*>(this), x, y, width, height);
	} else {
		$Dialog::repaint(time, x, y, width, height);
	}
}

void JDialog::setDefaultLookAndFeelDecorated(bool defaultLookAndFeelDecorated) {
	$init(JDialog);
	if (defaultLookAndFeelDecorated) {
		$init($Boolean);
		$SwingUtilities::appContextPut(JDialog::defaultLookAndFeelDecoratedKey, $Boolean::TRUE);
	} else {
		$init($Boolean);
		$SwingUtilities::appContextPut(JDialog::defaultLookAndFeelDecoratedKey, $Boolean::FALSE);
	}
}

bool JDialog::isDefaultLookAndFeelDecorated() {
	$init(JDialog);
	$var($Boolean, defaultLookAndFeelDecorated, $cast($Boolean, $SwingUtilities::appContextGet(JDialog::defaultLookAndFeelDecoratedKey)));
	if (defaultLookAndFeelDecorated == nullptr) {
		$init($Boolean);
		$assign(defaultLookAndFeelDecorated, $Boolean::FALSE);
	}
	return $nc(defaultLookAndFeelDecorated)->booleanValue();
}

$String* JDialog::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, defaultCloseOperationString, nullptr);
	if (this->defaultCloseOperation == $WindowConstants::HIDE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "HIDE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DISPOSE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DISPOSE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DO_NOTHING_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DO_NOTHING_ON_CLOSE"_s);
	} else {
		$assign(defaultCloseOperationString, ""_s);
	}
	$var($String, rootPaneString, this->rootPane != nullptr ? $nc(this->rootPane)->toString() : ""_s);
	$var($String, rootPaneCheckingEnabledString, this->rootPaneCheckingEnabled ? "true"_s : "false"_s);
	return $str({$($Dialog::paramString()), ",defaultCloseOperation="_s, defaultCloseOperationString, ",rootPane="_s, rootPaneString, ",rootPaneCheckingEnabled="_s, rootPaneCheckingEnabledString});
}

$AccessibleContext* JDialog::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JDialog$AccessibleJDialog, this));
	}
	return this->accessibleContext;
}

void clinit$JDialog($Class* class$) {
	$assignStatic(JDialog::defaultLookAndFeelDecoratedKey, $new($StringBuffer, "JDialog.defaultLookAndFeelDecorated"_s));
}

JDialog::JDialog() {
}

$Class* JDialog::load$($String* name, bool initialize) {
	$loadClass(JDialog, name, initialize, &_JDialog_ClassInfo_, clinit$JDialog, allocate$JDialog);
	return class$;
}

$Class* JDialog::class$ = nullptr;

	} // swing
} // javax