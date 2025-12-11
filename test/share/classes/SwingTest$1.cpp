#include <SwingTest$1.h>

#include <SwingTest.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SwingTest = ::SwingTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

$FieldInfo _SwingTest$1_FieldInfo_[] = {
	{"this$0", "LSwingTest;", nullptr, $FINAL | $SYNTHETIC, $field(SwingTest$1, this$0)},
	{}
};

$MethodInfo _SwingTest$1_MethodInfo_[] = {
	{"<init>", "(LSwingTest;)V", nullptr, 0, $method(static_cast<void(SwingTest$1::*)($SwingTest*)>(&SwingTest$1::init$))},
	{"compare", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _SwingTest$1_EnclosingMethodInfo_ = {
	"SwingTest",
	"<init>",
	"(Ljava/lang/Class;)V"
};

$InnerClassInfo _SwingTest$1_InnerClassesInfo_[] = {
	{"SwingTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"SwingTest$1",
	"java.lang.Object",
	"java.util.Comparator",
	_SwingTest$1_FieldInfo_,
	_SwingTest$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/reflect/Method;>;",
	&_SwingTest$1_EnclosingMethodInfo_,
	_SwingTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwingTest"
};

$Object* allocate$SwingTest$1($Class* clazz) {
	return $of($alloc(SwingTest$1));
}

void SwingTest$1::init$($SwingTest* this$0) {
	$set(this, this$0, this$0);
}

int32_t SwingTest$1::compare($Method* first, $Method* second) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(first)->getName()))->compareTo($($nc(second)->getName()));
}

int32_t SwingTest$1::compare(Object$* first, Object$* second) {
	return this->compare($cast($Method, first), $cast($Method, second));
}

SwingTest$1::SwingTest$1() {
}

$Class* SwingTest$1::load$($String* name, bool initialize) {
	$loadClass(SwingTest$1, name, initialize, &_SwingTest$1_ClassInfo_, allocate$SwingTest$1);
	return class$;
}

$Class* SwingTest$1::class$ = nullptr;