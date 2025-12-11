#include <sun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI$1.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $UIDefaults = ::javax::swing::UIDefaults;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XTextAreaPeer$XAWTScrollPaneUI$1 = ::sun::awt::X11::XTextAreaPeer$XAWTScrollPaneUI$1;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$XAWTScrollPaneUI_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTextAreaPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$XAWTScrollPaneUI, this$0)},
	{"vsbMarginBorderR", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$XAWTScrollPaneUI, vsbMarginBorderR)},
	{"vsbMarginBorderL", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$XAWTScrollPaneUI, vsbMarginBorderL)},
	{"hsbMarginBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$XAWTScrollPaneUI, hsbMarginBorder)},
	{"vsbBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE, $field(XTextAreaPeer$XAWTScrollPaneUI, vsbBorder)},
	{"hsbBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE, $field(XTextAreaPeer$XAWTScrollPaneUI, hsbBorder)},
	{"propertyChangeHandler", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(XTextAreaPeer$XAWTScrollPaneUI, propertyChangeHandler)},
	{}
};

$MethodInfo _XTextAreaPeer$XAWTScrollPaneUI_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTextAreaPeer;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$XAWTScrollPaneUI::*)($XTextAreaPeer*)>(&XTextAreaPeer$XAWTScrollPaneUI::init$))},
	{"createPropertyChangeHandler", "()Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $method(static_cast<$PropertyChangeListener*(XTextAreaPeer$XAWTScrollPaneUI::*)()>(&XTextAreaPeer$XAWTScrollPaneUI::createPropertyChangeHandler))},
	{"installDefaults", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, 0, $method(static_cast<bool(XTextAreaPeer$XAWTScrollPaneUI::*)($Component*)>(&XTextAreaPeer$XAWTScrollPaneUI::isLeftToRight))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XTextAreaPeer$XAWTScrollPaneUI_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI", "sun.awt.X11.XTextAreaPeer", "XAWTScrollPaneUI", $FINAL},
	{"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTextAreaPeer$XAWTScrollPaneUI_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI",
	"javax.swing.plaf.basic.BasicScrollPaneUI",
	nullptr,
	_XTextAreaPeer$XAWTScrollPaneUI_FieldInfo_,
	_XTextAreaPeer$XAWTScrollPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$XAWTScrollPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$XAWTScrollPaneUI($Class* clazz) {
	return $of($alloc(XTextAreaPeer$XAWTScrollPaneUI));
}

void XTextAreaPeer$XAWTScrollPaneUI::init$($XTextAreaPeer* this$0) {
	$set(this, this$0, this$0);
	$BasicScrollPaneUI::init$();
	$set(this, vsbMarginBorderR, $new($EmptyBorder, 0, 2, 0, 0));
	$set(this, vsbMarginBorderL, $new($EmptyBorder, 0, 0, 0, 2));
	$set(this, hsbMarginBorder, $new($EmptyBorder, 2, 0, 0, 0));
}

void XTextAreaPeer$XAWTScrollPaneUI::installListeners($JScrollPane* scrollPane) {
	$BasicScrollPaneUI::installListeners(scrollPane);
	$set(this, propertyChangeHandler, createPropertyChangeHandler());
	$nc(scrollPane)->addPropertyChangeListener(this->propertyChangeHandler);
}

void XTextAreaPeer$XAWTScrollPaneUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Border, vpBorder, $nc(this->scrollpane)->getViewportBorder());
	if (vpBorder != nullptr) {
		$var($Rectangle, r, $nc(this->scrollpane)->getViewportBorderBounds());
		vpBorder->paintBorder(this->scrollpane, g, $nc(r)->x, r->y, r->width, r->height);
	}
}

void XTextAreaPeer$XAWTScrollPaneUI::uninstallListeners($JComponent* scrollPane) {
	$BasicScrollPaneUI::uninstallListeners(scrollPane);
	$nc(scrollPane)->removePropertyChangeListener(this->propertyChangeHandler);
}

$PropertyChangeListener* XTextAreaPeer$XAWTScrollPaneUI::createPropertyChangeHandler() {
	return $new($XTextAreaPeer$XAWTScrollPaneUI$1, this);
}

bool XTextAreaPeer$XAWTScrollPaneUI::isLeftToRight($Component* c) {
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

void XTextAreaPeer$XAWTScrollPaneUI::installDefaults($JScrollPane* scrollpane) {
	$useLocalCurrentObjectStackCache();
	$var($Border, b, $nc(scrollpane)->getBorder());
	$var($UIDefaults, uidefaults, $XToolkit::getUIDefaults());
	scrollpane->setBorder($($nc(uidefaults)->getBorder("ScrollPane.border"_s)));
	scrollpane->setBackground($($nc(uidefaults)->getColor("ScrollPane.background"_s)));
	scrollpane->setViewportBorder($($nc(uidefaults)->getBorder("TextField.border"_s)));
	$var($JScrollBar, vsb, scrollpane->getVerticalScrollBar());
	if (vsb != nullptr) {
		if (isLeftToRight(scrollpane)) {
			$set(this, vsbBorder, $new($CompoundBorder, this->vsbMarginBorderR, $(vsb->getBorder())));
		} else {
			$set(this, vsbBorder, $new($CompoundBorder, this->vsbMarginBorderL, $(vsb->getBorder())));
		}
		vsb->setBorder(this->vsbBorder);
	}
	$var($JScrollBar, hsb, scrollpane->getHorizontalScrollBar());
	if (hsb != nullptr) {
		$set(this, hsbBorder, $new($CompoundBorder, this->hsbMarginBorder, $(hsb->getBorder())));
		hsb->setBorder(this->hsbBorder);
	}
}

void XTextAreaPeer$XAWTScrollPaneUI::uninstallDefaults($JScrollPane* c) {
	$useLocalCurrentObjectStackCache();
	$BasicScrollPaneUI::uninstallDefaults(c);
	$var($JScrollBar, vsb, $nc(this->scrollpane)->getVerticalScrollBar());
	if (vsb != nullptr) {
		if (vsb->getBorder() == this->vsbBorder) {
			vsb->setBorder(nullptr);
		}
		$set(this, vsbBorder, nullptr);
	}
	$var($JScrollBar, hsb, $nc(this->scrollpane)->getHorizontalScrollBar());
	if (hsb != nullptr) {
		if (hsb->getBorder() == this->hsbBorder) {
			hsb->setBorder(nullptr);
		}
		$set(this, hsbBorder, nullptr);
	}
}

XTextAreaPeer$XAWTScrollPaneUI::XTextAreaPeer$XAWTScrollPaneUI() {
}

$Class* XTextAreaPeer$XAWTScrollPaneUI::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$XAWTScrollPaneUI, name, initialize, &_XTextAreaPeer$XAWTScrollPaneUI_ClassInfo_, allocate$XTextAreaPeer$XAWTScrollPaneUI);
	return class$;
}

$Class* XTextAreaPeer$XAWTScrollPaneUI::class$ = nullptr;

		} // X11
	} // awt
} // sun