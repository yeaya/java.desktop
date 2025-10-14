#include <bug6278700.h>

#include <bug6278700$1.h>
#include <bug6278700$2.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $bug6278700$1 = ::bug6278700$1;
using $bug6278700$2 = ::bug6278700$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeListener = ::javax::swing::event::ChangeListener;

$FieldInfo _bug6278700_FieldInfo_[] = {
	{"changeCount", "I", nullptr, $PRIVATE, $field(bug6278700, changeCount)},
	{"listener", "Ljavax/swing/event/ChangeListener;", nullptr, $PRIVATE | $FINAL, $field(bug6278700, listener)},
	{}
};

$MethodInfo _bug6278700_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6278700::*)()>(&bug6278700::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6278700::main))},
	{}
};

$InnerClassInfo _bug6278700_InnerClassesInfo_[] = {
	{"bug6278700$2", nullptr, nullptr, 0},
	{"bug6278700$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6278700_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6278700",
	"java.lang.Object",
	nullptr,
	_bug6278700_FieldInfo_,
	_bug6278700_MethodInfo_,
	nullptr,
	nullptr,
	_bug6278700_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6278700$2,bug6278700$1"
};

$Object* allocate$bug6278700($Class* clazz) {
	return $of($alloc(bug6278700));
}

void bug6278700::main($StringArray* args) {
	$new(bug6278700);
}

void bug6278700::init$() {
	$set(this, listener, $new($bug6278700$1, this));
	$SwingUtilities::invokeLater($$new($bug6278700$2, this));
}

bug6278700::bug6278700() {
}

$Class* bug6278700::load$($String* name, bool initialize) {
	$loadClass(bug6278700, name, initialize, &_bug6278700_ClassInfo_, allocate$bug6278700);
	return class$;
}

$Class* bug6278700::class$ = nullptr;