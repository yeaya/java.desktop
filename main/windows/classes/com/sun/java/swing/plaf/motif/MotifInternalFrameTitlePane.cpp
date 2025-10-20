#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>

#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$1.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$2.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$FrameButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$MaximizeButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$MinimizeButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$SystemButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

#undef BUTTON_SIZE
#undef IS_SELECTED_PROPERTY
#undef TITLE_PROPERTY
#undef TRUE

using $MotifInternalFrameTitlePane$1 = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$1;
using $MotifInternalFrameTitlePane$2 = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$2;
using $MotifInternalFrameTitlePane$FrameButton = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton;
using $MotifInternalFrameTitlePane$MaximizeButton = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$MaximizeButton;
using $MotifInternalFrameTitlePane$MinimizeButton = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$MinimizeButton;
using $MotifInternalFrameTitlePane$SystemButton = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$SystemButton;
using $MotifInternalFrameTitlePane$Title = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$Title;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JSeparator = ::javax::swing::JSeparator;
using $UIManager = ::javax::swing::UIManager;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifInternalFrameTitlePane_FieldInfo_[] = {
	{"systemButton", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$SystemButton;", nullptr, 0, $field(MotifInternalFrameTitlePane, systemButton)},
	{"minimizeButton", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$MinimizeButton;", nullptr, 0, $field(MotifInternalFrameTitlePane, minimizeButton)},
	{"maximizeButton", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$MaximizeButton;", nullptr, 0, $field(MotifInternalFrameTitlePane, maximizeButton)},
	{"systemMenu", "Ljavax/swing/JPopupMenu;", nullptr, 0, $field(MotifInternalFrameTitlePane, systemMenu)},
	{"title", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title;", nullptr, 0, $field(MotifInternalFrameTitlePane, title)},
	{"color", "Ljava/awt/Color;", nullptr, 0, $field(MotifInternalFrameTitlePane, color)},
	{"highlight", "Ljava/awt/Color;", nullptr, 0, $field(MotifInternalFrameTitlePane, highlight)},
	{"shadow", "Ljava/awt/Color;", nullptr, 0, $field(MotifInternalFrameTitlePane, shadow)},
	{"BUTTON_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifInternalFrameTitlePane, BUTTON_SIZE)},
	{"buttonDimension", "Ljava/awt/Dimension;", nullptr, $STATIC, $staticField(MotifInternalFrameTitlePane, buttonDimension)},
	{}
};

$MethodInfo _MotifInternalFrameTitlePane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifInternalFrameTitlePane::*)($JInternalFrame*)>(&MotifInternalFrameTitlePane::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)Ljavax/swing/Action;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Action*(*)(MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane::access$100))},
	{"access$200", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane::access$200))},
	{"access$300", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane::access$300))},
	{"access$400", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane::access$400))},
	{"access$500", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane::access$500))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addSubComponents", "()V", nullptr, $PROTECTED},
	{"assembleSystemMenu", "()V", nullptr, $PROTECTED},
	{"createButtons", "()V", nullptr, $PROTECTED},
	{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"getButtonMnemonic", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&MotifInternalFrameTitlePane::getButtonMnemonic))},
	{"getSystemMenu", "()Ljavax/swing/JPopupMenu;", nullptr, 0},
	{"hideSystemMenu", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setColors", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, 0},
	{"showSystemMenu", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifInternalFrameTitlePane_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "Title", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$SystemButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "SystemButton", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$MaximizeButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "MaximizeButton", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$MinimizeButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "MinimizeButton", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "FrameButton", $PRIVATE | $ABSTRACT},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifInternalFrameTitlePane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane",
	"java.awt.LayoutManager,java.awt.event.ActionListener,java.beans.PropertyChangeListener",
	_MotifInternalFrameTitlePane_FieldInfo_,
	_MotifInternalFrameTitlePane_MethodInfo_,
	nullptr,
	nullptr,
	_MotifInternalFrameTitlePane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title,com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title$2,com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title$1,com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$SystemButton,com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$MaximizeButton,com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$MinimizeButton,com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton,com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$2,com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$1"
};

$Object* allocate$MotifInternalFrameTitlePane($Class* clazz) {
	return $of($alloc(MotifInternalFrameTitlePane));
}

$String* MotifInternalFrameTitlePane::toString() {
	 return this->$BasicInternalFrameTitlePane::toString();
}

int32_t MotifInternalFrameTitlePane::hashCode() {
	 return this->$BasicInternalFrameTitlePane::hashCode();
}

bool MotifInternalFrameTitlePane::equals(Object$* arg0) {
	 return this->$BasicInternalFrameTitlePane::equals(arg0);
}

$Object* MotifInternalFrameTitlePane::clone() {
	 return this->$BasicInternalFrameTitlePane::clone();
}

void MotifInternalFrameTitlePane::finalize() {
	this->$BasicInternalFrameTitlePane::finalize();
}

$Dimension* MotifInternalFrameTitlePane::buttonDimension = nullptr;

$JInternalFrame* MotifInternalFrameTitlePane::access$500(MotifInternalFrameTitlePane* x0) {
	$init(MotifInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MotifInternalFrameTitlePane::access$400(MotifInternalFrameTitlePane* x0) {
	$init(MotifInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MotifInternalFrameTitlePane::access$300(MotifInternalFrameTitlePane* x0) {
	$init(MotifInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MotifInternalFrameTitlePane::access$200(MotifInternalFrameTitlePane* x0) {
	$init(MotifInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$Action* MotifInternalFrameTitlePane::access$100(MotifInternalFrameTitlePane* x0) {
	$init(MotifInternalFrameTitlePane);
	return $nc(x0)->closeAction;
}

$JInternalFrame* MotifInternalFrameTitlePane::access$000(MotifInternalFrameTitlePane* x0) {
	$init(MotifInternalFrameTitlePane);
	return $nc(x0)->frame;
}

void MotifInternalFrameTitlePane::init$($JInternalFrame* frame) {
	$BasicInternalFrameTitlePane::init$(frame);
}

void MotifInternalFrameTitlePane::installDefaults() {
	$useLocalCurrentObjectStackCache();
	setFont($($UIManager::getFont("InternalFrame.titleFont"_s)));
	setPreferredSize($$new($Dimension, 100, MotifInternalFrameTitlePane::BUTTON_SIZE));
}

void MotifInternalFrameTitlePane::uninstallListeners() {
	$BasicInternalFrameTitlePane::uninstallListeners();
}

$PropertyChangeListener* MotifInternalFrameTitlePane::createPropertyChangeListener() {
	return this;
}

$LayoutManager* MotifInternalFrameTitlePane::createLayout() {
	return this;
}

$JPopupMenu* MotifInternalFrameTitlePane::getSystemMenu() {
	return this->systemMenu;
}

void MotifInternalFrameTitlePane::assembleSystemMenu() {
	$useLocalCurrentObjectStackCache();
	$set(this, systemMenu, $new($JPopupMenu));
	$var($JMenuItem, mi, $nc(this->systemMenu)->add(this->restoreAction));
	$nc(mi)->setMnemonic(getButtonMnemonic("restore"_s));
	$assign(mi, $nc(this->systemMenu)->add(this->moveAction));
	mi->setMnemonic(getButtonMnemonic("move"_s));
	$assign(mi, $nc(this->systemMenu)->add(this->sizeAction));
	mi->setMnemonic(getButtonMnemonic("size"_s));
	$assign(mi, $nc(this->systemMenu)->add(this->iconifyAction));
	mi->setMnemonic(getButtonMnemonic("minimize"_s));
	$assign(mi, $nc(this->systemMenu)->add(this->maximizeAction));
	mi->setMnemonic(getButtonMnemonic("maximize"_s));
	$nc(this->systemMenu)->add(static_cast<$Component*>($$new($JSeparator)));
	$assign(mi, $nc(this->systemMenu)->add(this->closeAction));
	mi->setMnemonic(getButtonMnemonic("close"_s));
	$set(this, systemButton, $new($MotifInternalFrameTitlePane$SystemButton, this));
	$nc(this->systemButton)->addActionListener($$new($MotifInternalFrameTitlePane$1, this));
	$nc(this->systemButton)->addMouseListener($$new($MotifInternalFrameTitlePane$2, this));
}

int32_t MotifInternalFrameTitlePane::getButtonMnemonic($String* button) {
	$init(MotifInternalFrameTitlePane);
	$useLocalCurrentObjectStackCache();
	try {
		return $Integer::parseInt($($UIManager::getString($$str({"InternalFrameTitlePane."_s, button, "Button.mnemonic"_s}))));
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, e, $catch());
		return -1;
	}
	$shouldNotReachHere();
}

void MotifInternalFrameTitlePane::createButtons() {
	$set(this, minimizeButton, $new($MotifInternalFrameTitlePane$MinimizeButton, this));
	$nc(this->minimizeButton)->addActionListener(this->iconifyAction);
	$set(this, maximizeButton, $new($MotifInternalFrameTitlePane$MaximizeButton, this));
	$nc(this->maximizeButton)->addActionListener(this->maximizeAction);
}

void MotifInternalFrameTitlePane::addSubComponents() {
	$useLocalCurrentObjectStackCache();
	$set(this, title, $new($MotifInternalFrameTitlePane$Title, this, $($nc(this->frame)->getTitle())));
	$nc(this->title)->setFont($(getFont()));
	add(static_cast<$Component*>(this->systemButton));
	add(static_cast<$Component*>(this->title));
	add(static_cast<$Component*>(this->minimizeButton));
	add(static_cast<$Component*>(this->maximizeButton));
}

void MotifInternalFrameTitlePane::paintComponent($Graphics* g) {
}

void MotifInternalFrameTitlePane::setColors($Color* c, $Color* h, $Color* s) {
	$set(this, color, c);
	$set(this, highlight, h);
	$set(this, shadow, s);
}

void MotifInternalFrameTitlePane::actionPerformed($ActionEvent* e) {
}

void MotifInternalFrameTitlePane::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(evt)->getPropertyName());
	$var($JInternalFrame, f, $cast($JInternalFrame, evt->getSource()));
	bool value = false;
	$init($JInternalFrame);
	if ($nc($JInternalFrame::IS_SELECTED_PROPERTY)->equals(prop)) {
		repaint();
	} else if ($nc(prop)->equals("maximizable"_s)) {
		$init($Boolean);
		if ($cast($Boolean, evt->getNewValue()) == $Boolean::TRUE) {
			add(static_cast<$Component*>(this->maximizeButton));
		} else {
			remove(static_cast<$Component*>(this->maximizeButton));
		}
		revalidate();
		repaint();
	} else if (prop->equals("iconable"_s)) {
		$init($Boolean);
		if ($cast($Boolean, evt->getNewValue()) == $Boolean::TRUE) {
			add(static_cast<$Component*>(this->minimizeButton));
		} else {
			remove(static_cast<$Component*>(this->minimizeButton));
		}
		revalidate();
		repaint();
	} else {
		if (prop->equals($JInternalFrame::TITLE_PROPERTY)) {
			repaint();
		}
	}
	enableActions();
}

void MotifInternalFrameTitlePane::addLayoutComponent($String* name, $Component* c) {
}

void MotifInternalFrameTitlePane::removeLayoutComponent($Component* c) {
}

$Dimension* MotifInternalFrameTitlePane::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

$Dimension* MotifInternalFrameTitlePane::minimumLayoutSize($Container* c) {
	return $new($Dimension, 100, MotifInternalFrameTitlePane::BUTTON_SIZE);
}

void MotifInternalFrameTitlePane::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	int32_t w = getWidth();
	$nc(this->systemButton)->setBounds(0, 0, MotifInternalFrameTitlePane::BUTTON_SIZE, MotifInternalFrameTitlePane::BUTTON_SIZE);
	int32_t x = w - MotifInternalFrameTitlePane::BUTTON_SIZE;
	if ($nc(this->frame)->isMaximizable()) {
		$nc(this->maximizeButton)->setBounds(x, 0, MotifInternalFrameTitlePane::BUTTON_SIZE, MotifInternalFrameTitlePane::BUTTON_SIZE);
		x -= MotifInternalFrameTitlePane::BUTTON_SIZE;
	} else if ($nc(this->maximizeButton)->getParent() != nullptr) {
		$nc($($nc(this->maximizeButton)->getParent()))->remove(static_cast<$Component*>(this->maximizeButton));
	}
	if ($nc(this->frame)->isIconifiable()) {
		$nc(this->minimizeButton)->setBounds(x, 0, MotifInternalFrameTitlePane::BUTTON_SIZE, MotifInternalFrameTitlePane::BUTTON_SIZE);
		x -= MotifInternalFrameTitlePane::BUTTON_SIZE;
	} else if ($nc(this->minimizeButton)->getParent() != nullptr) {
		$nc($($nc(this->minimizeButton)->getParent()))->remove(static_cast<$Component*>(this->minimizeButton));
	}
	$nc(this->title)->setBounds(MotifInternalFrameTitlePane::BUTTON_SIZE, 0, x, MotifInternalFrameTitlePane::BUTTON_SIZE);
}

void MotifInternalFrameTitlePane::showSystemMenu() {
	$nc(this->systemMenu)->show(this->systemButton, 0, MotifInternalFrameTitlePane::BUTTON_SIZE);
}

void MotifInternalFrameTitlePane::hideSystemMenu() {
	$nc(this->systemMenu)->setVisible(false);
}

void clinit$MotifInternalFrameTitlePane($Class* class$) {
	$assignStatic(MotifInternalFrameTitlePane::buttonDimension, $new($Dimension, MotifInternalFrameTitlePane::BUTTON_SIZE, MotifInternalFrameTitlePane::BUTTON_SIZE));
}

MotifInternalFrameTitlePane::MotifInternalFrameTitlePane() {
}

$Class* MotifInternalFrameTitlePane::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameTitlePane, name, initialize, &_MotifInternalFrameTitlePane_ClassInfo_, clinit$MotifInternalFrameTitlePane, allocate$MotifInternalFrameTitlePane);
	return class$;
}

$Class* MotifInternalFrameTitlePane::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com