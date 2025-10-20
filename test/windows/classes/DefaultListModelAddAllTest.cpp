#include <DefaultListModelAddAllTest.h>

#include <DefaultListModelAddAllTest$MyListDataListener.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/TreeSet.h>
#include <java/util/Vector.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/ObjIntConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/IntStream.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/event/ListDataListener.h>
#include <jcpp.h>

#undef END
#undef START

using $DefaultListModelAddAllTest$MyListDataListener = ::DefaultListModelAddAllTest$MyListDataListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $TreeSet = ::java::util::TreeSet;
using $Vector = ::java::util::Vector;
using $BiConsumer = ::java::util::function::BiConsumer;
using $ObjIntConsumer = ::java::util::function::ObjIntConsumer;
using $Supplier = ::java::util::function::Supplier;
using $IntStream = ::java::util::stream::IntStream;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $ListDataListener = ::javax::swing::event::ListDataListener;

class DefaultListModelAddAllTest$$Lambda$Vector : public $Supplier {
	$class(DefaultListModelAddAllTest$$Lambda$Vector, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($Vector));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultListModelAddAllTest$$Lambda$Vector>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultListModelAddAllTest$$Lambda$Vector::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest$$Lambda$Vector::*)()>(&DefaultListModelAddAllTest$$Lambda$Vector::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultListModelAddAllTest$$Lambda$Vector::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultListModelAddAllTest$$Lambda$Vector",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* DefaultListModelAddAllTest$$Lambda$Vector::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$$Lambda$Vector, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$Vector::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$add$1 : public $ObjIntConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$add$1, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($Vector, inst$)->add($$of(arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultListModelAddAllTest$$Lambda$add$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultListModelAddAllTest$$Lambda$add$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest$$Lambda$add$1::*)()>(&DefaultListModelAddAllTest$$Lambda$add$1::init$))},
	{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultListModelAddAllTest$$Lambda$add$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultListModelAddAllTest$$Lambda$add$1",
	"java.lang.Object",
	"java.util.function.ObjIntConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultListModelAddAllTest$$Lambda$add$1::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$$Lambda$add$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$add$1::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$addAll$2 : public $BiConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$addAll$2, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($Vector, inst$)->addAll($cast($Collection, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultListModelAddAllTest$$Lambda$addAll$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultListModelAddAllTest$$Lambda$addAll$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest$$Lambda$addAll$2::*)()>(&DefaultListModelAddAllTest$$Lambda$addAll$2::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultListModelAddAllTest$$Lambda$addAll$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultListModelAddAllTest$$Lambda$addAll$2",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultListModelAddAllTest$$Lambda$addAll$2::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$$Lambda$addAll$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$addAll$2::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$TreeSet$3 : public $Supplier {
	$class(DefaultListModelAddAllTest$$Lambda$TreeSet$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($TreeSet));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultListModelAddAllTest$$Lambda$TreeSet$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultListModelAddAllTest$$Lambda$TreeSet$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest$$Lambda$TreeSet$3::*)()>(&DefaultListModelAddAllTest$$Lambda$TreeSet$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultListModelAddAllTest$$Lambda$TreeSet$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultListModelAddAllTest$$Lambda$TreeSet$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* DefaultListModelAddAllTest$$Lambda$TreeSet$3::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$$Lambda$TreeSet$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$TreeSet$3::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$add$4 : public $ObjIntConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$add$4, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($TreeSet, inst$)->add($$of(arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultListModelAddAllTest$$Lambda$add$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultListModelAddAllTest$$Lambda$add$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest$$Lambda$add$4::*)()>(&DefaultListModelAddAllTest$$Lambda$add$4::init$))},
	{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultListModelAddAllTest$$Lambda$add$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultListModelAddAllTest$$Lambda$add$4",
	"java.lang.Object",
	"java.util.function.ObjIntConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultListModelAddAllTest$$Lambda$add$4::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$$Lambda$add$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$add$4::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$addAll$5 : public $BiConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$addAll$5, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($TreeSet, inst$)->addAll($cast($Collection, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultListModelAddAllTest$$Lambda$addAll$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultListModelAddAllTest$$Lambda$addAll$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest$$Lambda$addAll$5::*)()>(&DefaultListModelAddAllTest$$Lambda$addAll$5::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultListModelAddAllTest$$Lambda$addAll$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultListModelAddAllTest$$Lambda$addAll$5",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultListModelAddAllTest$$Lambda$addAll$5::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$$Lambda$addAll$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$addAll$5::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$ArrayList$6 : public $Supplier {
	$class(DefaultListModelAddAllTest$$Lambda$ArrayList$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($ArrayList));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultListModelAddAllTest$$Lambda$ArrayList$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultListModelAddAllTest$$Lambda$ArrayList$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest$$Lambda$ArrayList$6::*)()>(&DefaultListModelAddAllTest$$Lambda$ArrayList$6::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultListModelAddAllTest$$Lambda$ArrayList$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultListModelAddAllTest$$Lambda$ArrayList$6",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* DefaultListModelAddAllTest$$Lambda$ArrayList$6::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$$Lambda$ArrayList$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$ArrayList$6::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$add$7 : public $ObjIntConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$add$7, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($ArrayList, inst$)->add($$of(arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultListModelAddAllTest$$Lambda$add$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultListModelAddAllTest$$Lambda$add$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest$$Lambda$add$7::*)()>(&DefaultListModelAddAllTest$$Lambda$add$7::init$))},
	{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultListModelAddAllTest$$Lambda$add$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultListModelAddAllTest$$Lambda$add$7",
	"java.lang.Object",
	"java.util.function.ObjIntConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultListModelAddAllTest$$Lambda$add$7::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$$Lambda$add$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$add$7::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$addAll$8 : public $BiConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$addAll$8, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($ArrayList, inst$)->addAll($cast($Collection, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultListModelAddAllTest$$Lambda$addAll$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultListModelAddAllTest$$Lambda$addAll$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest$$Lambda$addAll$8::*)()>(&DefaultListModelAddAllTest$$Lambda$addAll$8::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultListModelAddAllTest$$Lambda$addAll$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultListModelAddAllTest$$Lambda$addAll$8",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultListModelAddAllTest$$Lambda$addAll$8::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$$Lambda$addAll$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$addAll$8::class$ = nullptr;

$FieldInfo _DefaultListModelAddAllTest_FieldInfo_[] = {
	{"START", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultListModelAddAllTest, START)},
	{"END", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultListModelAddAllTest, END)},
	{"vector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultListModelAddAllTest, vector)},
	{"set", "Ljava/util/TreeSet;", "Ljava/util/TreeSet<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultListModelAddAllTest, set)},
	{"arrayList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultListModelAddAllTest, arrayList)},
	{}
};

$MethodInfo _DefaultListModelAddAllTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModelAddAllTest::*)()>(&DefaultListModelAddAllTest::init$))},
	{"checkAddAll", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DefaultListModelAddAllTest::checkAddAll))},
	{"checkAddAllWithIndex", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DefaultListModelAddAllTest::checkAddAllWithIndex))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DefaultListModelAddAllTest::main))},
	{}
};

$InnerClassInfo _DefaultListModelAddAllTest_InnerClassesInfo_[] = {
	{"DefaultListModelAddAllTest$MyListDataListener", "DefaultListModelAddAllTest", "MyListDataListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultListModelAddAllTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DefaultListModelAddAllTest",
	"java.lang.Object",
	nullptr,
	_DefaultListModelAddAllTest_FieldInfo_,
	_DefaultListModelAddAllTest_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultListModelAddAllTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DefaultListModelAddAllTest$MyListDataListener"
};

$Object* allocate$DefaultListModelAddAllTest($Class* clazz) {
	return $of($alloc(DefaultListModelAddAllTest));
}

$Vector* DefaultListModelAddAllTest::vector = nullptr;
$TreeSet* DefaultListModelAddAllTest::set = nullptr;
$ArrayList* DefaultListModelAddAllTest::arrayList = nullptr;

void DefaultListModelAddAllTest::init$() {
}

void DefaultListModelAddAllTest::main($StringArray* args) {
	$init(DefaultListModelAddAllTest);
	checkAddAll();
	checkAddAllWithIndex();
	$init($System);
	$nc($System::out)->println("Test case passed."_s);
}

void DefaultListModelAddAllTest::checkAddAll() {
	$init(DefaultListModelAddAllTest);
	$useLocalCurrentObjectStackCache();
	$var($DefaultListModel, lm, $new($DefaultListModel));
	lm->addListDataListener($$new($DefaultListModelAddAllTest$MyListDataListener));
	try {
		lm->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(DefaultListModelAddAllTest::arrayList))));
		$init($System);
		$nc($System::out)->println($$str({"Successfully added "_s, $$str((DefaultListModelAddAllTest::END - DefaultListModelAddAllTest::START)), "elements."_s}));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, $$str({"Test case failed. "_s, $(e->getMessage())}));
	}
}

void DefaultListModelAddAllTest::checkAddAllWithIndex() {
	$init(DefaultListModelAddAllTest);
	$useLocalCurrentObjectStackCache();
	$var($DefaultListModel, lm, $new($DefaultListModel));
	lm->addListDataListener($$new($DefaultListModelAddAllTest$MyListDataListener));
	lm->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(DefaultListModelAddAllTest::set))));
	try {
		lm->addAll(DefaultListModelAddAllTest::START - 1, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(DefaultListModelAddAllTest::vector))));
		$throwNew($RuntimeException, "Test case failed. Expected failure not reported."_s);
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		$init($System);
		$nc($System::out)->println("Encountered exception as expected, when trying to add elementsbefore the start of the list."_s);
	}
	try {
		lm->addAll(15, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(DefaultListModelAddAllTest::vector))));
		$init($System);
		$nc($System::out)->println("Successfully added elements at a particular index"_s);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, $$str({"Unexpected failure: "_s, $(e->getMessage())}));
	}
	try {
		lm->addAll(lm->getSize() + 1, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(DefaultListModelAddAllTest::vector))));
		$throwNew($RuntimeException, "Test case failed. Expected failure not reported."_s);
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		$init($System);
		$nc($System::out)->println("Encountered exception as expected, when trying to add elementsafter the end of the list."_s);
	}
}

void clinit$DefaultListModelAddAllTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$var($Supplier, var$0, static_cast<$Supplier*>($new(DefaultListModelAddAllTest$$Lambda$Vector)));
	$var($ObjIntConsumer, var$1, static_cast<$ObjIntConsumer*>($new(DefaultListModelAddAllTest$$Lambda$add$1)));
	$assignStatic(DefaultListModelAddAllTest::vector, $cast($Vector, $nc($($IntStream::range(DefaultListModelAddAllTest::START, DefaultListModelAddAllTest::END)))->collect(var$0, var$1, static_cast<$BiConsumer*>($$new(DefaultListModelAddAllTest$$Lambda$addAll$2)))));
	$var($Supplier, var$2, static_cast<$Supplier*>($new(DefaultListModelAddAllTest$$Lambda$TreeSet$3)));
	$var($ObjIntConsumer, var$3, static_cast<$ObjIntConsumer*>($new(DefaultListModelAddAllTest$$Lambda$add$4)));
	$assignStatic(DefaultListModelAddAllTest::set, $cast($TreeSet, $nc($($IntStream::range(DefaultListModelAddAllTest::START, DefaultListModelAddAllTest::END)))->collect(var$2, var$3, static_cast<$BiConsumer*>($$new(DefaultListModelAddAllTest$$Lambda$addAll$5)))));
	$var($Supplier, var$4, static_cast<$Supplier*>($new(DefaultListModelAddAllTest$$Lambda$ArrayList$6)));
	$var($ObjIntConsumer, var$5, static_cast<$ObjIntConsumer*>($new(DefaultListModelAddAllTest$$Lambda$add$7)));
	$assignStatic(DefaultListModelAddAllTest::arrayList, $cast($ArrayList, $nc($($IntStream::range(DefaultListModelAddAllTest::START, DefaultListModelAddAllTest::END)))->collect(var$4, var$5, static_cast<$BiConsumer*>($$new(DefaultListModelAddAllTest$$Lambda$addAll$8)))));
}

DefaultListModelAddAllTest::DefaultListModelAddAllTest() {
}

$Class* DefaultListModelAddAllTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DefaultListModelAddAllTest$$Lambda$Vector::classInfo$.name)) {
			return DefaultListModelAddAllTest$$Lambda$Vector::load$(name, initialize);
		}
		if (name->equals(DefaultListModelAddAllTest$$Lambda$add$1::classInfo$.name)) {
			return DefaultListModelAddAllTest$$Lambda$add$1::load$(name, initialize);
		}
		if (name->equals(DefaultListModelAddAllTest$$Lambda$addAll$2::classInfo$.name)) {
			return DefaultListModelAddAllTest$$Lambda$addAll$2::load$(name, initialize);
		}
		if (name->equals(DefaultListModelAddAllTest$$Lambda$TreeSet$3::classInfo$.name)) {
			return DefaultListModelAddAllTest$$Lambda$TreeSet$3::load$(name, initialize);
		}
		if (name->equals(DefaultListModelAddAllTest$$Lambda$add$4::classInfo$.name)) {
			return DefaultListModelAddAllTest$$Lambda$add$4::load$(name, initialize);
		}
		if (name->equals(DefaultListModelAddAllTest$$Lambda$addAll$5::classInfo$.name)) {
			return DefaultListModelAddAllTest$$Lambda$addAll$5::load$(name, initialize);
		}
		if (name->equals(DefaultListModelAddAllTest$$Lambda$ArrayList$6::classInfo$.name)) {
			return DefaultListModelAddAllTest$$Lambda$ArrayList$6::load$(name, initialize);
		}
		if (name->equals(DefaultListModelAddAllTest$$Lambda$add$7::classInfo$.name)) {
			return DefaultListModelAddAllTest$$Lambda$add$7::load$(name, initialize);
		}
		if (name->equals(DefaultListModelAddAllTest$$Lambda$addAll$8::classInfo$.name)) {
			return DefaultListModelAddAllTest$$Lambda$addAll$8::load$(name, initialize);
		}
	}
	$loadClass(DefaultListModelAddAllTest, name, initialize, &_DefaultListModelAddAllTest_ClassInfo_, clinit$DefaultListModelAddAllTest, allocate$DefaultListModelAddAllTest);
	return class$;
}

$Class* DefaultListModelAddAllTest::class$ = nullptr;