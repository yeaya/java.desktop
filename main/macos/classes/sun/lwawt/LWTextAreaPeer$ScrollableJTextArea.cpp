#include <sun/lwawt/LWTextAreaPeer$ScrollableJTextArea.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/lwawt/LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate.h>
#include <sun/lwawt/LWTextAreaPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JViewport = ::javax::swing::JViewport;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LWTextAreaPeer = ::sun::lwawt::LWTextAreaPeer;
using $LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate = ::sun::lwawt::LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate;

namespace sun {
	namespace lwawt {

$FieldInfo _LWTextAreaPeer$ScrollableJTextArea_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWTextAreaPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWTextAreaPeer$ScrollableJTextArea, this$0)},
	{}
};

$MethodInfo _LWTextAreaPeer$ScrollableJTextArea_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWTextAreaPeer;)V", nullptr, 0, $method(static_cast<void(LWTextAreaPeer$ScrollableJTextArea::*)($LWTextAreaPeer*)>(&LWTextAreaPeer$ScrollableJTextArea::init$))},
	{"getView", "()Ljavax/swing/JTextArea;", nullptr, $PUBLIC, $method(static_cast<$JTextArea*(LWTextAreaPeer$ScrollableJTextArea::*)()>(&LWTextAreaPeer$ScrollableJTextArea::getView))},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWTextAreaPeer$ScrollableJTextArea_InnerClassesInfo_[] = {
	{"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea", "sun.lwawt.LWTextAreaPeer", "ScrollableJTextArea", $FINAL},
	{"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate", "sun.lwawt.LWTextAreaPeer$ScrollableJTextArea", "JTextAreaDelegate", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWTextAreaPeer$ScrollableJTextArea_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea",
	"javax.swing.JScrollPane",
	nullptr,
	_LWTextAreaPeer$ScrollableJTextArea_FieldInfo_,
	_LWTextAreaPeer$ScrollableJTextArea_MethodInfo_,
	nullptr,
	nullptr,
	_LWTextAreaPeer$ScrollableJTextArea_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWTextAreaPeer"
};

$Object* allocate$LWTextAreaPeer$ScrollableJTextArea($Class* clazz) {
	return $of($alloc(LWTextAreaPeer$ScrollableJTextArea));
}

void LWTextAreaPeer$ScrollableJTextArea::init$($LWTextAreaPeer* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JScrollPane::init$();
	$nc($(getViewport()))->setView($$new($LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, this));
}

$JTextArea* LWTextAreaPeer$ScrollableJTextArea::getView() {
	return $cast($JTextArea, $nc($(getViewport()))->getView());
}

void LWTextAreaPeer$ScrollableJTextArea::setEnabled(bool enabled) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($(getViewport()))->getView()))->setEnabled(enabled);
	$JScrollPane::setEnabled(enabled);
}

LWTextAreaPeer$ScrollableJTextArea::LWTextAreaPeer$ScrollableJTextArea() {
}

$Class* LWTextAreaPeer$ScrollableJTextArea::load$($String* name, bool initialize) {
	$loadClass(LWTextAreaPeer$ScrollableJTextArea, name, initialize, &_LWTextAreaPeer$ScrollableJTextArea_ClassInfo_, allocate$LWTextAreaPeer$ScrollableJTextArea);
	return class$;
}

$Class* LWTextAreaPeer$ScrollableJTextArea::class$ = nullptr;

	} // lwawt
} // sun