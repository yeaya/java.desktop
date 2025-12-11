#include <TitledBorderLabel$1.h>

#include <TitledBorderLabel.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $TitledBorderLabel = ::TitledBorderLabel;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;

$FieldInfo _TitledBorderLabel$1_FieldInfo_[] = {
	{"val$dialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(TitledBorderLabel$1, val$dialog)},
	{}
};

$MethodInfo _TitledBorderLabel$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, 0, $method(static_cast<void(TitledBorderLabel$1::*)($JDialog*)>(&TitledBorderLabel$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TitledBorderLabel$1_EnclosingMethodInfo_ = {
	"TitledBorderLabel",
	"createAndShowTestDialog",
	"()V"
};

$InnerClassInfo _TitledBorderLabel$1_InnerClassesInfo_[] = {
	{"TitledBorderLabel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TitledBorderLabel$1_ClassInfo_ = {
	$ACC_SUPER,
	"TitledBorderLabel$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_TitledBorderLabel$1_FieldInfo_,
	_TitledBorderLabel$1_MethodInfo_,
	nullptr,
	&_TitledBorderLabel$1_EnclosingMethodInfo_,
	_TitledBorderLabel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TitledBorderLabel"
};

$Object* allocate$TitledBorderLabel$1($Class* clazz) {
	return $of($alloc(TitledBorderLabel$1));
}

void TitledBorderLabel$1::init$($JDialog* val$dialog) {
	$set(this, val$dialog, val$dialog);
	$WindowAdapter::init$();
}

void TitledBorderLabel$1::windowClosing($WindowEvent* e) {
	$nc(this->val$dialog)->dispose();
	$TitledBorderLabel::fail("Main dialog was closed."_s);
}

TitledBorderLabel$1::TitledBorderLabel$1() {
}

$Class* TitledBorderLabel$1::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabel$1, name, initialize, &_TitledBorderLabel$1_ClassInfo_, allocate$TitledBorderLabel$1);
	return class$;
}

$Class* TitledBorderLabel$1::class$ = nullptr;