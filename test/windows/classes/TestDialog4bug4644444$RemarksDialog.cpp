#include <TestDialog4bug4644444$RemarksDialog.h>

#include <TestDialog4bug4644444.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Panel.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextComponent.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $TestDialog4bug4644444 = ::TestDialog4bug4644444;
using $BorderLayout = ::java::awt::BorderLayout;
using $Button = ::java::awt::Button;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Panel = ::java::awt::Panel;
using $TextArea = ::java::awt::TextArea;
using $TextComponent = ::java::awt::TextComponent;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

$FieldInfo _TestDialog4bug4644444$RemarksDialog_FieldInfo_[] = {
	{"this$0", "LTestDialog4bug4644444;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4bug4644444$RemarksDialog, this$0)},
	{"rootPanel", "Ljava/awt/Panel;", nullptr, 0, $field(TestDialog4bug4644444$RemarksDialog, rootPanel)},
	{"remarksPanel", "Ljava/awt/Panel;", nullptr, 0, $field(TestDialog4bug4644444$RemarksDialog, remarksPanel)},
	{"textarea", "Ljava/awt/TextArea;", nullptr, 0, $field(TestDialog4bug4644444$RemarksDialog, textarea)},
	{"addRemarks", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4644444$RemarksDialog, addRemarks)},
	{"cancelRemarks", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4644444$RemarksDialog, cancelRemarks)},
	{}
};

$MethodInfo _TestDialog4bug4644444$RemarksDialog_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(LTestDialog4bug4644444;Ljava/awt/Dialog;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(TestDialog4bug4644444$RemarksDialog::*)($TestDialog4bug4644444*,$Dialog*,$String*,bool)>(&TestDialog4bug4644444$RemarksDialog::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestDialog4bug4644444$RemarksDialog_InnerClassesInfo_[] = {
	{"TestDialog4bug4644444$RemarksDialog", "TestDialog4bug4644444", "RemarksDialog", 0},
	{}
};

$ClassInfo _TestDialog4bug4644444$RemarksDialog_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4bug4644444$RemarksDialog",
	"java.awt.Dialog",
	"java.awt.event.ActionListener",
	_TestDialog4bug4644444$RemarksDialog_FieldInfo_,
	_TestDialog4bug4644444$RemarksDialog_MethodInfo_,
	nullptr,
	nullptr,
	_TestDialog4bug4644444$RemarksDialog_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDialog4bug4644444"
};

$Object* allocate$TestDialog4bug4644444$RemarksDialog($Class* clazz) {
	return $of($alloc(TestDialog4bug4644444$RemarksDialog));
}

$String* TestDialog4bug4644444$RemarksDialog::toString() {
	 return this->$Dialog::toString();
}

int32_t TestDialog4bug4644444$RemarksDialog::hashCode() {
	 return this->$Dialog::hashCode();
}

bool TestDialog4bug4644444$RemarksDialog::equals(Object$* arg0) {
	 return this->$Dialog::equals(arg0);
}

$Object* TestDialog4bug4644444$RemarksDialog::clone() {
	 return this->$Dialog::clone();
}

void TestDialog4bug4644444$RemarksDialog::finalize() {
	this->$Dialog::finalize();
}

void TestDialog4bug4644444$RemarksDialog::init$($TestDialog4bug4644444* this$0, $Dialog* owner, $String* title, bool modal) {
	$set(this, this$0, this$0);
	$Dialog::init$(owner, title, modal);
	$set(this, rootPanel, $new($Panel, $$new($BorderLayout)));
	$set(this, remarksPanel, $new($Panel, $$new($FlowLayout)));
	$set(this, textarea, $new($TextArea, 5, 30));
	$set(this, addRemarks, $new($Button, "Add Remarks"_s));
	$nc(this->addRemarks)->addActionListener(this);
	$set(this, cancelRemarks, $new($Button, "Cancel Remarks"_s));
	$nc(this->cancelRemarks)->addActionListener(this);
	$nc(this->remarksPanel)->add(static_cast<$Component*>(this->addRemarks));
	$nc(this->remarksPanel)->add(static_cast<$Component*>(this->cancelRemarks));
	$nc(this->rootPanel)->add(static_cast<$Component*>(this->textarea), $of("Center"_s));
	$nc(this->rootPanel)->add(static_cast<$Component*>(this->remarksPanel), $of("South"_s));
	add(static_cast<$Component*>(this->rootPanel));
	setBounds(150, 150, 400, 200);
	setVisible(true);
}

void TestDialog4bug4644444$RemarksDialog::actionPerformed($ActionEvent* ae) {
	$set(this->this$0, remarksMessage, nullptr);
	if ($equals($nc(ae)->getSource(), this->addRemarks)) {
		$var($String, msg, $nc($($nc(this->textarea)->getText()))->trim());
		if (msg->length() > 0) {
			$set(this->this$0, remarksMessage, msg);
		}
	}
	dispose();
}

TestDialog4bug4644444$RemarksDialog::TestDialog4bug4644444$RemarksDialog() {
}

$Class* TestDialog4bug4644444$RemarksDialog::load$($String* name, bool initialize) {
	$loadClass(TestDialog4bug4644444$RemarksDialog, name, initialize, &_TestDialog4bug4644444$RemarksDialog_ClassInfo_, allocate$TestDialog4bug4644444$RemarksDialog);
	return class$;
}

$Class* TestDialog4bug4644444$RemarksDialog::class$ = nullptr;