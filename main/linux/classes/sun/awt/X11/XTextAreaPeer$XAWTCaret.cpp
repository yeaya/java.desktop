#include <sun/awt/X11/XTextAreaPeer$XAWTCaret.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XTextAreaPeer$XAWTCaret_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$XAWTCaret::*)()>(&XTextAreaPeer$XAWTCaret::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextAreaPeer$XAWTCaret_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$XAWTCaret", "sun.awt.X11.XTextAreaPeer", "XAWTCaret", $STATIC | $FINAL},
	{}
};

$ClassInfo _XTextAreaPeer$XAWTCaret_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$XAWTCaret",
	"javax.swing.text.DefaultCaret",
	nullptr,
	nullptr,
	_XTextAreaPeer$XAWTCaret_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$XAWTCaret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$XAWTCaret($Class* clazz) {
	return $of($alloc(XTextAreaPeer$XAWTCaret));
}

void XTextAreaPeer$XAWTCaret::init$() {
	$DefaultCaret::init$();
}

void XTextAreaPeer$XAWTCaret::focusGained($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$DefaultCaret::focusGained(e);
	if ($nc($(getComponent()))->isEnabled()) {
		$DefaultCaret::setVisible(true);
	}
	$nc($(getComponent()))->repaint();
}

void XTextAreaPeer$XAWTCaret::focusLost($FocusEvent* e) {
	$DefaultCaret::focusLost(e);
	$nc($(getComponent()))->repaint();
}

XTextAreaPeer$XAWTCaret::XTextAreaPeer$XAWTCaret() {
}

$Class* XTextAreaPeer$XAWTCaret::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$XAWTCaret, name, initialize, &_XTextAreaPeer$XAWTCaret_ClassInfo_, allocate$XTextAreaPeer$XAWTCaret);
	return class$;
}

$Class* XTextAreaPeer$XAWTCaret::class$ = nullptr;

		} // X11
	} // awt
} // sun