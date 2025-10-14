#include <bug8065098.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;

$MethodInfo _bug8065098_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8065098::*)()>(&bug8065098::init$))},
	{}
};

$ClassInfo _bug8065098_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8065098",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug8065098_MethodInfo_
};

$Object* allocate$bug8065098($Class* clazz) {
	return $of($alloc(bug8065098));
}

void bug8065098::init$() {
	$JApplet::init$();
}

bug8065098::bug8065098() {
}

$Class* bug8065098::load$($String* name, bool initialize) {
	$loadClass(bug8065098, name, initialize, &_bug8065098_ClassInfo_, allocate$bug8065098);
	return class$;
}

$Class* bug8065098::class$ = nullptr;