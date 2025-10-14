#include <bug7142955.h>

#include <bug7142955$1.h>
#include <java/awt/Color.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
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
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef FALSE
#undef RED
#undef TEST_COLOR

using $bug7142955$1 = ::bug7142955$1;
using $Color = ::java::awt::Color;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _bug7142955_FieldInfo_[] = {
	{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7142955, TEST_COLOR)},
	{}
};

$MethodInfo _bug7142955_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7142955::*)()>(&bug7142955::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7142955::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7142955_InnerClassesInfo_[] = {
	{"bug7142955$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7142955_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7142955",
	"java.lang.Object",
	nullptr,
	_bug7142955_FieldInfo_,
	_bug7142955_MethodInfo_,
	nullptr,
	nullptr,
	_bug7142955_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7142955$1"
};

$Object* allocate$bug7142955($Class* clazz) {
	return $of($alloc(bug7142955));
}

$Color* bug7142955::TEST_COLOR = nullptr;

void bug7142955::init$() {
}

void bug7142955::main($StringArray* args) {
	$init(bug7142955);
	$init($Boolean);
	$UIManager::put("Tree.rendererFillBackground"_s, $Boolean::FALSE);
	$UIManager::put("Tree.textBackground"_s, bug7142955::TEST_COLOR);
	$SwingUtilities::invokeAndWait($$new($bug7142955$1));
}

void clinit$bug7142955($Class* class$) {
	$init($Color);
	$assignStatic(bug7142955::TEST_COLOR, $Color::RED);
}

bug7142955::bug7142955() {
}

$Class* bug7142955::load$($String* name, bool initialize) {
	$loadClass(bug7142955, name, initialize, &_bug7142955_ClassInfo_, clinit$bug7142955, allocate$bug7142955);
	return class$;
}

$Class* bug7142955::class$ = nullptr;