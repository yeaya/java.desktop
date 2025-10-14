#include <sun/print/ServiceDialog$IconRadioButton$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <sun/print/ServiceDialog$IconRadioButton.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $ServiceDialog$IconRadioButton = ::sun::print::ServiceDialog$IconRadioButton;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$IconRadioButton$1_FieldInfo_[] = {
	{"this$1", "Lsun/print/ServiceDialog$IconRadioButton;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$IconRadioButton$1, this$1)},
	{"val$imgURL", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$IconRadioButton$1, val$imgURL)},
	{"val$this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$IconRadioButton$1, val$this$0)},
	{}
};

$MethodInfo _ServiceDialog$IconRadioButton$1_MethodInfo_[] = {
	{"<init>", "(Lsun/print/ServiceDialog$IconRadioButton;Lsun/print/ServiceDialog;Ljava/net/URL;)V", "()V", 0, $method(static_cast<void(ServiceDialog$IconRadioButton$1::*)($ServiceDialog$IconRadioButton*,$ServiceDialog*,$URL*)>(&ServiceDialog$IconRadioButton$1::init$))},
	{"run", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServiceDialog$IconRadioButton$1_EnclosingMethodInfo_ = {
	"sun.print.ServiceDialog$IconRadioButton",
	"<init>",
	"(Lsun/print/ServiceDialog;Ljava/lang/String;Ljava/lang/String;ZLjavax/swing/ButtonGroup;Ljava/awt/event/ActionListener;)V"
};

$InnerClassInfo _ServiceDialog$IconRadioButton$1_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$IconRadioButton", "sun.print.ServiceDialog", "IconRadioButton", $PRIVATE},
	{"sun.print.ServiceDialog$IconRadioButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceDialog$IconRadioButton$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$IconRadioButton$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ServiceDialog$IconRadioButton$1_FieldInfo_,
	_ServiceDialog$IconRadioButton$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/swing/Icon;>;",
	&_ServiceDialog$IconRadioButton$1_EnclosingMethodInfo_,
	_ServiceDialog$IconRadioButton$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$IconRadioButton$1($Class* clazz) {
	return $of($alloc(ServiceDialog$IconRadioButton$1));
}

void ServiceDialog$IconRadioButton$1::init$($ServiceDialog$IconRadioButton* this$1, $ServiceDialog* val$this$0, $URL* val$imgURL) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$set(this, val$imgURL, val$imgURL);
}

$Object* ServiceDialog$IconRadioButton$1::run() {
	$var($Icon, icon, $new($ImageIcon, this->val$imgURL));
	return $of(icon);
}

ServiceDialog$IconRadioButton$1::ServiceDialog$IconRadioButton$1() {
}

$Class* ServiceDialog$IconRadioButton$1::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$IconRadioButton$1, name, initialize, &_ServiceDialog$IconRadioButton$1_ClassInfo_, allocate$ServiceDialog$IconRadioButton$1);
	return class$;
}

$Class* ServiceDialog$IconRadioButton$1::class$ = nullptr;

	} // print
} // sun