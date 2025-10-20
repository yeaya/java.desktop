#include <bug8058120$3.h>

#include <bug8058120.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

#undef IMPLIED

using $bug8058120 = ::bug8058120;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Element = ::javax::swing::text::Element;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;

$MethodInfo _bug8058120$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8058120$3::*)()>(&bug8058120$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8058120$3_EnclosingMethodInfo_ = {
	"bug8058120",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8058120$3_InnerClassesInfo_[] = {
	{"bug8058120$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8058120$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug8058120$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8058120$3_MethodInfo_,
	nullptr,
	&_bug8058120$3_EnclosingMethodInfo_,
	_bug8058120$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8058120"
};

$Object* allocate$bug8058120$3($Class* clazz) {
	return $of($alloc(bug8058120$3));
}

void bug8058120$3::init$() {
}

void bug8058120$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug8058120);
	$var($Element, parent, $nc($($nc($bug8058120::document)->getElement("ab"_s)))->getParentElement());
	int32_t count = $nc(parent)->getElementCount();
	if (count != 2) {
		$throwNew($RuntimeException, $$str({"Test Failed! Unexpected Element count = "_s, $$str(count)}));
	}
	$var($Element, insertedElement, parent->getElement(count - 1));
	$init($HTML$Tag);
	if (!$nc($($nc($HTML$Tag::IMPLIED)->toString()))->equals($($nc(insertedElement)->getName()))) {
		$throwNew($RuntimeException, $$str({"Test Failed! Inserted text is not wrapped by "_s, $HTML$Tag::IMPLIED, " tag"_s}));
	}
}

bug8058120$3::bug8058120$3() {
}

$Class* bug8058120$3::load$($String* name, bool initialize) {
	$loadClass(bug8058120$3, name, initialize, &_bug8058120$3_ClassInfo_, allocate$bug8058120$3);
	return class$;
}

$Class* bug8058120$3::class$ = nullptr;