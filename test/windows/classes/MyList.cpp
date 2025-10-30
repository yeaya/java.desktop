#include <MyList.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;

$MethodInfo _MyList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MyList::*)()>(&MyList::init$))},
	{"locationToIndex", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MyList_ClassInfo_ = {
	$ACC_SUPER,
	"MyList",
	"javax.swing.JList",
	nullptr,
	nullptr,
	_MyList_MethodInfo_
};

$Object* allocate$MyList($Class* clazz) {
	return $of($alloc(MyList));
}

void MyList::init$() {
	$JList::init$();
}

int32_t MyList::locationToIndex($Point* location) {
	int32_t n = $JList::locationToIndex(location);
	$var($Rectangle, q, getCellBounds(n, n));
	return q != nullptr && q->contains(location) ? n : -1;
}

MyList::MyList() {
}

$Class* MyList::load$($String* name, bool initialize) {
	$loadClass(MyList, name, initialize, &_MyList_ClassInfo_, allocate$MyList);
	return class$;
}

$Class* MyList::class$ = nullptr;