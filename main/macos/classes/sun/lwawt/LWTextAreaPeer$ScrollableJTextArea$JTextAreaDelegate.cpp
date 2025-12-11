#include <sun/lwawt/LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/TextArea.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWTextAreaPeer$ScrollableJTextArea.h>
#include <sun/lwawt/LWTextAreaPeer.h>
#include <sun/lwawt/LWTextComponentPeer.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $TextArea = ::java::awt::TextArea;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextArea = ::javax::swing::JTextArea;
using $TransferHandler = ::javax::swing::TransferHandler;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $Document = ::javax::swing::text::Document;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ClientPropertyKeyAccessor = ::sun::awt::AWTAccessor$ClientPropertyKeyAccessor;
using $LWTextAreaPeer = ::sun::lwawt::LWTextAreaPeer;
using $LWTextAreaPeer$ScrollableJTextArea = ::sun::lwawt::LWTextAreaPeer$ScrollableJTextArea;
using $LWTextComponentPeer = ::sun::lwawt::LWTextComponentPeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_FieldInfo_[] = {
	{"this$1", "Lsun/lwawt/LWTextAreaPeer$ScrollableJTextArea;", nullptr, $FINAL | $SYNTHETIC, $field(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, this$1)},
	{}
};

$MethodInfo _LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWTextAreaPeer$ScrollableJTextArea;)V", nullptr, $PRIVATE, $method(static_cast<void(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::*)($LWTextAreaPeer$ScrollableJTextArea*)>(&LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::init$))},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"hasFocus", "()Z", nullptr, $PUBLIC},
	{"replaceSelection", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_InnerClassesInfo_[] = {
	{"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea", "sun.lwawt.LWTextAreaPeer", "ScrollableJTextArea", $FINAL},
	{"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate", "sun.lwawt.LWTextAreaPeer$ScrollableJTextArea", "JTextAreaDelegate", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate",
	"javax.swing.JTextArea",
	nullptr,
	_LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_FieldInfo_,
	_LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWTextAreaPeer"
};

$Object* allocate$LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate($Class* clazz) {
	return $of($alloc(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate));
}

void LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::init$($LWTextAreaPeer$ScrollableJTextArea* this$1) {
	$set(this, this$1, this$1);
	$JTextArea::init$();
}

void LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::replaceSelection($String* content) {
	$useLocalCurrentObjectStackCache();
	$nc($(getDocument()))->removeDocumentListener(this->this$1->this$0);
	$JTextArea::replaceSelection(content);
	$nc(this->this$1->this$0)->postTextEvent();
	$nc($(getDocument()))->addDocumentListener(this->this$1->this$0);
}

bool LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::hasFocus() {
	return $nc(($cast($TextArea, $($nc(this->this$1->this$0)->getTarget()))))->hasFocus();
}

$Point* LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::getLocationOnScreen() {
	return $nc(this->this$1->this$0)->getLocationOnScreen();
}

void LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::setTransferHandler($TransferHandler* newHandler) {
	$useLocalCurrentObjectStackCache();
	$var($Object, key, $nc($($AWTAccessor::getClientPropertyKeyAccessor()))->getJComponent_TRANSFER_HANDLER());
	$var($Object, oldHandler, getClientProperty(key));
	putClientProperty(key, newHandler);
	firePropertyChange("transferHandler"_s, oldHandler, $of(newHandler));
}

LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate() {
}

$Class* LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::load$($String* name, bool initialize) {
	$loadClass(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, name, initialize, &_LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_ClassInfo_, allocate$LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate);
	return class$;
}

$Class* LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::class$ = nullptr;

	} // lwawt
} // sun