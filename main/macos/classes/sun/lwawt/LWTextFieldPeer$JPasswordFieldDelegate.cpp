#include <sun/lwawt/LWTextFieldPeer$JPasswordFieldDelegate.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/TextField.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWTextComponentPeer.h>
#include <sun/lwawt/LWTextFieldPeer.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $TextField = ::java::awt::TextField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPasswordField = ::javax::swing::JPasswordField;
using $TransferHandler = ::javax::swing::TransferHandler;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $Document = ::javax::swing::text::Document;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ClientPropertyKeyAccessor = ::sun::awt::AWTAccessor$ClientPropertyKeyAccessor;
using $LWTextComponentPeer = ::sun::lwawt::LWTextComponentPeer;
using $LWTextFieldPeer = ::sun::lwawt::LWTextFieldPeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWTextFieldPeer$JPasswordFieldDelegate_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWTextFieldPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWTextFieldPeer$JPasswordFieldDelegate, this$0)},
	{}
};

$MethodInfo _LWTextFieldPeer$JPasswordFieldDelegate_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWTextFieldPeer;)V", nullptr, $PRIVATE, $method(static_cast<void(LWTextFieldPeer$JPasswordFieldDelegate::*)($LWTextFieldPeer*)>(&LWTextFieldPeer$JPasswordFieldDelegate::init$))},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"hasFocus", "()Z", nullptr, $PUBLIC},
	{"replaceSelection", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWTextFieldPeer$JPasswordFieldDelegate_InnerClassesInfo_[] = {
	{"sun.lwawt.LWTextFieldPeer$JPasswordFieldDelegate", "sun.lwawt.LWTextFieldPeer", "JPasswordFieldDelegate", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWTextFieldPeer$JPasswordFieldDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWTextFieldPeer$JPasswordFieldDelegate",
	"javax.swing.JPasswordField",
	nullptr,
	_LWTextFieldPeer$JPasswordFieldDelegate_FieldInfo_,
	_LWTextFieldPeer$JPasswordFieldDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_LWTextFieldPeer$JPasswordFieldDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWTextFieldPeer"
};

$Object* allocate$LWTextFieldPeer$JPasswordFieldDelegate($Class* clazz) {
	return $of($alloc(LWTextFieldPeer$JPasswordFieldDelegate));
}

void LWTextFieldPeer$JPasswordFieldDelegate::init$($LWTextFieldPeer* this$0) {
	$set(this, this$0, this$0);
	$JPasswordField::init$();
}

void LWTextFieldPeer$JPasswordFieldDelegate::replaceSelection($String* content) {
	$useLocalCurrentObjectStackCache();
	$nc($(getDocument()))->removeDocumentListener(this->this$0);
	$JPasswordField::replaceSelection(content);
	this->this$0->postTextEvent();
	$nc($(getDocument()))->addDocumentListener(this->this$0);
}

bool LWTextFieldPeer$JPasswordFieldDelegate::hasFocus() {
	return $nc(($cast($TextField, $(this->this$0->getTarget()))))->hasFocus();
}

$Point* LWTextFieldPeer$JPasswordFieldDelegate::getLocationOnScreen() {
	return this->this$0->getLocationOnScreen();
}

void LWTextFieldPeer$JPasswordFieldDelegate::setTransferHandler($TransferHandler* newHandler) {
	$useLocalCurrentObjectStackCache();
	$var($Object, key, $nc($($AWTAccessor::getClientPropertyKeyAccessor()))->getJComponent_TRANSFER_HANDLER());
	$var($Object, oldHandler, getClientProperty(key));
	putClientProperty(key, newHandler);
	firePropertyChange("transferHandler"_s, oldHandler, $of(newHandler));
}

LWTextFieldPeer$JPasswordFieldDelegate::LWTextFieldPeer$JPasswordFieldDelegate() {
}

$Class* LWTextFieldPeer$JPasswordFieldDelegate::load$($String* name, bool initialize) {
	$loadClass(LWTextFieldPeer$JPasswordFieldDelegate, name, initialize, &_LWTextFieldPeer$JPasswordFieldDelegate_ClassInfo_, allocate$LWTextFieldPeer$JPasswordFieldDelegate);
	return class$;
}

$Class* LWTextFieldPeer$JPasswordFieldDelegate::class$ = nullptr;

	} // lwawt
} // sun