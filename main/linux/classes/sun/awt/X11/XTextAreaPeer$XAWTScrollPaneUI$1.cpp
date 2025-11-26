#include <sun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $XTextAreaPeer$XAWTScrollPaneUI = ::sun::awt::X11::XTextAreaPeer$XAWTScrollPaneUI;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$XAWTScrollPaneUI$1_FieldInfo_[] = {
	{"this$1", "Lsun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$XAWTScrollPaneUI$1, this$1)},
	{}
};

$MethodInfo _XTextAreaPeer$XAWTScrollPaneUI$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$XAWTScrollPaneUI$1::*)($XTextAreaPeer$XAWTScrollPaneUI*)>(&XTextAreaPeer$XAWTScrollPaneUI$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XTextAreaPeer$XAWTScrollPaneUI$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI",
	"createPropertyChangeHandler",
	"()Ljava/beans/PropertyChangeListener;"
};

$InnerClassInfo _XTextAreaPeer$XAWTScrollPaneUI$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI", "sun.awt.X11.XTextAreaPeer", "XAWTScrollPaneUI", $FINAL},
	{"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTextAreaPeer$XAWTScrollPaneUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_XTextAreaPeer$XAWTScrollPaneUI$1_FieldInfo_,
	_XTextAreaPeer$XAWTScrollPaneUI$1_MethodInfo_,
	nullptr,
	&_XTextAreaPeer$XAWTScrollPaneUI$1_EnclosingMethodInfo_,
	_XTextAreaPeer$XAWTScrollPaneUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$XAWTScrollPaneUI$1($Class* clazz) {
	return $of($alloc(XTextAreaPeer$XAWTScrollPaneUI$1));
}

void XTextAreaPeer$XAWTScrollPaneUI$1::init$($XTextAreaPeer$XAWTScrollPaneUI* this$1) {
	$set(this, this$1, this$1);
}

void XTextAreaPeer$XAWTScrollPaneUI$1::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ($nc(propertyName)->equals("componentOrientation"_s)) {
		$var($JScrollPane, pane, $cast($JScrollPane, e->getSource()));
		$var($JScrollBar, vsb, $nc(pane)->getVerticalScrollBar());
		if (vsb != nullptr) {
			if (this->this$1->isLeftToRight(pane)) {
				$var($Border, var$0, static_cast<$Border*>($new($EmptyBorder, 0, 4, 0, -4)));
				$set(this->this$1, vsbBorder, $new($CompoundBorder, var$0, $(vsb->getBorder())));
			} else {
				$var($Border, var$1, static_cast<$Border*>($new($EmptyBorder, 0, -4, 0, 4)));
				$set(this->this$1, vsbBorder, $new($CompoundBorder, var$1, $(vsb->getBorder())));
			}
			vsb->setBorder(this->this$1->vsbBorder);
		}
	}
}

XTextAreaPeer$XAWTScrollPaneUI$1::XTextAreaPeer$XAWTScrollPaneUI$1() {
}

$Class* XTextAreaPeer$XAWTScrollPaneUI$1::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$XAWTScrollPaneUI$1, name, initialize, &_XTextAreaPeer$XAWTScrollPaneUI$1_ClassInfo_, allocate$XTextAreaPeer$XAWTScrollPaneUI$1);
	return class$;
}

$Class* XTextAreaPeer$XAWTScrollPaneUI$1::class$ = nullptr;

		} // X11
	} // awt
} // sun