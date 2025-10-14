#include <bug8038113.h>

#include <bug8038113$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug8038113$1 = ::bug8038113$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JApplet = ::javax::swing::JApplet;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug8038113_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8038113::*)()>(&bug8038113::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8038113_InnerClassesInfo_[] = {
	{"bug8038113$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8038113_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8038113",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug8038113_MethodInfo_,
	nullptr,
	nullptr,
	_bug8038113_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8038113$1,bug8038113$1$1"
};

$Object* allocate$bug8038113($Class* clazz) {
	return $of($alloc(bug8038113));
}

void bug8038113::init$() {
	$JApplet::init$();
}

void bug8038113::init() {
	$SwingUtilities::invokeLater($$new($bug8038113$1, this));
}

bug8038113::bug8038113() {
}

$Class* bug8038113::load$($String* name, bool initialize) {
	$loadClass(bug8038113, name, initialize, &_bug8038113_ClassInfo_, allocate$bug8038113);
	return class$;
}

$Class* bug8038113::class$ = nullptr;