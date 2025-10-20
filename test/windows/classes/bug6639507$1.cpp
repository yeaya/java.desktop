#include <bug6639507$1.h>

#include <bug6639507.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

#undef APPLICATION_MODAL

using $bug6639507 = ::bug6639507;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JDialog = ::javax::swing::JDialog;

$MethodInfo _bug6639507$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6639507$1::*)()>(&bug6639507$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6639507$1_EnclosingMethodInfo_ = {
	"bug6639507",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6639507$1_InnerClassesInfo_[] = {
	{"bug6639507$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6639507$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6639507$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6639507$1_MethodInfo_,
	nullptr,
	&_bug6639507$1_EnclosingMethodInfo_,
	_bug6639507$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6639507"
};

$Object* allocate$bug6639507$1($Class* clazz) {
	return $of($alloc(bug6639507$1));
}

void bug6639507$1::init$() {
}

void bug6639507$1::run() {
	$useLocalCurrentObjectStackCache();
	$bug6639507::assertEmptyTitle($$new($Dialog, ($Frame*)nullptr), "new Dialog((Frame) null)"_s);
	$bug6639507::assertEmptyTitle($$new($Dialog, ($Frame*)nullptr, true), "new Dialog((Frame) null, true)"_s);
	$bug6639507::assertEmptyTitle($$new($Dialog, ($Dialog*)nullptr), "new Dialog((Dialog) null)"_s);
	$bug6639507::assertEmptyTitle($$new($Dialog, ($Window*)nullptr), "new Dialog((Window) null)"_s);
	$init($Dialog$ModalityType);
	$bug6639507::assertEmptyTitle($$new($Dialog, static_cast<$Window*>($$new($Dialog, ($Window*)nullptr)), $Dialog$ModalityType::APPLICATION_MODAL), "new Dialog((Window) null), Dialog.ModalityType.APPLICATION_MODAL"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Frame*)nullptr), "new JDialog((Frame) null)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Frame*)nullptr, true), "new JDialog((Frame) null, true)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Dialog*)nullptr), "new JDialog((Dialog) null)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Dialog*)nullptr, true), "new JDialog((Dialog) null, true)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Window*)nullptr), "new JDialog((Window) null)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Window*)nullptr, $Dialog$ModalityType::APPLICATION_MODAL), "new JDialog((Window) null, Dialog.ModalityType.APPLICATION_MODAL)"_s);
}

bug6639507$1::bug6639507$1() {
}

$Class* bug6639507$1::load$($String* name, bool initialize) {
	$loadClass(bug6639507$1, name, initialize, &_bug6639507$1_ClassInfo_, allocate$bug6639507$1);
	return class$;
}

$Class* bug6639507$1::class$ = nullptr;