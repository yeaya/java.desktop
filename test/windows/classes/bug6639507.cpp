#include <bug6639507.h>

#include <bug6639507$1.h>
#include <java/awt/Dialog.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6639507$1 = ::bug6639507$1;
using $Dialog = ::java::awt::Dialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6639507_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6639507::*)()>(&bug6639507::init$))},
	{"assertEmptyTitle", "(Ljava/awt/Dialog;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Dialog*,$String*)>(&bug6639507::assertEmptyTitle))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6639507::main))},
	{}
};

$InnerClassInfo _bug6639507_InnerClassesInfo_[] = {
	{"bug6639507$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6639507_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6639507",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6639507_MethodInfo_,
	nullptr,
	nullptr,
	_bug6639507_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6639507$1"
};

$Object* allocate$bug6639507($Class* clazz) {
	return $of($alloc(bug6639507));
}

void bug6639507::init$() {
}

void bug6639507::main($StringArray* args) {
	$SwingUtilities::invokeLater($$new($bug6639507$1));
}

void bug6639507::assertEmptyTitle($Dialog* dialog, $String* ctr) {
	$var($String, title, $nc(dialog)->getTitle());
	if (title == nullptr || $nc(title)->length() > 0) {
		$throwNew($RuntimeException, $$str({"Title is not empty for constructor "_s, ctr}));
	}
}

bug6639507::bug6639507() {
}

$Class* bug6639507::load$($String* name, bool initialize) {
	$loadClass(bug6639507, name, initialize, &_bug6639507_ClassInfo_, allocate$bug6639507);
	return class$;
}

$Class* bug6639507::class$ = nullptr;