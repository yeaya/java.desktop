#include <javax/swing/JWindow.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowListener.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JWindow$AccessibleJWindow.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CENTER
#undef HANDLE_TOP_LEVEL_PAINT

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $LayoutManager = ::java::awt::LayoutManager;
using $Window = ::java::awt::Window;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $WindowListener = ::java::awt::event::WindowListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;
using $JWindow$AccessibleJWindow = ::javax::swing::JWindow$AccessibleJWindow;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$NamedAttribute JWindow_Attribute_var$0[] = {
	{"defaultProperty", 's', "accessibleContext"},
	{"description", 's', "A toplevel window which has no system border or controls."},
	{}
};

$NamedAttribute JWindow_Attribute_var$1[] = {
	{"delegate", 's', "getContentPane"},
	{}
};

$CompoundAttribute _JWindow_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JWindow_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JWindow_Attribute_var$1},
	{}
};

$NamedAttribute JWindow_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JWindow_MethodAnnotations_getGraphics10[] = {
	{"Ljava/beans/BeanProperty;", JWindow_Attribute_var$2},
	{}
};

$NamedAttribute JWindow_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "the RootPane object for this window."},
	{}
};

$CompoundAttribute _JWindow_MethodAnnotations_getRootPane12[] = {
	{"Ljava/beans/BeanProperty;", JWindow_Attribute_var$3},
	{}
};

$NamedAttribute JWindow_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The client area of the window where child components are normally inserted."},
	{}
};

$CompoundAttribute _JWindow_MethodAnnotations_setContentPane18[] = {
	{"Ljava/beans/BeanProperty;", JWindow_Attribute_var$4},
	{}
};

$NamedAttribute JWindow_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "A transparent pane used for menu rendering."},
	{}
};

$CompoundAttribute _JWindow_MethodAnnotations_setGlassPane19[] = {
	{"Ljava/beans/BeanProperty;", JWindow_Attribute_var$5},
	{}
};

$NamedAttribute JWindow_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The pane which holds the various window layers."},
	{}
};

$CompoundAttribute _JWindow_MethodAnnotations_setLayeredPane20[] = {
	{"Ljava/beans/BeanProperty;", JWindow_Attribute_var$6},
	{}
};

$NamedAttribute JWindow_Attribute_var$7[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Whether the add and setLayout methods are forwarded"},
	{}
};

$CompoundAttribute _JWindow_MethodAnnotations_setRootPaneCheckingEnabled23[] = {
	{"Ljava/beans/BeanProperty;", JWindow_Attribute_var$7},
	{}
};

$NamedAttribute JWindow_Attribute_var$8[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Mechanism for transfer of data into the component"},
	{}
};

$CompoundAttribute _JWindow_MethodAnnotations_setTransferHandler24[] = {
	{"Ljava/beans/BeanProperty;", JWindow_Attribute_var$8},
	{}
};

$FieldInfo _JWindow_FieldInfo_[] = {
	{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $field(JWindow, rootPane)},
	{"rootPaneCheckingEnabled", "Z", nullptr, $PROTECTED, $field(JWindow, rootPaneCheckingEnabled)},
	{"transferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE, $field(JWindow, transferHandler)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JWindow, accessibleContext)},
	{}
};

$MethodInfo _JWindow_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JWindow::*)()>(&JWindow::init$))},
	{"<init>", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(JWindow::*)($GraphicsConfiguration*)>(&JWindow::init$))},
	{"<init>", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC, $method(static_cast<void(JWindow::*)($Frame*)>(&JWindow::init$))},
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(JWindow::*)($Window*)>(&JWindow::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(JWindow::*)($Window*,$GraphicsConfiguration*)>(&JWindow::init$))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JWindow_MethodAnnotations_getGraphics10},
	{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JWindow_MethodAnnotations_getRootPane12},
	{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC},
	{"isRootPaneCheckingEnabled", "()Z", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JWindow_MethodAnnotations_setContentPane18},
	{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JWindow_MethodAnnotations_setGlassPane19},
	{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JWindow_MethodAnnotations_setLayeredPane20},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"setRootPane", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"setRootPaneCheckingEnabled", "(Z)V", nullptr, $PROTECTED, nullptr, nullptr, nullptr, _JWindow_MethodAnnotations_setRootPaneCheckingEnabled23},
	{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JWindow_MethodAnnotations_setTransferHandler24},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"windowInit", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _JWindow_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.JWindow$AccessibleJWindow", "javax.swing.JWindow", "AccessibleJWindow", $PROTECTED},
	{}
};

$ClassInfo _JWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JWindow",
	"java.awt.Window",
	"javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler",
	_JWindow_FieldInfo_,
	_JWindow_MethodInfo_,
	nullptr,
	nullptr,
	_JWindow_InnerClassesInfo_,
	_JWindow_Annotations_,
	nullptr,
	"javax.swing.JWindow$AccessibleJWindow"
};

$Object* allocate$JWindow($Class* clazz) {
	return $of($alloc(JWindow));
}

$String* JWindow::toString() {
	 return this->$Window::toString();
}

int32_t JWindow::hashCode() {
	 return this->$Window::hashCode();
}

bool JWindow::equals(Object$* arg0) {
	 return this->$Window::equals(arg0);
}

$Object* JWindow::clone() {
	 return this->$Window::clone();
}

void JWindow::finalize() {
	this->$Window::finalize();
}

void JWindow::init$() {
	JWindow::init$(($Frame*)nullptr);
}

void JWindow::init$($GraphicsConfiguration* gc) {
	JWindow::init$(nullptr, gc);
	$Window::setFocusableWindowState(false);
}

void JWindow::init$($Frame* owner) {
	$useLocalCurrentObjectStackCache();
	$Window::init$(owner == nullptr ? $($SwingUtilities::getSharedOwnerFrame()) : owner);
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	if (owner == nullptr) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		addWindowListener(ownerShutdownListener);
	}
	windowInit();
}

void JWindow::init$($Window* owner) {
	$useLocalCurrentObjectStackCache();
	$Window::init$(owner == nullptr ? static_cast<$Window*>($($SwingUtilities::getSharedOwnerFrame())) : owner);
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	if (owner == nullptr) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		addWindowListener(ownerShutdownListener);
	}
	windowInit();
}

void JWindow::init$($Window* owner, $GraphicsConfiguration* gc) {
	$useLocalCurrentObjectStackCache();
	$Window::init$(owner == nullptr ? static_cast<$Window*>($($SwingUtilities::getSharedOwnerFrame())) : owner, gc);
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	if (owner == nullptr) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		addWindowListener(ownerShutdownListener);
	}
	windowInit();
}

void JWindow::windowInit() {
	$useLocalCurrentObjectStackCache();
	setLocale($($JComponent::getDefaultLocale()));
	setRootPane($(createRootPane()));
	setRootPaneCheckingEnabled(true);
	$SunToolkit::checkAndSetPolicy(this);
}

$JRootPane* JWindow::createRootPane() {
	$var($JRootPane, rp, $new($JRootPane));
	rp->setOpaque(true);
	return rp;
}

bool JWindow::isRootPaneCheckingEnabled() {
	return this->rootPaneCheckingEnabled;
}

void JWindow::setTransferHandler($TransferHandler* newHandler) {
	$var($TransferHandler, oldHandler, this->transferHandler);
	$set(this, transferHandler, newHandler);
	$SwingUtilities::installSwingDropTargetAsNecessary(this, this->transferHandler);
	firePropertyChange("transferHandler"_s, $of(oldHandler), $of(newHandler));
}

$TransferHandler* JWindow::getTransferHandler() {
	return this->transferHandler;
}

void JWindow::update($Graphics* g) {
	paint(g);
}

void JWindow::setRootPaneCheckingEnabled(bool enabled) {
	this->rootPaneCheckingEnabled = enabled;
}

void JWindow::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->add(comp, constraints, index);
	} else {
		$Window::addImpl(comp, constraints, index);
	}
}

void JWindow::remove($Component* comp) {
	if ($equals(comp, this->rootPane)) {
		$Window::remove(comp);
	} else {
		$nc($(getContentPane()))->remove(comp);
	}
}

void JWindow::setLayout($LayoutManager* manager) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->setLayout(manager);
	} else {
		$Window::setLayout(manager);
	}
}

$JRootPane* JWindow::getRootPane() {
	return this->rootPane;
}

void JWindow::setRootPane($JRootPane* root) {
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

$Container* JWindow::getContentPane() {
	return $nc($(getRootPane()))->getContentPane();
}

void JWindow::setContentPane($Container* contentPane) {
	$nc($(getRootPane()))->setContentPane(contentPane);
}

$JLayeredPane* JWindow::getLayeredPane() {
	return $nc($(getRootPane()))->getLayeredPane();
}

void JWindow::setLayeredPane($JLayeredPane* layeredPane) {
	$nc($(getRootPane()))->setLayeredPane(layeredPane);
}

$Component* JWindow::getGlassPane() {
	return $nc($(getRootPane()))->getGlassPane();
}

void JWindow::setGlassPane($Component* glassPane) {
	$nc($(getRootPane()))->setGlassPane(glassPane);
}

$Graphics* JWindow::getGraphics() {
	$JComponent::getGraphicsInvoked(this);
	return $Window::getGraphics();
}

void JWindow::repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($RepaintManager);
	if ($RepaintManager::HANDLE_TOP_LEVEL_PAINT) {
		$nc($($RepaintManager::currentManager(static_cast<$Component*>(this))))->addDirtyRegion(static_cast<$Window*>(this), x, y, width, height);
	} else {
		$Window::repaint(time, x, y, width, height);
	}
}

$String* JWindow::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, rootPaneCheckingEnabledString, this->rootPaneCheckingEnabled ? "true"_s : "false"_s);
	return $str({$($Window::paramString()), ",rootPaneCheckingEnabled="_s, rootPaneCheckingEnabledString});
}

$AccessibleContext* JWindow::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JWindow$AccessibleJWindow, this));
	}
	return this->accessibleContext;
}

JWindow::JWindow() {
}

$Class* JWindow::load$($String* name, bool initialize) {
	$loadClass(JWindow, name, initialize, &_JWindow_ClassInfo_, allocate$JWindow);
	return class$;
}

$Class* JWindow::class$ = nullptr;

	} // swing
} // javax