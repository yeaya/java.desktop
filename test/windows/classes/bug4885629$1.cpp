#include <bug4885629$1.h>

#include <bug4885629.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

using $bug4885629 = ::bug4885629;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

$MethodInfo _bug4885629$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4885629$1::*)()>(&bug4885629$1::init$))},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4885629$1_EnclosingMethodInfo_ = {
	"bug4885629",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4885629$1_InnerClassesInfo_[] = {
	{"bug4885629$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4885629$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4885629$1",
	"javax.swing.plaf.basic.BasicLookAndFeel",
	nullptr,
	nullptr,
	_bug4885629$1_MethodInfo_,
	nullptr,
	&_bug4885629$1_EnclosingMethodInfo_,
	_bug4885629$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4885629"
};

$Object* allocate$bug4885629$1($Class* clazz) {
	return $of($alloc(bug4885629$1));
}

void bug4885629$1::init$() {
	$BasicLookAndFeel::init$();
}

bool bug4885629$1::isSupportedLookAndFeel() {
	return true;
}

bool bug4885629$1::isNativeLookAndFeel() {
	return false;
}

$String* bug4885629$1::getDescription() {
	return "Foo"_s;
}

$String* bug4885629$1::getID() {
	return "FooID"_s;
}

$String* bug4885629$1::getName() {
	return "FooName"_s;
}

bug4885629$1::bug4885629$1() {
}

$Class* bug4885629$1::load$($String* name, bool initialize) {
	$loadClass(bug4885629$1, name, initialize, &_bug4885629$1_ClassInfo_, allocate$bug4885629$1);
	return class$;
}

$Class* bug4885629$1::class$ = nullptr;