#include <javax/swing/JFrame.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Frame$AccessibleAWTFrame.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Attribute.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame$AccessibleJFrame.h>
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
#undef EXIT_ON_CLOSE
#undef FALSE
#undef FRAME
#undef HANDLE_TOP_LEVEL_PAINT
#undef HIDE_ON_CLOSE
#undef KEY_EVENT_MASK
#undef TRUE
#undef WINDOW_CLOSING
#undef WINDOW_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Frame = ::java::awt::Frame;
using $Frame$AccessibleAWTFrame = ::java::awt::Frame$AccessibleAWTFrame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $LayoutManager = ::java::awt::LayoutManager;
using $Window = ::java::awt::Window;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityManager = ::java::lang::SecurityManager;
using $StringBuffer = ::java::lang::StringBuffer;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JFrame$AccessibleJFrame = ::javax::swing::JFrame$AccessibleJFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$HasGetTransferHandler = ::javax::swing::TransferHandler$HasGetTransferHandler;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$NamedAttribute JFrame_Attribute_var$0[] = {
	{"defaultProperty", 's', "JMenuBar"},
	{"description", 's', "A toplevel window which can be minimized to an icon."},
	{}
};

$NamedAttribute JFrame_Attribute_var$1[] = {
	{"delegate", 's', "getContentPane"},
	{}
};
$CompoundAttribute _JFrame_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JFrame_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JFrame_Attribute_var$1},
	{}
};

$NamedAttribute JFrame_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFrame_MethodAnnotations_getGraphics11[] = {
	{"Ljava/beans/BeanProperty;", JFrame_Attribute_var$2},
	{}
};

$NamedAttribute JFrame_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "the RootPane object for this frame."},
	{}
};

$CompoundAttribute _JFrame_MethodAnnotations_getRootPane14[] = {
	{"Ljava/beans/BeanProperty;", JFrame_Attribute_var$3},
	{}
};

$NamedAttribute JFrame_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The client area of the frame where child components are normally inserted."},
	{}
};

$CompoundAttribute _JFrame_MethodAnnotations_setContentPane22[] = {
	{"Ljava/beans/BeanProperty;", JFrame_Attribute_var$4},
	{}
};

$Attribute JFrame_Attribute_var$6[] = {
	{'s', "WindowConstants.DO_NOTHING_ON_CLOSE"},
	{'s', "WindowConstants.HIDE_ON_CLOSE"},
	{'s', "WindowConstants.DISPOSE_ON_CLOSE"},
	{'s', "WindowConstants.EXIT_ON_CLOSE"},
	{'-'}
};

$NamedAttribute JFrame_Attribute_var$5[] = {
	{"preferred", 'Z', "true"},
	{"enumerationValues", '[', JFrame_Attribute_var$6},
	{"description", 's', "The frame\'s default close operation."},
	{}
};

$CompoundAttribute _JFrame_MethodAnnotations_setDefaultCloseOperation23[] = {
	{"Ljava/beans/BeanProperty;", JFrame_Attribute_var$5},
	{}
};

$NamedAttribute JFrame_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "A transparent pane used for menu rendering."},
	{}
};

$CompoundAttribute _JFrame_MethodAnnotations_setGlassPane25[] = {
	{"Ljava/beans/BeanProperty;", JFrame_Attribute_var$7},
	{}
};

$NamedAttribute JFrame_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The menubar for accessing pulldown menus from this frame."},
	{}
};

$CompoundAttribute _JFrame_MethodAnnotations_setJMenuBar27[] = {
	{"Ljava/beans/BeanProperty;", JFrame_Attribute_var$8},
	{}
};

$NamedAttribute JFrame_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The pane that holds the various frame layers."},
	{}
};

$CompoundAttribute _JFrame_MethodAnnotations_setLayeredPane28[] = {
	{"Ljava/beans/BeanProperty;", JFrame_Attribute_var$9},
	{}
};

$NamedAttribute JFrame_Attribute_var$10[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Whether the add and setLayout methods are forwarded"},
	{}
};

$CompoundAttribute _JFrame_MethodAnnotations_setRootPaneCheckingEnabled31[] = {
	{"Ljava/beans/BeanProperty;", JFrame_Attribute_var$10},
	{}
};

$NamedAttribute JFrame_Attribute_var$11[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Mechanism for transfer of data into the component"},
	{}
};

$CompoundAttribute _JFrame_MethodAnnotations_setTransferHandler32[] = {
	{"Ljava/beans/BeanProperty;", JFrame_Attribute_var$11},
	{}
};


$FieldInfo _JFrame_FieldInfo_[] = {
	{"defaultLookAndFeelDecoratedKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFrame, defaultLookAndFeelDecoratedKey)},
	{"defaultCloseOperation", "I", nullptr, $PRIVATE, $field(JFrame, defaultCloseOperation)},
	{"transferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE, $field(JFrame, transferHandler)},
	{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $field(JFrame, rootPane)},
	{"rootPaneCheckingEnabled", "Z", nullptr, $PROTECTED, $field(JFrame, rootPaneCheckingEnabled)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JFrame, accessibleContext)},
	{}
};

$MethodInfo _JFrame_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFrame::*)()>(&JFrame::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(JFrame::*)($GraphicsConfiguration*)>(&JFrame::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JFrame::*)($String*)>(&JFrame::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(JFrame::*)($String*,$GraphicsConfiguration*)>(&JFrame::init$))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED},
	{"frameInit", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getDefaultCloseOperation", "()I", nullptr, $PUBLIC},
	{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFrame_MethodAnnotations_getGraphics11},
	{"getJMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC},
	{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFrame_MethodAnnotations_getRootPane14},
	{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC},
	{"isDefaultLookAndFeelDecorated", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JFrame::isDefaultLookAndFeelDecorated))},
	{"isRootPaneCheckingEnabled", "()Z", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processWindowEvent", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PROTECTED},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFrame_MethodAnnotations_setContentPane22},
	{"setDefaultCloseOperation", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFrame_MethodAnnotations_setDefaultCloseOperation23},
	{"setDefaultLookAndFeelDecorated", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&JFrame::setDefaultLookAndFeelDecorated))},
	{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFrame_MethodAnnotations_setGlassPane25},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setJMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFrame_MethodAnnotations_setJMenuBar27},
	{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFrame_MethodAnnotations_setLayeredPane28},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"setRootPane", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"setRootPaneCheckingEnabled", "(Z)V", nullptr, $PROTECTED, nullptr, nullptr, nullptr, _JFrame_MethodAnnotations_setRootPaneCheckingEnabled31},
	{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFrame_MethodAnnotations_setTransferHandler32},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JFrame_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.JFrame$AccessibleJFrame", "javax.swing.JFrame", "AccessibleJFrame", $PROTECTED},
	{}
};

$ClassInfo _JFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JFrame",
	"java.awt.Frame",
	"javax.swing.WindowConstants,javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler",
	_JFrame_FieldInfo_,
	_JFrame_MethodInfo_,
	nullptr,
	nullptr,
	_JFrame_InnerClassesInfo_,
	_JFrame_Annotations_,
	nullptr,
	"javax.swing.JFrame$AccessibleJFrame"
};

$Object* allocate$JFrame($Class* clazz) {
	return $of($alloc(JFrame));
}

$String* JFrame::toString() {
	 return this->$Frame::toString();
}

int32_t JFrame::hashCode() {
	 return this->$Frame::hashCode();
}

bool JFrame::equals(Object$* arg0) {
	 return this->$Frame::equals(arg0);
}

$Object* JFrame::clone() {
	 return this->$Frame::clone();
}

void JFrame::finalize() {
	this->$Frame::finalize();
}


$Object* JFrame::defaultLookAndFeelDecoratedKey = nullptr;

void JFrame::init$() {
	$Frame::init$();
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	frameInit();
}

void JFrame::init$($GraphicsConfiguration* gc) {
	$Frame::init$(gc);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	frameInit();
}

void JFrame::init$($String* title) {
	$Frame::init$(title);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	frameInit();
}

void JFrame::init$($String* title, $GraphicsConfiguration* gc) {
	$Frame::init$(title, gc);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	frameInit();
}

void JFrame::frameInit() {
	$useLocalCurrentObjectStackCache();
	enableEvents($AWTEvent::KEY_EVENT_MASK | $AWTEvent::WINDOW_EVENT_MASK);
	setLocale($($JComponent::getDefaultLocale()));
	setRootPane($(createRootPane()));
	setBackground($($UIManager::getColor("control"_s)));
	setRootPaneCheckingEnabled(true);
	if (JFrame::isDefaultLookAndFeelDecorated()) {
		bool supportsWindowDecorations = $nc($($UIManager::getLookAndFeel()))->getSupportsWindowDecorations();
		if (supportsWindowDecorations) {
			setUndecorated(true);
			$nc($(getRootPane()))->setWindowDecorationStyle($JRootPane::FRAME);
		}
	}
	$SunToolkit::checkAndSetPolicy(this);
}

$JRootPane* JFrame::createRootPane() {
	$var($JRootPane, rp, $new($JRootPane));
	rp->setOpaque(true);
	return rp;
}

void JFrame::processWindowEvent($WindowEvent* e) {
	$Frame::processWindowEvent(e);
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
		case $WindowConstants::EXIT_ON_CLOSE:
			{
				$System::exit(0);
				break;
			}
		case $WindowConstants::DO_NOTHING_ON_CLOSE:
			{}
		default:
			{}
		}
	}
}

void JFrame::setDefaultCloseOperation(int32_t operation) {
	if (operation != $WindowConstants::DO_NOTHING_ON_CLOSE && operation != $WindowConstants::HIDE_ON_CLOSE && operation != $WindowConstants::DISPOSE_ON_CLOSE && operation != $WindowConstants::EXIT_ON_CLOSE) {
		$throwNew($IllegalArgumentException, "defaultCloseOperation must be one of: DO_NOTHING_ON_CLOSE, HIDE_ON_CLOSE, DISPOSE_ON_CLOSE, or EXIT_ON_CLOSE"_s);
	}
	if (operation == $WindowConstants::EXIT_ON_CLOSE) {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkExit(0);
		}
	}
	if (this->defaultCloseOperation != operation) {
		int32_t oldValue = this->defaultCloseOperation;
		this->defaultCloseOperation = operation;
		firePropertyChange("defaultCloseOperation"_s, oldValue, operation);
	}
}

int32_t JFrame::getDefaultCloseOperation() {
	return this->defaultCloseOperation;
}

void JFrame::setTransferHandler($TransferHandler* newHandler) {
	$var($TransferHandler, oldHandler, this->transferHandler);
	$set(this, transferHandler, newHandler);
	$SwingUtilities::installSwingDropTargetAsNecessary(this, this->transferHandler);
	firePropertyChange("transferHandler"_s, $of(oldHandler), $of(newHandler));
}

$TransferHandler* JFrame::getTransferHandler() {
	return this->transferHandler;
}

void JFrame::update($Graphics* g) {
	paint(g);
}

void JFrame::setJMenuBar($JMenuBar* menubar) {
	$nc($(getRootPane()))->setJMenuBar(menubar);
}

$JMenuBar* JFrame::getJMenuBar() {
	return $nc($(getRootPane()))->getJMenuBar();
}

bool JFrame::isRootPaneCheckingEnabled() {
	return this->rootPaneCheckingEnabled;
}

void JFrame::setRootPaneCheckingEnabled(bool enabled) {
	this->rootPaneCheckingEnabled = enabled;
}

void JFrame::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->add(comp, constraints, index);
	} else {
		$Frame::addImpl(comp, constraints, index);
	}
}

void JFrame::remove($Component* comp) {
	if ($equals(comp, this->rootPane)) {
		$Frame::remove(comp);
	} else {
		$nc($(getContentPane()))->remove(comp);
	}
}

void JFrame::setLayout($LayoutManager* manager) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->setLayout(manager);
	} else {
		$Frame::setLayout(manager);
	}
}

$JRootPane* JFrame::getRootPane() {
	return this->rootPane;
}

void JFrame::setRootPane($JRootPane* root) {
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

void JFrame::setIconImage($Image* image) {
	$Frame::setIconImage(image);
}

$Container* JFrame::getContentPane() {
	return $nc($(getRootPane()))->getContentPane();
}

void JFrame::setContentPane($Container* contentPane) {
	$nc($(getRootPane()))->setContentPane(contentPane);
}

$JLayeredPane* JFrame::getLayeredPane() {
	return $nc($(getRootPane()))->getLayeredPane();
}

void JFrame::setLayeredPane($JLayeredPane* layeredPane) {
	$nc($(getRootPane()))->setLayeredPane(layeredPane);
}

$Component* JFrame::getGlassPane() {
	return $nc($(getRootPane()))->getGlassPane();
}

void JFrame::setGlassPane($Component* glassPane) {
	$nc($(getRootPane()))->setGlassPane(glassPane);
}

$Graphics* JFrame::getGraphics() {
	$JComponent::getGraphicsInvoked(this);
	return $Frame::getGraphics();
}

void JFrame::repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($RepaintManager);
	if ($RepaintManager::HANDLE_TOP_LEVEL_PAINT) {
		$nc($($RepaintManager::currentManager(static_cast<$Component*>(this))))->addDirtyRegion(static_cast<$Window*>(this), x, y, width, height);
	} else {
		$Frame::repaint(time, x, y, width, height);
	}
}

void JFrame::setDefaultLookAndFeelDecorated(bool defaultLookAndFeelDecorated) {
	$init(JFrame);
	if (defaultLookAndFeelDecorated) {
		$init($Boolean);
		$SwingUtilities::appContextPut(JFrame::defaultLookAndFeelDecoratedKey, $Boolean::TRUE);
	} else {
		$init($Boolean);
		$SwingUtilities::appContextPut(JFrame::defaultLookAndFeelDecoratedKey, $Boolean::FALSE);
	}
}

bool JFrame::isDefaultLookAndFeelDecorated() {
	$init(JFrame);
	$var($Boolean, defaultLookAndFeelDecorated, $cast($Boolean, $SwingUtilities::appContextGet(JFrame::defaultLookAndFeelDecoratedKey)));
	if (defaultLookAndFeelDecorated == nullptr) {
		$init($Boolean);
		$assign(defaultLookAndFeelDecorated, $Boolean::FALSE);
	}
	return $nc(defaultLookAndFeelDecorated)->booleanValue();
}

$String* JFrame::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, defaultCloseOperationString, nullptr);
	if (this->defaultCloseOperation == $WindowConstants::HIDE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "HIDE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DISPOSE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DISPOSE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DO_NOTHING_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DO_NOTHING_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::EXIT_ON_CLOSE) {
		$assign(defaultCloseOperationString, "EXIT_ON_CLOSE"_s);
	} else {
		$assign(defaultCloseOperationString, ""_s);
	}
	$var($String, rootPaneString, this->rootPane != nullptr ? $nc(this->rootPane)->toString() : ""_s);
	$var($String, rootPaneCheckingEnabledString, this->rootPaneCheckingEnabled ? "true"_s : "false"_s);
	return $str({$($Frame::paramString()), ",defaultCloseOperation="_s, defaultCloseOperationString, ",rootPane="_s, rootPaneString, ",rootPaneCheckingEnabled="_s, rootPaneCheckingEnabledString});
}

$AccessibleContext* JFrame::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JFrame$AccessibleJFrame, this));
	}
	return this->accessibleContext;
}

void clinit$JFrame($Class* class$) {
	$assignStatic(JFrame::defaultLookAndFeelDecoratedKey, $new($StringBuffer, "JFrame.defaultLookAndFeelDecorated"_s));
}

JFrame::JFrame() {
}

$Class* JFrame::load$($String* name, bool initialize) {
	$loadClass(JFrame, name, initialize, &_JFrame_ClassInfo_, clinit$JFrame, allocate$JFrame);
	return class$;
}

$Class* JFrame::class$ = nullptr;

	} // swing
} // javax