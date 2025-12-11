#include <Test7149090$1.h>

#include <Test7149090.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $BorderFactory = ::javax::swing::BorderFactory;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$FieldInfo _Test7149090$1_FieldInfo_[] = {
	{"val$expectedPosition", "I", nullptr, $FINAL | $SYNTHETIC, $field(Test7149090$1, val$expectedPosition)},
	{}
};

$MethodInfo _Test7149090$1_MethodInfo_[] = {
	{"<init>", "(I)V", "()V", 0, $method(static_cast<void(Test7149090$1::*)(int32_t)>(&Test7149090$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test7149090$1_EnclosingMethodInfo_ = {
	"Test7149090",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test7149090$1_InnerClassesInfo_[] = {
	{"Test7149090$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test7149090$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test7149090$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test7149090$1_FieldInfo_,
	_Test7149090$1_MethodInfo_,
	nullptr,
	&_Test7149090$1_EnclosingMethodInfo_,
	_Test7149090$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7149090"
};

$Object* allocate$Test7149090$1($Class* clazz) {
	return $of($alloc(Test7149090$1));
}

void Test7149090$1::init$(int32_t val$expectedPosition) {
	this->val$expectedPosition = val$expectedPosition;
}

void Test7149090$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($List, borders, $new($ArrayList));
	borders->add($($BorderFactory::createTitledBorder($$new($EmptyBorder, 0, 0, 0, 0), "Title"_s)));
	try {
		$load($TitledBorder);
		$var($Method, getPositionMethod, $TitledBorder::class$->getDeclaredMethod("getPosition"_s, $$new($ClassArray, 0)));
		$nc(getPositionMethod)->setAccessible(true);
		{
			$var($Iterator, i$, borders->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($TitledBorder, border, $cast($TitledBorder, i$->next()));
				{
					int32_t position = $nc(($cast($Integer, $(getPositionMethod->invoke(border, $$new($ObjectArray, 0))))))->intValue();
					if (position != this->val$expectedPosition) {
						$throwNew($RuntimeException, "Invalid title position"_s);
					}
				}
			}
		}
	} catch ($NoSuchMethodException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InvocationTargetException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

Test7149090$1::Test7149090$1() {
}

$Class* Test7149090$1::load$($String* name, bool initialize) {
	$loadClass(Test7149090$1, name, initialize, &_Test7149090$1_ClassInfo_, allocate$Test7149090$1);
	return class$;
}

$Class* Test7149090$1::class$ = nullptr;