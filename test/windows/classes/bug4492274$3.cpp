#include <bug4492274$3.h>

#include <bug4492274.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $bug4492274 = ::bug4492274;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;

$FieldInfo _bug4492274$3_FieldInfo_[] = {
	{"val$result", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug4492274$3, val$result)},
	{}
};

$MethodInfo _bug4492274$3_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(bug4492274$3::*)($StringArray*)>(&bug4492274$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4492274$3_EnclosingMethodInfo_ = {
	"bug4492274",
	"getPageAnchor",
	"()Ljava/lang/String;"
};

$InnerClassInfo _bug4492274$3_InnerClassesInfo_[] = {
	{"bug4492274$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4492274$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4492274$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4492274$3_FieldInfo_,
	_bug4492274$3_MethodInfo_,
	nullptr,
	&_bug4492274$3_EnclosingMethodInfo_,
	_bug4492274$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4492274"
};

$Object* allocate$bug4492274$3($Class* clazz) {
	return $of($alloc(bug4492274$3));
}

void bug4492274$3::init$($StringArray* val$result) {
	$set(this, val$result, val$result);
}

void bug4492274$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug4492274);
	$nc(this->val$result)->set(0, $($nc($($nc($bug4492274::jep)->getPage()))->getRef()));
}

bug4492274$3::bug4492274$3() {
}

$Class* bug4492274$3::load$($String* name, bool initialize) {
	$loadClass(bug4492274$3, name, initialize, &_bug4492274$3_ClassInfo_, allocate$bug4492274$3);
	return class$;
}

$Class* bug4492274$3::class$ = nullptr;