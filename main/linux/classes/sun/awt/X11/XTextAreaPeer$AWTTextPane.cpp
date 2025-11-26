#include <sun/awt/X11/XTextAreaPeer$AWTTextPane.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane$ScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollPaneUI.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XTextAreaPeer$AWTTextPane$XAWTScrollBar.h>
#include <sun/awt/X11/XTextAreaPeer$BevelBorder.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $Window = ::java::awt::Window;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JScrollPane$ScrollBar = ::javax::swing::JScrollPane$ScrollBar;
using $JTextArea = ::javax::swing::JTextArea;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollPaneUI = ::javax::swing::plaf::ScrollPaneUI;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XTextAreaPeer$AWTTextPane$XAWTScrollBar = ::sun::awt::X11::XTextAreaPeer$AWTTextPane$XAWTScrollBar;
using $XTextAreaPeer$BevelBorder = ::sun::awt::X11::XTextAreaPeer$BevelBorder;
using $XTextAreaPeer$XAWTScrollPaneUI = ::sun::awt::X11::XTextAreaPeer$XAWTScrollPaneUI;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$AWTTextPane_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTextAreaPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$AWTTextPane, this$0)},
	{"jtext", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$AWTTextPane, jtext)},
	{"xwin", "Lsun/awt/X11/XWindow;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$AWTTextPane, xwin)},
	{"control", "Ljava/awt/Color;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$AWTTextPane, control)},
	{"focus", "Ljava/awt/Color;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$AWTTextPane, focus)},
	{}
};

$MethodInfo _XTextAreaPeer$AWTTextPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11/XTextAreaPeer;Ljavax/swing/JTextArea;Lsun/awt/X11/XWindow;Ljava/awt/Container;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$AWTTextPane::*)($XTextAreaPeer*,$JTextArea*,$XWindow*,$Container*)>(&XTextAreaPeer$AWTTextPane::init$))},
	{"createHorizontalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC},
	{"createVerticalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getRealParent", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getTextArea", "()Ljavax/swing/JTextArea;", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextAreaPeer$AWTTextPane_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$AWTTextPane", "sun.awt.X11.XTextAreaPeer", "AWTTextPane", $PRIVATE},
	{"sun.awt.X11.XTextAreaPeer$AWTTextPane$XAWTScrollBar", "sun.awt.X11.XTextAreaPeer$AWTTextPane", "XAWTScrollBar", $FINAL},
	{}
};

$ClassInfo _XTextAreaPeer$AWTTextPane_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$AWTTextPane",
	"javax.swing.JScrollPane",
	"java.awt.event.FocusListener",
	_XTextAreaPeer$AWTTextPane_FieldInfo_,
	_XTextAreaPeer$AWTTextPane_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$AWTTextPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$AWTTextPane($Class* clazz) {
	return $of($alloc(XTextAreaPeer$AWTTextPane));
}

$String* XTextAreaPeer$AWTTextPane::toString() {
	 return this->$JScrollPane::toString();
}

int32_t XTextAreaPeer$AWTTextPane::hashCode() {
	 return this->$JScrollPane::hashCode();
}

bool XTextAreaPeer$AWTTextPane::equals(Object$* arg0) {
	 return this->$JScrollPane::equals(arg0);
}

$Object* XTextAreaPeer$AWTTextPane::clone() {
	 return this->$JScrollPane::clone();
}

void XTextAreaPeer$AWTTextPane::finalize() {
	this->$JScrollPane::finalize();
}

void XTextAreaPeer$AWTTextPane::init$($XTextAreaPeer* this$0, $JTextArea* jt, $XWindow* xwin, $Container* parent) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JScrollPane::init$(jt);
	$init($SystemColor);
	$set(this, control, $SystemColor::control);
	$set(this, focus, $SystemColor::activeCaptionBorder);
	$set(this, xwin, xwin);
	setDoubleBuffered(true);
	$nc(jt)->addFocusListener(this);
	$nc($($AWTAccessor::getComponentAccessor()))->setParent(this, parent);
	setViewportBorder($$new($XTextAreaPeer$BevelBorder, false, $SystemColor::controlDkShadow, $SystemColor::controlLtHighlight));
	$set(this, jtext, jt);
	setFocusable(false);
	addNotify();
}

void XTextAreaPeer$AWTTextPane::invalidate() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($Container, parent, getParent());
		$nc($($AWTAccessor::getComponentAccessor()))->setParent(this, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$JScrollPane::invalidate();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc($($AWTAccessor::getComponentAccessor()))->setParent(this, parent);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XTextAreaPeer$AWTTextPane::focusGained($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, getGraphics());
	$var($Rectangle, r, getViewportBorderBounds());
	$nc(g)->setColor(this->focus);
	g->drawRect($nc(r)->x, r->y, r->width, r->height);
	g->dispose();
}

void XTextAreaPeer$AWTTextPane::focusLost($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, getGraphics());
	$var($Rectangle, r, getViewportBorderBounds());
	$nc(g)->setColor(this->control);
	g->drawRect($nc(r)->x, r->y, r->width, r->height);
	g->dispose();
}

$Window* XTextAreaPeer$AWTTextPane::getRealParent() {
	return $cast($Window, $nc(this->xwin)->target);
}

void XTextAreaPeer$AWTTextPane::updateUI() {
	$var($ComponentUI, ui, $new($XTextAreaPeer$XAWTScrollPaneUI, this->this$0));
	setUI(ui);
}

$JScrollBar* XTextAreaPeer$AWTTextPane::createVerticalScrollBar() {
	return $new($XTextAreaPeer$AWTTextPane$XAWTScrollBar, this, $JScrollBar::VERTICAL);
}

$JScrollBar* XTextAreaPeer$AWTTextPane::createHorizontalScrollBar() {
	return $new($XTextAreaPeer$AWTTextPane$XAWTScrollBar, this, $JScrollBar::HORIZONTAL);
}

$JTextArea* XTextAreaPeer$AWTTextPane::getTextArea() {
	return this->jtext;
}

$Graphics* XTextAreaPeer$AWTTextPane::getGraphics() {
	return $nc(this->xwin)->getGraphics();
}

XTextAreaPeer$AWTTextPane::XTextAreaPeer$AWTTextPane() {
}

$Class* XTextAreaPeer$AWTTextPane::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$AWTTextPane, name, initialize, &_XTextAreaPeer$AWTTextPane_ClassInfo_, allocate$XTextAreaPeer$AWTTextPane);
	return class$;
}

$Class* XTextAreaPeer$AWTTextPane::class$ = nullptr;

		} // X11
	} // awt
} // sun