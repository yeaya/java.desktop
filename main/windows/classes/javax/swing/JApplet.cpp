#include <javax/swing/JApplet.h>

#include <java/applet/Applet$AccessibleApplet.h>
#include <java/applet/Applet.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Panel$AccessibleAWTPanel.h>
#include <java/awt/Panel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JApplet$AccessibleJApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TimerQueue.h>
#include <javax/swing/TransferHandler.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CENTER
#undef HANDLE_TOP_LEVEL_PAINT
#undef KEY_EVENT_MASK

using $Applet = ::java::applet::Applet;
using $Applet$AccessibleApplet = ::java::applet::Applet$AccessibleApplet;
using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Panel = ::java::awt::Panel;
using $Panel$AccessibleAWTPanel = ::java::awt::Panel$AccessibleAWTPanel;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JApplet$AccessibleJApplet = ::javax::swing::JApplet$AccessibleJApplet;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TimerQueue = ::javax::swing::TimerQueue;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$HasGetTransferHandler = ::javax::swing::TransferHandler$HasGetTransferHandler;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$NamedAttribute JApplet_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$NamedAttribute JApplet_Attribute_var$1[] = {
	{"defaultProperty", 's', "JMenuBar"},
	{"description", 's', "Swing\'s Applet subclass."},
	{}
};

$NamedAttribute JApplet_Attribute_var$2[] = {
	{"delegate", 's', "getContentPane"},
	{}
};
$CompoundAttribute _JApplet_Annotations_[] = {
	{"Ljava/lang/Deprecated;", JApplet_Attribute_var$0},
	{"Ljava/beans/JavaBean;", JApplet_Attribute_var$1},
	{"Ljavax/swing/SwingContainer;", JApplet_Attribute_var$2},
	{}
};

$NamedAttribute JApplet_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JApplet_MethodAnnotations_getGraphics6[] = {
	{"Ljava/beans/BeanProperty;", JApplet_Attribute_var$3},
	{}
};

$NamedAttribute JApplet_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "the RootPane object for this applet."},
	{}
};

$CompoundAttribute _JApplet_MethodAnnotations_getRootPane9[] = {
	{"Ljava/beans/BeanProperty;", JApplet_Attribute_var$4},
	{}
};

$NamedAttribute JApplet_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The client area of the applet where child components are normally inserted."},
	{}
};

$CompoundAttribute _JApplet_MethodAnnotations_setContentPane15[] = {
	{"Ljava/beans/BeanProperty;", JApplet_Attribute_var$5},
	{}
};

$NamedAttribute JApplet_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "A transparent pane used for menu rendering."},
	{}
};

$CompoundAttribute _JApplet_MethodAnnotations_setGlassPane16[] = {
	{"Ljava/beans/BeanProperty;", JApplet_Attribute_var$6},
	{}
};

$NamedAttribute JApplet_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The menubar for accessing pulldown menus from this applet."},
	{}
};

$CompoundAttribute _JApplet_MethodAnnotations_setJMenuBar17[] = {
	{"Ljava/beans/BeanProperty;", JApplet_Attribute_var$7},
	{}
};

$NamedAttribute JApplet_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The pane which holds the various applet layers."},
	{}
};

$CompoundAttribute _JApplet_MethodAnnotations_setLayeredPane18[] = {
	{"Ljava/beans/BeanProperty;", JApplet_Attribute_var$8},
	{}
};

$NamedAttribute JApplet_Attribute_var$9[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Whether the add and setLayout methods are forwarded"},
	{}
};

$CompoundAttribute _JApplet_MethodAnnotations_setRootPaneCheckingEnabled21[] = {
	{"Ljava/beans/BeanProperty;", JApplet_Attribute_var$9},
	{}
};

$NamedAttribute JApplet_Attribute_var$10[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Mechanism for transfer of data into the component"},
	{}
};

$CompoundAttribute _JApplet_MethodAnnotations_setTransferHandler22[] = {
	{"Ljava/beans/BeanProperty;", JApplet_Attribute_var$10},
	{}
};


$FieldInfo _JApplet_FieldInfo_[] = {
	{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $field(JApplet, rootPane)},
	{"rootPaneCheckingEnabled", "Z", nullptr, $PROTECTED, $field(JApplet, rootPaneCheckingEnabled)},
	{"transferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE, $field(JApplet, transferHandler)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JApplet, accessibleContext)},
	{}
};

$MethodInfo _JApplet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JApplet::*)()>(&JApplet::init$)), "java.awt.HeadlessException"},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JApplet_MethodAnnotations_getGraphics6},
	{"getJMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC},
	{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JApplet_MethodAnnotations_getRootPane9},
	{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC},
	{"isRootPaneCheckingEnabled", "()Z", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JApplet_MethodAnnotations_setContentPane15},
	{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JApplet_MethodAnnotations_setGlassPane16},
	{"setJMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JApplet_MethodAnnotations_setJMenuBar17},
	{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JApplet_MethodAnnotations_setLayeredPane18},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"setRootPane", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"setRootPaneCheckingEnabled", "(Z)V", nullptr, $PROTECTED, nullptr, nullptr, nullptr, _JApplet_MethodAnnotations_setRootPaneCheckingEnabled21},
	{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JApplet_MethodAnnotations_setTransferHandler22},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JApplet_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.JApplet$AccessibleJApplet", "javax.swing.JApplet", "AccessibleJApplet", $PROTECTED},
	{}
};

$ClassInfo _JApplet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JApplet",
	"java.applet.Applet",
	"javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler",
	_JApplet_FieldInfo_,
	_JApplet_MethodInfo_,
	nullptr,
	nullptr,
	_JApplet_InnerClassesInfo_,
	_JApplet_Annotations_,
	nullptr,
	"javax.swing.JApplet$AccessibleJApplet"
};

$Object* allocate$JApplet($Class* clazz) {
	return $of($alloc(JApplet));
}

$String* JApplet::toString() {
	 return this->$Applet::toString();
}

int32_t JApplet::hashCode() {
	 return this->$Applet::hashCode();
}

bool JApplet::equals(Object$* arg0) {
	 return this->$Applet::equals(arg0);
}

$Object* JApplet::clone() {
	 return this->$Applet::clone();
}

void JApplet::finalize() {
	this->$Applet::finalize();
}

void JApplet::init$() {
	$useLocalCurrentObjectStackCache();
	$Applet::init$();
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	$var($TimerQueue, q, $TimerQueue::sharedInstance());
	if (q != nullptr) {
		q->startIfNeeded();
	}
	$init($Color);
	setForeground($Color::black);
	setBackground($Color::white);
	setLocale($($JComponent::getDefaultLocale()));
	setLayout($$new($BorderLayout));
	setRootPane($(createRootPane()));
	setRootPaneCheckingEnabled(true);
	setFocusTraversalPolicyProvider(true);
	$SunToolkit::checkAndSetPolicy(this);
	enableEvents($AWTEvent::KEY_EVENT_MASK);
}

$JRootPane* JApplet::createRootPane() {
	$var($JRootPane, rp, $new($JRootPane));
	rp->setOpaque(true);
	return rp;
}

void JApplet::setTransferHandler($TransferHandler* newHandler) {
	$var($TransferHandler, oldHandler, this->transferHandler);
	$set(this, transferHandler, newHandler);
	$SwingUtilities::installSwingDropTargetAsNecessary(this, this->transferHandler);
	firePropertyChange("transferHandler"_s, $of(oldHandler), $of(newHandler));
}

$TransferHandler* JApplet::getTransferHandler() {
	return this->transferHandler;
}

void JApplet::update($Graphics* g) {
	paint(g);
}

void JApplet::setJMenuBar($JMenuBar* menuBar) {
	$nc($(getRootPane()))->setJMenuBar(menuBar);
}

$JMenuBar* JApplet::getJMenuBar() {
	return $nc($(getRootPane()))->getJMenuBar();
}

bool JApplet::isRootPaneCheckingEnabled() {
	return this->rootPaneCheckingEnabled;
}

void JApplet::setRootPaneCheckingEnabled(bool enabled) {
	this->rootPaneCheckingEnabled = enabled;
}

void JApplet::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->add(comp, constraints, index);
	} else {
		$Applet::addImpl(comp, constraints, index);
	}
}

void JApplet::remove($Component* comp) {
	if ($equals(comp, this->rootPane)) {
		$Applet::remove(comp);
	} else {
		$nc($(getContentPane()))->remove(comp);
	}
}

void JApplet::setLayout($LayoutManager* manager) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->setLayout(manager);
	} else {
		$Applet::setLayout(manager);
	}
}

$JRootPane* JApplet::getRootPane() {
	return this->rootPane;
}

void JApplet::setRootPane($JRootPane* root) {
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
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				setRootPaneCheckingEnabled(checkingEnabled);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$Container* JApplet::getContentPane() {
	return $nc($(getRootPane()))->getContentPane();
}

void JApplet::setContentPane($Container* contentPane) {
	$nc($(getRootPane()))->setContentPane(contentPane);
}

$JLayeredPane* JApplet::getLayeredPane() {
	return $nc($(getRootPane()))->getLayeredPane();
}

void JApplet::setLayeredPane($JLayeredPane* layeredPane) {
	$nc($(getRootPane()))->setLayeredPane(layeredPane);
}

$Component* JApplet::getGlassPane() {
	return $nc($(getRootPane()))->getGlassPane();
}

void JApplet::setGlassPane($Component* glassPane) {
	$nc($(getRootPane()))->setGlassPane(glassPane);
}

$Graphics* JApplet::getGraphics() {
	$JComponent::getGraphicsInvoked(this);
	return $Applet::getGraphics();
}

void JApplet::repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($RepaintManager);
	if ($RepaintManager::HANDLE_TOP_LEVEL_PAINT) {
		$nc($($RepaintManager::currentManager(static_cast<$Component*>(this))))->addDirtyRegion(static_cast<$Applet*>(this), x, y, width, height);
	} else {
		$Applet::repaint(time, x, y, width, height);
	}
}

$String* JApplet::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, rootPaneString, this->rootPane != nullptr ? $nc(this->rootPane)->toString() : ""_s);
	$var($String, rootPaneCheckingEnabledString, this->rootPaneCheckingEnabled ? "true"_s : "false"_s);
	return $str({$($Applet::paramString()), ",rootPane="_s, rootPaneString, ",rootPaneCheckingEnabled="_s, rootPaneCheckingEnabledString});
}

$AccessibleContext* JApplet::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JApplet$AccessibleJApplet, this));
	}
	return this->accessibleContext;
}

JApplet::JApplet() {
}

$Class* JApplet::load$($String* name, bool initialize) {
	$loadClass(JApplet, name, initialize, &_JApplet_ClassInfo_, allocate$JApplet);
	return class$;
}

$Class* JApplet::class$ = nullptr;

	} // swing
} // javax