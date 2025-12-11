#include <sun/awt/X11/XTextAreaPeer$AWTTextPane$XAWTScrollBar.h>

#include <java/awt/Component.h>
#include <javax/swing/JScrollPane$ScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <sun/awt/X11/XTextAreaPeer$AWTTextPane.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTScrollBarUI.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JScrollPane$ScrollBar = ::javax::swing::JScrollPane$ScrollBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $XTextAreaPeer$AWTTextPane = ::sun::awt::X11::XTextAreaPeer$AWTTextPane;
using $XTextAreaPeer$XAWTScrollBarUI = ::sun::awt::X11::XTextAreaPeer$XAWTScrollBarUI;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$AWTTextPane$XAWTScrollBar_FieldInfo_[] = {
	{"this$1", "Lsun/awt/X11/XTextAreaPeer$AWTTextPane;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$AWTTextPane$XAWTScrollBar, this$1)},
	{}
};

$MethodInfo _XTextAreaPeer$AWTTextPane$XAWTScrollBar_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTextAreaPeer$AWTTextPane;I)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$AWTTextPane$XAWTScrollBar::*)($XTextAreaPeer$AWTTextPane*,int32_t)>(&XTextAreaPeer$AWTTextPane$XAWTScrollBar::init$))},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextAreaPeer$AWTTextPane$XAWTScrollBar_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$AWTTextPane", "sun.awt.X11.XTextAreaPeer", "AWTTextPane", $PRIVATE},
	{"sun.awt.X11.XTextAreaPeer$AWTTextPane$XAWTScrollBar", "sun.awt.X11.XTextAreaPeer$AWTTextPane", "XAWTScrollBar", $FINAL},
	{"javax.swing.JScrollPane$ScrollBar", "javax.swing.JScrollPane", "ScrollBar", $PROTECTED},
	{}
};

$ClassInfo _XTextAreaPeer$AWTTextPane$XAWTScrollBar_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$AWTTextPane$XAWTScrollBar",
	"javax.swing.JScrollPane$ScrollBar",
	nullptr,
	_XTextAreaPeer$AWTTextPane$XAWTScrollBar_FieldInfo_,
	_XTextAreaPeer$AWTTextPane$XAWTScrollBar_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$AWTTextPane$XAWTScrollBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$AWTTextPane$XAWTScrollBar($Class* clazz) {
	return $of($alloc(XTextAreaPeer$AWTTextPane$XAWTScrollBar));
}

void XTextAreaPeer$AWTTextPane$XAWTScrollBar::init$($XTextAreaPeer$AWTTextPane* this$1, int32_t i) {
	$set(this, this$1, this$1);
	$JScrollPane$ScrollBar::init$(this$1, i);
	setFocusable(false);
}

void XTextAreaPeer$AWTTextPane$XAWTScrollBar::updateUI() {
	$var($ComponentUI, ui, $new($XTextAreaPeer$XAWTScrollBarUI, this->this$1->this$0));
	setUI(ui);
}

XTextAreaPeer$AWTTextPane$XAWTScrollBar::XTextAreaPeer$AWTTextPane$XAWTScrollBar() {
}

$Class* XTextAreaPeer$AWTTextPane$XAWTScrollBar::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$AWTTextPane$XAWTScrollBar, name, initialize, &_XTextAreaPeer$AWTTextPane$XAWTScrollBar_ClassInfo_, allocate$XTextAreaPeer$AWTTextPane$XAWTScrollBar);
	return class$;
}

$Class* XTextAreaPeer$AWTTextPane$XAWTScrollBar::class$ = nullptr;

		} // X11
	} // awt
} // sun